/*
 * Copyright (c) 2026 Nils Gazarovs
 * SPDX-License-Identifier: Apache-2.0
 *
 * Three-body gravity simulator for Tiny Tapeout (1x1 tile), VGA 640x480.
 * Bit-exact with model/nbody_model.py hwB_frame. All arithmetic is bit-serial
 * (the state registers rotate past two 1-bit adders, one per axis) and runs
 * during vertical blanking.
 *
 * World: 256 x 256 torus, positions 8.3 fixed point, drawn at 2x scale.
 * Velocities: 12 bits, 10 fraction bits.
 *
 * Per ordered pair (i, j), D = r_j - r_i (wrapping):
 *   M = (|D| >> 3) mod 128 per axis             (magnitude in whole pixels)
 *   L = max(Mx, My) + 3/8 min                   (distance ~ |r|, -3%..+7%)
 *   e = leading one of L (min 2), m = next 4 bits, c = LUT[m] ~ 32 / (1 + m/16)^3
 *   for each set bit k of c:  v_i += sign(D) * round(M >> max(3e - 4 - code_j - k, -4))
 *   (a kick that would overflow v is undone: a speed limit)
 * The pull of j on i is exactly minus the pull of i on j, so momentum is conserved.
 * Then every position moves by round(v >> 7).
 *
 * Controls (ui): ui[1:0], ui[3:2], ui[5:4] = mass of body 0, 1, 2 (massless, 1, 8, 64),
 *   ui[6] = 4x speed (12 steps per frame instead of 3), ui[7] = restart as Sun + Earth.
 * Scenes: reset = three-body chaos (all bodies 10), ui[7] = Sun + Earth (body 0 = 11, body 1 = 01, body 2 = 00).
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

  // ------------------------------------------------------------- controls
  // ui[1:0], ui[3:2], ui[5:4]: mass of body 0, 1, 2 (massless, 1, 8, 64), live
  function automatic [2:0] msw(input [1:0] v);
    case (v)
      2'd0:    msw = 3'd0;
      2'd1:    msw = 3'd1;
      2'd2:    msw = 3'd4;
      default: msw = 3'd7;
    endcase
  endfunction
  wire [2:0] mcode0 = msw(ui_in[1:0]);
  wire [2:0] mcode1 = msw(ui_in[3:2]);
  wire [2:0] mcode2 = msw(ui_in[5:4]);
  wire       fast   = ui_in[6];        // 12 steps per frame instead of 3

  // ui[7] restarts the Sun + Earth scene (while held); reset starts the chaos scene
  reg  restart;
  always @(posedge clk) restart <= ui_in[7];
  reg  scene;
  always @(posedge clk) begin
    if (!rst_n)       scene <= 1'b0;
    else if (restart) scene <= 1'b1;
  end

  // ------------------------------------------------------- body state
  wire [P-1:0] px [0:2];
  wire [P-1:0] py [0:2];
  wire [V-1:0] vx [0:2];
  wire [V-1:0] vy [0:2];

  // ------------------------------------------------------ controller
  localparam S_IDLE = 3'd0, S_D = 3'd1, S_ABS = 3'd2, S_A = 3'd3, S_U = 3'd4, S_P = 3'd5,
             S_INIT = 3'd6;
  reg [2:0] state;
  reg [3:0] t;          // clock within a pass
  reg [2:0] pair;       // 0..5: (0,1) (0,2) (1,0) (1,2) (2,0) (2,1)
  reg [2:0] k;          // LUT bit being applied
  reg       cx, cy;     // carries of the x / y serial adders
  reg [7:0] dxr, dyr;   // D[10:3], then {sign of D, M = (|D| >> 3) mod 128}
  reg       zx, zy;     // D[2:0] == 0
  reg       ux, uy;     // this axis overflowed: undo it in S_U
  reg       vsx, vsy;   // velocity signs during S_P

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
  wire [2:0] code_j = (bj == 2'd0) ? mcode0 : (bj == 2'd1) ? mcode1 : mcode2;

  // ---------------------------------------------------- 1/r^3 factor
  wire [6:0] mxm = dxr[6:0], mym = dyr[6:0];
  wire       xbig = mxm >= mym;
  wire [6:0] hi = xbig ? mxm : mym;
  wire [6:0] lo = xbig ? mym : mxm;
  wire [7:0] oct = {1'b0, hi} + {3'b000, lo[6:2]} + {4'b0000, lo[6:3]};   // max + 3/8 min

  reg [2:0] e;       // leading one of oct, at least 2
  reg [3:0] mant;    // the next 4 bits
  always @(*) begin
    casez (oct)
      8'b1???????: begin e = 3'd7; mant = oct[6:3]; end
      8'b01??????: begin e = 3'd6; mant = oct[5:2]; end
      8'b001?????: begin e = 3'd5; mant = oct[4:1]; end
      8'b0001????: begin e = 3'd4; mant = oct[3:0]; end
      8'b00001???: begin e = 3'd3; mant = {oct[2:0], 1'b0}; end
      8'b000001??: begin e = 3'd2; mant = {oct[1:0], 2'b00}; end
      default:     begin e = 3'd2; mant = 4'd0; end
    endcase
  end
  // 1/r^3 table, ~32 / (1 + (m + 0.5)/16)^3: one kick pass per set bit
  reg [4:0] lut;
  always @(*) case (mant[3:2])
    2'd0: lut = 6; 2'd1: lut = 3; 2'd2: lut = 2; default: lut = 1;
  endcase
  wire kon = lut[k] & (code_j != 3'd0);

  // shift for this pass: 3e - 4 - code_j - k, softened to at least -4. M < 2^(e+1),
  // so the kick round(M >> sh) always fits in 11 bits: only the sum can overflow.
  wire [5:0] e3 = {2'b00, e, 1'b0} + {3'b000, e};
  wire signed [5:0] shr = $signed(e3) - 6'sd6 - $signed({3'b000, code_j}) - $signed({3'b000, k});
  wire signed [5:0] sh  = (shr < -6'sd4) ? -6'sd4 : shr;
  // tap index for clock t: bit (t - 1) of M >> sh (t = 0: the rounding bit)
  wire signed [5:0] q   = $signed({2'b00, t}) + sh - 6'sd1;

  function automatic tapm(input [6:0] m, input signed [5:0] idx);
    tapm = (idx < 0 || idx > 6) ? 1'b0 : m[idx[2:0]];
  endfunction

  // kick bit at this clock; an undo pass repeats it only on the overflowed axes
  wire tx = kon & tapm(mxm, q) & (state == S_A || ux);
  wire ty = kon & tapm(mym, q) & (state == S_A || uy);
  // add (D >= 0) or subtract (D < 0); the undo pass does the opposite
  wire nx = dxr[7] ^ (state == S_U);
  wire ny = dyr[7] ^ (state == S_U);

  // --------------------------------------------- serial adder operands
  // S_P walks pairs 0, 2, 4, so bi is body 0, 1, 2 there
  wire [V-1:0] vxb = vx[bi];
  wire [V-1:0] vyb = vy[bi];
  wire         first = (t == 4'd0);

  reg a_x, b_x, a_y, b_y, c0x, c0y;   // operands and first-bit carry-ins
  always @(*) begin
    a_x = 1'b0; b_x = 1'b0; a_y = 1'b0; b_y = 1'b0; c0x = 1'b0; c0y = 1'b0;
    case (state)
      S_D: begin   // r_j - r_i = r_j + ~r_i + 1
        a_x = px[bj][0]; b_x = ~px[bi][0];
        a_y = py[bj][0]; b_y = ~py[bi][0];
        c0x = 1'b1;      c0y = 1'b1;
      end
      S_ABS: begin // |D| >> 3 = (D[9:3] ^ s) + (s & z), the sign stays in bit 7
        a_x = dxr[0] ^ dxr[7];  c0x = dxr[7] & zx;
        a_y = dyr[0] ^ dyr[7];  c0y = dyr[7] & zy;
      end
      S_A, S_U: begin   // v_i + (T ^ n) + (n ^ rounding bit) = v_i -+ round(M >> sh)
        a_x = vx[bi][0];  b_x = tx ^ nx;
        a_y = vy[bi][0];  b_y = ty ^ ny;
      end
      S_P: begin   // pos += round(v >>> 7)
        a_x = px[bi][0];
        a_y = py[bi][0];
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

  wire cin_x = first ? c0x : cx;
  wire cin_y = first ? c0y : cy;
  wire sx  = a_x ^ b_x ^ cin_x;
  wire sy  = a_y ^ b_y ^ cin_y;
  wire cox = (a_x & b_x) | (a_x & cin_x) | (b_x & cin_x);
  wire coy = (a_y & b_y) | (a_y & cin_y) | (b_y & cin_y);

  // last clock of an S_A pass: signed overflow = carry into bit 11 != carry out
  wire ovx = cin_x ^ cox, ovy = cin_y ^ coy;

  wire start = (vpos == 10'd480) && (hpos == 10'd0);
  // keep starting steps while in the first 2 (or 8) lines of blanking: ~3 (~12) steps
  wire [5:0] vline = vpos[5:0] - 6'd32;     // vpos - 480 for vpos in 480..524
  wire       more  = fast ? (vline < 6'd8) : (vline < 6'd2);

  // ------------------------------------------- gated state registers
  // Each body's position pair and velocity pair sit on their own gated clock,
  // so the state bits are plain flip-flops without enable muxes.
  genvar g;
  generate
    for (g = 0; g < 3; g = g + 1) begin : body
      wire en_pos = (state == S_INIT && t <= 4'd10) || (state == S_D && (bi == g || bj == g)) ||
                    (state == S_P && bi == g && t <= 4'd10);
      wire en_vel = (state == S_INIT) || ((state == S_A || state == S_U) && bi == g && !first) ||
                    (state == S_P && bi == g);
      wire gclk_pos, gclk_vel;
      clkgate cg_pos (.clk(clk), .en(en_pos), .gclk(gclk_pos));
      clkgate cg_vel (.clk(clk), .en(en_vel), .gclk(gclk_vel));

      reg [P-1:0] rx, ry;
      reg [V-1:0] rvx, rvy;
      assign px[g] = rx;
      assign py[g] = ry;
      assign vx[g] = rvx;
      assign vy[g] = rvy;

      // starting scenes (model/nbody_model.py), shifted in serially in S_INIT
      localparam [V-1:0] CX0 = (g == 0) ? -12'sd200 : (g == 1) ? 12'sd200 : 12'sd0;
      localparam [V-1:0] CY0 = (g == 2) ? -12'sd760 : 12'sd0;
      localparam [V-1:0] CVX = (g == 2) ? 12'sd420 : -12'sd210;
      localparam [V-1:0] CVY = (g == 0) ? -12'sd290 : (g == 1) ? 12'sd290 : 12'sd0;
      localparam [V-1:0] SX0 = (g == 0) ? -12'sd12 : (g == 1) ? 12'sd740 : -12'sd960;
      localparam [V-1:0] SY0 = (g == 2) ? 12'sd960 : 12'sd0;
      localparam [V-1:0] SVY = (g == 0) ? -12'sd13 : (g == 1) ? 12'sd809 : 12'sd0;
      wire init = (state == S_INIT);
      wire ix  = scene ? SX0[t] : CX0[t];
      wire iy  = scene ? SY0[t] : CY0[t];
      wire ivx = !scene & CVX[t];            // the Sun + Earth scene starts with vx = 0
      wire ivy = scene ? SVY[t] : CVY[t];

      always @(posedge gclk_pos) begin
        rx <= {init ? ix : (state == S_P) ? sx : rx[0], rx[P-1:1]};
        ry <= {init ? iy : (state == S_P) ? sy : ry[0], ry[P-1:1]};
      end

      // S_A / S_U: take the sum; S_P: rotate (read at bit 7)
      always @(posedge gclk_vel) begin
        rvx <= {init ? ivx : (state == S_P) ? rvx[0] : sx, rvx[V-1:1]};
        rvy <= {init ? ivy : (state == S_P) ? rvy[0] : sy, rvy[V-1:1]};
      end
    end
  endgenerate

  // D register on its own gated clock: S_D shifts in D[10:3], S_ABS turns
  // bits 6..0 into the magnitude
  wire en_d = (state == S_D && t >= 4'd3) || (state == S_ABS);
  wire gclk_d;
  clkgate cg_d (.clk(clk), .en(en_d), .gclk(gclk_d));
  always @(posedge gclk_d) begin
    dxr <= {(state == S_D) ? sx : dxr[7], (state == S_D) ? dxr[7] : sx, dxr[6:1]};
    dyr <= {(state == S_D) ? sy : dyr[7], (state == S_D) ? dyr[7] : sy, dyr[6:1]};
  end

  // --------------------------------------------------------- sequencer
  // after a pass (and its undo, if any): next LUT bit, next pair, or positions
  wire last_k = (k == 3'd2);
  wire a_done = (t == 4'd12);

  always @(posedge clk) begin
    if (!rst_n || restart) begin
      state <= S_INIT; t <= 4'd0; pair <= 3'd0; k <= 3'd0;
    end else begin
      // serial carries; an S_A / S_U pass starts with n ^ rounding bit
      if ((state == S_A || state == S_U) && first) begin cx <= nx ^ tx; cy <= ny ^ ty; end
      else                                         begin cx <= cox;     cy <= coy;     end
      case (state)
        S_INIT: begin
          if (t == 4'd11) begin state <= S_IDLE; t <= 4'd0; end
          else t <= t + 4'd1;
        end

        S_IDLE: if (start) begin
          state <= S_D; t <= 4'd0; pair <= 3'd0;
        end

        // D = r_j - r_i: note whether D[2:0] == 0, keep D[10:3]
        S_D: begin
          if (first)          begin zx <= ~sx;       zy <= ~sy;       end
          else if (t <= 4'd2) begin zx <= zx & ~sx;  zy <= zy & ~sy;  end
          if (t == 4'd10) begin state <= S_ABS; t <= 4'd0; end
          else t <= t + 4'd1;
        end

        // magnitudes: 7 clocks of (D ^ s) + (s & z) through bits 6..0
        S_ABS: begin
          if (t == 4'd6) begin state <= S_A; t <= 4'd0; k <= 3'd0; end
          else t <= t + 4'd1;
        end

        // kick: clock 0 loads the carry, 1..12 add; an overflow is undone by S_U
        S_A, S_U: begin
          if (a_done) begin
            t <= 4'd0;
            ux <= ovx; uy <= ovy;
            if (state == S_A && (ovx | ovy)) state <= S_U;
            else if (!last_k) begin state <= S_A; k <= k + 3'd1; end
            else if (pair != 3'd5) begin state <= S_D; pair <= pair + 3'd1; end
            else begin state <= S_P; pair <= 3'd0; end
          end else t <= t + 4'd1;
        end

        // positions: p += round(v >> 7); v rotates 12 clocks, p 11
        S_P: begin
          if (first) begin vsx <= vxb[V-1]; vsy <= vyb[V-1]; end
          if (t == 4'd11) begin
            t <= 4'd0;
            if (pair != 3'd4) pair <= pair + 3'd2;
            else if (more) begin state <= S_D; pair <= 3'd0; end
            else state <= S_IDLE;
          end else t <= t + 4'd1;
        end

        default: state <= S_IDLE;
      endcase
    end
  end

  // ------------------------------------------------------------ drawing
  // Body screen position: (320 + 2x, 240 + 2y) with x, y the integer parts.
  // A body's 16x16 window spans world offsets -4..3; with the beam position
  // taken 4 world pixels (8 screen pixels) ahead the offset d runs 0..7, so
  // the window test is just d[7:3] == 0.
  wire [9:0] hq = hpos - 10'd312;           // screen x - 320 + 8
  wire [9:0] vq = vpos - 10'd232;           // screen y - 240 + 8
  wire [7:0] wx = hq[8:1];
  wire [7:0] wy = vq[8:1];
  wire [7:0] d0x = wx - px[0][P-1:3], d0y = wy - py[0][P-1:3];
  wire [7:0] d1x = wx - px[1][P-1:3], d1y = wy - py[1][P-1:3];
  wire [7:0] d2x = wx - px[2][P-1:3], d2y = wy - py[2][P-1:3];
  // bodies only inside the 512-pixel world window (no wrapped ghosts outside it)
  wire in_world = 1'b1;   // wrapped copies show in the screen margins

  // one shared shape test: the first body whose window holds this pixel
  wire w0 = in_world && (d0x[7:3] == 5'd0) && (d0y[7:3] == 5'd0);
  wire w1 = in_world && (d1x[7:3] == 5'd0) && (d1y[7:3] == 5'd0);
  wire w2 = in_world && (d2x[7:3] == 5'd0) && (d2y[7:3] == 5'd0);
  wire [2:0] selx = w0 ? d0x[2:0] : w1 ? d1x[2:0] : d2x[2:0];
  wire [2:0] sely = w0 ? d0y[2:0] : w1 ? d1y[2:0] : d2y[2:0];
  wire [2:0] selc = w0 ? mcode0 : w1 ? mcode1 : mcode2;
  // square: 4 px for masses up to 4, 8 px for 8..32, 16 px for 64. The world
  // offset is d - 4 in -4..3; adx = one's complement |d - 4| in 0..3
  wire [1:0] adx = selx[2] ? selx[1:0] : ~selx[1:0];
  wire [1:0] ady = sely[2] ? sely[1:0] : ~sely[1:0];
  wire m8  = selc[2];                       // mass >= 8: |offset| < 2 world px
  wire m64 = &selc;                         // mass 64: the whole window
  wire hit = (w0 | w1 | w2) && !((adx[1] | ady[1]) & !m64) && !((adx[0] | ady[0]) & !m8);
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

  assign uo_out  = visible ? {hsync, rgb[0], rgb[2], rgb[4], vsync, rgb[1], rgb[3], rgb[5]}
                           : {hsync, 3'b000, vsync, 3'b000};
  assign uio_out = 8'h00;
  assign uio_oe  = 8'h00;

  wire _unused = &{ena, ui_in[7], uio_in, lo[1:0], px[0][2:0], py[0][2:0], px[1][2:0], py[1][2:0],
                   px[2][2:0], py[2][2:0], hq[9], hq[0], vq[9], vq[0], e3[5], 1'b0};

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
