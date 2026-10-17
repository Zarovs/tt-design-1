/*
 * Copyright (c) 2026 Nils Gazarovs
 * SPDX-License-Identifier: Apache-2.0
 *
 * Three-body gravity simulator for Tiny Tapeout (1x1 tile), VGA 640x480.
 *
 * Real inverse-square gravity between three bodies, masses set live with
 * the switches. Everything is bit-serial: the state registers rotate past
 * two 1-bit adders (one per axis) during vertical blanking.
 *
 * World: 256 x 256 torus, positions 8.3 fixed point, drawn at 2x scale
 * centred on the screen. Velocities: 12 bits, 10 fraction bits.
 *
 * Per ordered pair (i, j), with dx, dy the integer part of r_j - r_i:
 *   L   = max(|dx|,|dy|) + 1/4 min      (octagonal distance ~ |r|)
 *   e   = leading one of L (min 2), m = next 2 bits
 *   c   = mass_j * LUT[m]               (LUT ~ 8 / (1 + m/4)^3, mass_j = 2^n)
 *   v_i += (c * d) >> (3e - 10)         (sum of rounded shifts, one per bit of c)
 * then all positions += round(v >> 7). Bit-exact with model/nbody_model.py hw_step.
 *
 * Inputs:  ui[1:0] mass of body 0, ui[3:2] body 1, ui[5:4] body 2
 *          (mass = 2^bits: 1, 2, 4, 8), ui[6] pause, uio[2:0] speed (steps per frame = 2^(uio ^ 3), default 8)
 * Outputs: TinyVGA PMOD on uo_out.
 */

`default_nettype none

module tt_um_zarovs_nbody (
    input  wire [7:0] ui_in,
    output wire [7:0] uo_out,
    input  wire [7:0] uio_in,
    output wire [7:0] uio_out,
    output wire [7:0] uio_oe,
    input  wire       ena,
    input  wire       clk,
    input  wire       rst_n
);

  localparam P = 11;   // position width (8.3)
  localparam V = 12;   // velocity width (2.10)

  // ------------------------------------------------------------ VGA timing
  reg [9:0] hpos, vpos;
  wire hlast = (hpos == 10'd799);
  wire vlast = (vpos == 10'd524);

  always @(posedge clk) begin
    if (!rst_n) begin
      hpos <= 10'd0;
      vpos <= 10'd0;
    end else if (hlast) begin
      hpos <= 10'd0;
      vpos <= vlast ? 10'd0 : vpos + 10'd1;
    end else begin
      hpos <= hpos + 10'd1;
    end
  end

  wire visible = (hpos < 10'd640) && (vpos < 10'd480);
  wire hsync   = ~((hpos >= 10'd656) && (hpos < 10'd752));
  wire vsync   = ~((vpos >= 10'd490) && (vpos < 10'd492));

  // ------------------------------------------------------------- inputs
  // masses are powers of two: mass = 2^ui bits (1, 2, 4, 8)
  wire [1:0] mexp0 = ui_in[1:0];
  wire [1:0] mexp1 = ui_in[3:2];
  wire [1:0] mexp2 = ui_in[5:4];
  wire       pause = ui_in[6];
  // speed: new physics steps start while the beam is in the first 2^spd
  // lines of vertical blanking (one step = 336 clocks, about 0.42 lines)
  wire [2:0] spd   = uio_in[2:0] ^ 3'd3;

  // ------------------------------------------------------- body state
  // Rotating registers, LSB first. Index: body 0..2.
  wire [P-1:0] px [0:2];
  wire [P-1:0] py [0:2];
  wire [V-1:0] vx [0:2];
  wire [V-1:0] vy [0:2];

  // ------------------------------------------------------ controller
  localparam S_IDLE = 3'd0, S_D = 3'd1, S_A = 3'd2, S_P = 3'd3, S_INIT = 3'd4;
  reg [2:0] state;
  reg [3:0] t;          // bit index within a pass
  reg [2:0] pair;       // 0..5: (0,1) (0,2) (1,0) (1,2) (2,0) (2,1)
  reg [1:0] k;          // bit of the LUT value being applied
  reg [1:0] pb;         // body in the position phase
  reg       cx, cy;     // carries of the two serial adders
  reg [7:0] dxr, dyr;   // integer part of r_j - r_i (shifted in LSB first)

  reg [1:0] bi, bj;
  always @(*) begin
    case (pair)
      3'd0:    begin bi = 2'd0; bj = 2'd1; end
      3'd1:    begin bi = 2'd0; bj = 2'd2; end
      3'd2:    begin bi = 2'd1; bj = 2'd0; end
      3'd3:    begin bi = 2'd1; bj = 2'd2; end
      3'd4:    begin bi = 2'd2; bj = 2'd0; end
      default: begin bi = 2'd2; bj = 2'd1; end
    endcase
  end

  wire [1:0] mexp_j = (bj == 2'd0) ? mexp0 : (bj == 2'd1) ? mexp1 : mexp2;

  // ---------------------------------------------------- 1/r^3 factor
  // one's complement |d| (off by one for negatives, as in the model)
  wire [6:0] ax = dxr[6:0] ^ {7{dxr[7]}};
  wire [6:0] ay = dyr[6:0] ^ {7{dyr[7]}};
  wire       xbig = ax >= ay;
  wire [6:0] hi = xbig ? ax : ay;
  wire [6:0] lo = xbig ? ay : ax;
  wire [7:0] oct = {1'b0, hi} + {3'b000, lo[6:2]};

  reg [2:0] e;       // leading one of oct, at least 2
  reg [1:0] mant;
  always @(*) begin
    casez (oct)
      8'b1???????: begin e = 3'd7; mant = oct[6:5]; end
      8'b01??????: begin e = 3'd6; mant = oct[5:4]; end
      8'b001?????: begin e = 3'd5; mant = oct[4:3]; end
      8'b0001????: begin e = 3'd4; mant = oct[3:2]; end
      8'b00001???: begin e = 3'd3; mant = oct[2:1]; end
      8'b000001??: begin e = 3'd2; mant = oct[1:0]; end
      default:     begin e = 3'd2; mant = 2'd0;     end
    endcase
  end

  reg [2:0] lut;
  always @(*) begin
    case (mant)
      2'd0:    lut = 3'd6;
      2'd1:    lut = 3'd3;
      2'd2:    lut = 3'd2;
      default: lut = 3'd1;
    endcase
  end
  // c = mass_j * lut = lut << mexp_j: bit k of lut is applied with shift
  // 3e - 10 - mexp_j - k, range -15..11
  wire [5:0] e3 = {2'b00, e, 1'b0} + {3'b000, e};
  wire signed [5:0] sh = $signed(e3) - 6'sd10 - $signed({4'b0000, mexp_j}) - $signed({4'b0000, k});
  // Phase A runs t = 0..12: t = 0 only loads the rounding bit d[sh-1] into the
  // carry, t = 1..12 add bit (t-1) of round(d >>> sh) into v.
  wire signed [5:0] q  = $signed({2'b00, t}) + sh - 6'sd1;   // tap index into dxr/dyr

  function automatic tapd(input [7:0] d, input signed [5:0] idx);
    begin
      if (idx < 0)      tapd = 1'b0;
      else if (idx > 7) tapd = d[7];
      else              tapd = d[idx[2:0]];
    end
  endfunction

  wire kon = lut[k];

  // --------------------------------------------- serial adder operands
  wire [V-1:0] vxb = vx[pb];
  wire [V-1:0] vyb = vy[pb];
  reg          vsx, vsy;                           // velocity signs during phase P

  reg a_x, b_x, a_y, b_y, c0x, c0y;   // operands and first-bit carry-ins
  always @(*) begin
    a_x = 1'b0; b_x = 1'b0; a_y = 1'b0; b_y = 1'b0; c0x = 1'b0; c0y = 1'b0;
    case (state)
      S_D: begin   // r_j - r_i = r_j + ~r_i + 1
        a_x = px[bj][0]; b_x = ~px[bi][0];
        a_y = py[bj][0]; b_y = ~py[bi][0];
        c0x = 1'b1;      c0y = 1'b1;
      end
      S_A: begin   // v_i += round(d >>> sh) when bit k of c is set
        a_x = vx[bi][0];
        a_y = vy[bi][0];
        b_x = kon & tapd(dxr, q);
        b_y = kon & tapd(dyr, q);
      end
      S_P: begin   // pos += round(v >>> 7)
        a_x = px[pb][0];
        a_y = py[pb][0];
        // v rotates one bit per clock, so bit 7 now holds original bit t+7;
        // above bit 11 use the sign captured at t = 0
        b_x = (t > 4'd4) ? vsx : vxb[7];
        b_y = (t > 4'd4) ? vsy : vyb[7];
        c0x = vxb[6];
        c0y = vyb[6];
      end
      default: ;
    endcase
  end

  wire first = (t == 4'd0);
  wire cin_x = (first && state != S_A) ? c0x : cx;
  wire cin_y = (first && state != S_A) ? c0y : cy;
  wire sx  = a_x ^ b_x ^ cin_x;
  wire sy  = a_y ^ b_y ^ cin_y;
  wire cox = (a_x & b_x) | (a_x & cin_x) | (b_x & cin_x);
  wire coy = (a_y & b_y) | (a_y & cin_y) | (b_y & cin_y);

  wire last_p = (t == P - 1);
  wire last_v = (t == V - 1);
  wire start  = !pause && (vpos == 10'd480) && (hpos == 10'd0);
  wire [5:0] vline = vpos[5:0] - 6'd32;     // vpos - 480 for vpos in 480..524
  wire more  = ((vline >> spd) == 6'd0) && (vline < 6'd43);

  // ------------------------------------------- gated state registers
  // Each body's position pair and velocity pair sits on its own gated clock,
  // so the 138 state bits are plain flip-flops without enable muxes.
  // Clocks run only while that register rotates (and during reset).
  genvar g;
  generate
    for (g = 0; g < 3; g = g + 1) begin : body
      wire en_pos = (state == S_INIT && !last_v) || (state == S_D && (bi == g || bj == g)) ||
                    (state == S_P && pb == g && !last_v);
      wire en_vel = (state == S_INIT) || (state == S_A && bi == g && !first) || (state == S_P && pb == g);
      wire gclk_pos, gclk_vel;
      clkgate cg_pos (.clk(clk), .en(en_pos), .gclk(gclk_pos));
      clkgate cg_vel (.clk(clk), .en(en_vel), .gclk(gclk_vel));

      reg [P-1:0] rx, ry;
      reg [V-1:0] rvx, rvy;
      assign px[g] = rx;
      assign py[g] = ry;
      assign vx[g] = rvx;
      assign vy[g] = rvy;

      // Default scene (model/nbody_model.py hw_scene), shifted in serially
      // during S_INIT instead of a reset on every bit.
      localparam [P-1:0] X0  = (g == 0) ? -11'sd200 : (g == 1) ? 11'sd200 : 11'sd0;
      localparam [P-1:0] Y0  = (g == 2) ? -11'sd760 : 11'sd0;
      localparam [V-1:0] VX0 = (g == 2) ? 12'sd420 : -12'sd210;
      localparam [V-1:0] VY0 = (g == 0) ? -12'sd290 : (g == 1) ? 12'sd290 : 12'sd0;
      wire init = (state == S_INIT);

      always @(posedge gclk_pos) begin
        rx <= {init ? X0[t] : (state == S_P) ? sx : rx[0], rx[P-1:1]};
        ry <= {init ? Y0[t] : (state == S_P) ? sy : ry[0], ry[P-1:1]};
      end

      // phase A: take the sum; phase P: just rotate (read at bit 7)
      always @(posedge gclk_vel) begin
        rvx <= {init ? VX0[t] : (state == S_A) ? sx : rvx[0], rvx[V-1:1]};
        rvy <= {init ? VY0[t] : (state == S_A) ? sy : rvy[0], rvy[V-1:1]};
      end
    end
  endgenerate

  always @(posedge clk) begin
    if (!rst_n) begin
      state <= S_INIT; t <= 4'd0; pair <= 3'd0; k <= 2'd0; pb <= 2'd0;
      cx <= 1'b0; cy <= 1'b0; dxr <= 8'd0; dyr <= 8'd0; vsx <= 1'b0; vsy <= 1'b0;
    end else begin
      if (state == S_A && first) begin   // rounding bit, no addition yet
        cx <= b_x & (sh > 0);
        cy <= b_y & (sh > 0);
      end else begin
        cx <= cox;
        cy <= coy;
      end
      case (state)
        S_INIT: begin
          if (last_v) begin state <= S_IDLE; t <= 4'd0; end
          else t <= t + 4'd1;
        end

        S_IDLE: if (start) begin
          state <= S_D; t <= 4'd0; pair <= 3'd0;
        end

        S_D: begin
          // positions of bodies i and j rotate (gated clocks below);
          // keep the integer bits of the difference
          if (t >= 4'd3) begin
            dxr <= {sx, dxr[7:1]};
            dyr <= {sy, dyr[7:1]};
          end
          if (last_p) begin state <= S_A; t <= 4'd0; k <= 2'd0; end
          else t <= t + 4'd1;
        end

        S_A: begin
          if (t == V) begin
            t <= 4'd0;
            if (k != 2'd2) k <= k + 2'd1;
            else if (pair != 3'd5) begin state <= S_D; pair <= pair + 3'd1; end
            else begin state <= S_P; pb <= 2'd0; end
          end else t <= t + 4'd1;
        end

        S_P: begin
          if (first) begin vsx <= vxb[V-1]; vsy <= vyb[V-1]; end
          if (last_v) begin
            t <= 4'd0;
            if (pb != 2'd2) pb <= pb + 2'd1;
            else if (more) begin state <= S_D; pair <= 3'd0; end
            else state <= S_IDLE;
          end else t <= t + 4'd1;
        end

        default: state <= S_IDLE;
      endcase
    end
  end

  // ------------------------------------------------------------ drawing
  // Body screen position: (320 + 2x, 240 + 2y) with x, y the signed integer parts.
  wire signed [10:0] sxp = $signed({1'b0, hpos}) - 11'sd320;
  wire signed [10:0] syp = $signed({1'b0, vpos}) - 11'sd240;

  function automatic [6:0] sq4(input [3:0] v);
    reg [3:0] a;
    begin
      a = v[3] ? (~v + 4'd1) : v;
      sq4 = {3'b000, a} * {3'b000, a};
    end
  endfunction

  // inside the 16x16 window around a body (offset in -8..7 on both axes)
  function automatic inwin(input [10:3] ox, input [10:3] oy);
    inwin = ((ox == 8'h00) || (ox == 8'hFF)) && ((oy == 8'h00) || (oy == 8'hFF));
  endfunction

  // radius 2 + mass (3..6 px), as r^2 + r
  function automatic [6:0] rr(input [1:0] m);
    case (m)
      2'd0:    rr = 7'd12;
      2'd1:    rr = 7'd20;
      2'd2:    rr = 7'd30;
      default: rr = 7'd42;
    endcase
  endfunction

  // Offsets in world pixels (8-bit, wrapping like the world) plus the screen
  // half-pixel bit: {wx - x, sxp[0]} equals sxp - 2x modulo 512.
  wire [7:0] wx = sxp[8:1];   // sxp[10:9] unused: the world wraps every 512 px
  wire [7:0] wy = syp[8:1];
  wire [7:0] d0x = wx - px[0][P-1:3], d0y = wy - py[0][P-1:3];
  wire [7:0] d1x = wx - px[1][P-1:3], d1y = wy - py[1][P-1:3];
  wire [7:0] d2x = wx - px[2][P-1:3], d2y = wy - py[2][P-1:3];
  wire [10:0] o0x = {{2{d0x[7]}}, d0x, sxp[0]}, o0y = {{2{d0y[7]}}, d0y, syp[0]};
  wire [10:0] o1x = {{2{d1x[7]}}, d1x, sxp[0]}, o1y = {{2{d1y[7]}}, d1y, syp[0]};
  wire [10:0] o2x = {{2{d2x[7]}}, d2x, sxp[0]}, o2y = {{2{d2y[7]}}, d2y, syp[0]};
  // bodies only inside the 512-pixel world window (no wrapped ghosts outside it)
  // sxp in -256..255, i.e. bits 10..8 all equal
  wire in_world = (sxp[10:8] == 3'b000) || (sxp[10:8] == 3'b111);

  // One shared disk test: pick the first body whose window holds this pixel.
  wire w0 = in_world && inwin(o0x[10:3], o0y[10:3]);
  wire w1 = in_world && inwin(o1x[10:3], o1y[10:3]);
  wire w2 = in_world && inwin(o2x[10:3], o2y[10:3]);
  wire [3:0] selx = w0 ? o0x[3:0] : w1 ? o1x[3:0] : o2x[3:0];
  wire [3:0] sely = w0 ? o0y[3:0] : w1 ? o1y[3:0] : o2y[3:0];
  wire [1:0] selm = w0 ? mexp0    : w1 ? mexp1    : mexp2;
  wire hit = (w0 | w1 | w2) && (({1'b0, sq4(selx)} + {1'b0, sq4(sely)}) <= {1'b0, rr(selm)});
  wire on0 = hit && w0;
  wire on1 = hit && !w0 && w1;
  wire on2 = hit && !w0 && !w1;

  reg [5:0] rgb;   // {R1 R0, G1 G0, B1 B0}
  always @(*) begin
    if (on0)         rgb = 6'b11_11_00;   // yellow
    else if (on1)    rgb = 6'b00_11_11;   // cyan
    else if (on2)    rgb = 6'b11_01_11;   // pink
    else             rgb = 6'b00_00_00;
  end

  // outputs straight from the (registered) counters and state, no extra stage
  wire [7:0] out_r = visible ? {hsync, rgb[0], rgb[2], rgb[4], vsync, rgb[1], rgb[3], rgb[5]}
                             : {hsync, 3'b000, vsync, 3'b000};

  assign uo_out  = out_r;
  assign uio_out = 8'h00;
  assign uio_oe  = 8'h00;

  wire _unused = &{ena, ui_in[7], uio_in[7:3], lo[1:0], px[0][2:0], py[0][2:0],
                   px[1][2:0], py[1][2:0], px[2][2:0], py[2][2:0], syp[10:9],
                   o0x[2:0], o0y[2:0], o1x[2:0], o1y[2:0], o2x[2:0], o2y[2:0], 1'b0};

endmodule

// Clock gate: sky130 latch-based integrated clock gating cell in synthesis,
// equivalent behavioural model in simulation.
module clkgate (
    input  wire clk,
    input  wire en,
    output wire gclk
);
`ifdef SYNTHESIS
  sky130_fd_sc_hd__dlclkp_1 cg (.CLK(clk), .GATE(en), .GCLK(gclk));
`else
  reg en_l;
  /* verilator lint_off LATCH */
  always @(clk or en) if (!clk) en_l = en;
  /* verilator lint_on LATCH */
  assign gclk = clk & en_l;
`endif
endmodule
