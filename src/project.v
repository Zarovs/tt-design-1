/*
 * Copyright (c) 2026 Nils Gazarovs
 * SPDX-License-Identifier: Apache-2.0
 *
 * Solar system simulator for Tiny Tapeout (1x1 tile).
 * 640x480 @ 60 Hz VGA (25.175 MHz pixel clock), TinyVGA PMOD pinout.
 *
 * No framebuffer: every pixel is computed as the beam passes.
 *  - Squared distance to the screen centre is tracked incrementally
 *    (adders only), which draws the sun and the orbit rings.
 *  - Planets move on Minsky circles (x -= y>>>k; y += x>>>k), updated
 *    during vertical blanking. These orbits are exactly periodic and never decay.
 *  - Planet sprites are small disks tested in a 16x16 window.
 *  - A 19-bit LFSR, restarted every frame, draws a fixed starfield.
 *
 * Inputs:
 *   ui[0]   pause
 *   ui[2:1] speed: 1, 2, 4 or 8 orbit steps per frame
 *   ui[3]   hide orbit rings
 *   ui[4]   hide stars
 */

`default_nettype none

module tt_um_zarovs_solar_system (
    input  wire [7:0] ui_in,    // Dedicated inputs
    output wire [7:0] uo_out,   // Dedicated outputs
    input  wire [7:0] uio_in,   // IOs: Input path
    output wire [7:0] uio_out,  // IOs: Output path
    output wire [7:0] uio_oe,   // IOs: Enable path (active high: 0=input, 1=output)
    input  wire       ena,      // always 1 when the design is powered, so you can ignore it
    input  wire       clk,      // clock
    input  wire       rst_n     // reset_n - low to reset
);

  // ---------------------------------------------------------------- inputs
  wire       pause      = ui_in[0];
  wire [1:0] speed      = ui_in[2:1];
  wire       rings_off  = ui_in[3];
  wire       stars_off  = ui_in[4];

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

  // Pixel position relative to the sun at (320, 240)
  wire signed [10:0] dx = $signed({1'b0, hpos}) - 11'sd320;
  wire signed [10:0] dy = $signed({1'b0, vpos}) - 11'sd240;

  // ------------------------------------------- incremental dx^2 + dy^2
  // d2 always equals dx*dx + dy*dy for the current (hpos, vpos).
  // row holds the value at hpos == 0 of the current line.
  localparam [18:0] D2_ORIGIN = 19'd160000;  // 320^2 + 240^2
  reg  [18:0] d2, row;
  wire [18:0] dx_step = {{7{dx[10]}}, dx, 1'b1};   // 2*dx + 1
  wire [18:0] dy_step = {{7{dy[10]}}, dy, 1'b1};   // 2*dy + 1
  wire [18:0] row_next = row + dy_step;

  always @(posedge clk) begin
    if (!rst_n) begin
      d2  <= D2_ORIGIN;
      row <= D2_ORIGIN;
    end else if (hlast) begin
      if (vlast) begin
        d2  <= D2_ORIGIN;
        row <= D2_ORIGIN;
      end else begin
        d2  <= row_next;
        row <= row_next;
      end
    end else begin
      d2 <= d2 + dx_step;
    end
  end

  // ----------------------------------------------------- frame counter
  reg [5:0] frame;
  always @(posedge clk) begin
    if (!rst_n) frame <= 6'd0;
    else if (hlast && vlast) frame <= frame + 6'd1;
  end

  // ------------------------------------------------- orbit stepping
  // Orbits are updated bit-serially by one shared 1-bit adder during
  // vertical blanking, instead of two full-width adders per body.
  // One Minsky step for one body is two passes over its W bits:
  //   pass 0: x = x - (y >>> K)      pass 1: y = y + (x >>> K)
  // Both registers rotate right one bit per clock (LSB first). The bit
  // y[i+K] needed at clock i sits at position K of the rotating register;
  // once i+K >= W it is the sign bit, captured at clock 0.
  // A full step for all 5 bodies takes 2*(13+15+17+10+18) = 146 clocks, so
  // even 8 steps (1168 clocks) finish inside blanking (36000 clocks).
  localparam NB = 5;   // bodies: 0 mercury, 1 venus, 2 earth, 3 moon, 4 mars

  reg       busy;
  reg [2:0] body;
  reg       pass;
  reg [4:0] bit_i;
  reg [3:0] steps_left;
  reg       carry, sign;

  reg [4:0] w_cur, wk_cur;   // W and W-K of the current body
  always @(*) begin
    case (body)
      3'd0:    begin w_cur = 5'd13; wk_cur = 5'd8;  end
      3'd1:    begin w_cur = 5'd15; wk_cur = 5'd9;  end
      3'd2:    begin w_cur = 5'd17; wk_cur = 5'd10; end
      3'd3:    begin w_cur = 5'd10; wk_cur = 5'd6;  end
      default: begin w_cur = 5'd18; wk_cur = 5'd10; end
    endcase
  end

  wire [NB-1:0] a_bits, tap_bits, sgn_bits;
  wire a_cur = a_bits[body];
  wire tb  = (bit_i < wk_cur) ? tap_bits[body] : sign;   // (y >>> K) bit i
  wire bb  = pass ? tb : ~tb;                            // subtract on pass 0
  wire cin = (bit_i == 5'd0) ? ~pass : carry;            // +1 for two's complement
  wire new_bit = a_cur ^ bb ^ cin;

  wire last_bit  = (bit_i == w_cur - 5'd1);
  wire last_body = (body == NB - 1);

  always @(posedge clk) begin
    if (!rst_n) begin
      busy <= 1'b0; body <= 3'd0; pass <= 1'b0; bit_i <= 5'd0;
      steps_left <= 4'd0; carry <= 1'b0; sign <= 1'b0;
    end else if (!busy) begin
      if (!pause && vpos == 10'd480 && hpos == 10'd0) begin
        busy <= 1'b1;
        steps_left <= (4'd1 << speed) - 4'd1;
      end
    end else begin
      carry <= (a_cur & bb) | (a_cur & cin) | (bb & cin);
      if (bit_i == 5'd0) sign <= sgn_bits[body];
      if (!last_bit) begin
        bit_i <= bit_i + 5'd1;
      end else begin
        bit_i <= 5'd0;
        pass  <= ~pass;
        if (pass) begin
          if (!last_body) begin
            body <= body + 3'd1;
          end else begin
            body <= 3'd0;
            if (steps_left == 4'd0) busy <= 1'b0;
            else steps_left <= steps_left - 4'd1;
          end
        end
      end
    end
  end

  // px/py are the integer pixel offsets from the sun.
  wire signed [10:0] mer_px, mer_py, ven_px, ven_py, ear_px, ear_py;
  wire signed [10:0] moo_ox, moo_oy, mar_px, mar_py;

  // Fixed point with F = K + 1 fraction bits: enough that truncation in
  // the shifts keeps each planet within about 1.5 px of its ring.
  // The period of each orbit is about 2*pi*2^K steps.
  //                     width  K      F      start x         start y        radius
  orbit_serial #(.W(13), .K(5), .F(6), .X0(13'sd3584),   .Y0(13'sd0)) u_mercury (
      .clk(clk), .rst_n(rst_n), .sel(busy && body == 3'd0), .pass(pass), .new_bit(new_bit),
      .a(a_bits[0]), .tap(tap_bits[0]), .sgn(sgn_bits[0]), .px(mer_px), .py(mer_py));  // 56
  orbit_serial #(.W(15), .K(6), .F(7), .X0(15'sd0),      .Y0(15'sd12800)) u_venus (
      .clk(clk), .rst_n(rst_n), .sel(busy && body == 3'd1), .pass(pass), .new_bit(new_bit),
      .a(a_bits[1]), .tap(tap_bits[1]), .sgn(sgn_bits[1]), .px(ven_px), .py(ven_py));  // 100
  orbit_serial #(.W(17), .K(7), .F(8), .X0(-17'sd36084), .Y0(-17'sd13134)) u_earth (
      .clk(clk), .rst_n(rst_n), .sel(busy && body == 3'd2), .pass(pass), .new_bit(new_bit),
      .a(a_bits[2]), .tap(tap_bits[2]), .sgn(sgn_bits[2]), .px(ear_px), .py(ear_py));  // 150
  orbit_serial #(.W(10), .K(4), .F(5), .X0(10'sd448),    .Y0(10'sd0)) u_moon (
      .clk(clk), .rst_n(rst_n), .sel(busy && body == 3'd3), .pass(pass), .new_bit(new_bit),
      .a(a_bits[3]), .tap(tap_bits[3]), .sgn(sgn_bits[3]), .px(moo_ox), .py(moo_oy));  // 14 around earth
  orbit_serial #(.W(18), .K(8), .F(9), .X0(18'sd52480),  .Y0(-18'sd90898)) u_mars (
      .clk(clk), .rst_n(rst_n), .sel(busy && body == 3'd4), .pass(pass), .new_bit(new_bit),
      .a(a_bits[4]), .tap(tap_bits[4]), .sgn(sgn_bits[4]), .px(mar_px), .py(mar_py));  // 205

  wire signed [10:0] moo_px = ear_px + moo_ox;
  wire signed [10:0] moo_py = ear_py + moo_oy;

  // ---------------------------------------------------- planet sprites
  // A body covers the pixel if the offset is inside a 16x16 window and
  // inside a disk with the given radius.
  function automatic [6:0] sq4(input [3:0] v);   // square of a 4-bit signed value
    reg [3:0] a;
    begin
      a = v[3] ? (~v + 4'd1) : v;                  // |v|, 0..8 (-8 gives 4'b1000 = 8)
      sq4 = {3'b000, a} * {3'b000, a};
    end
  endfunction

  function automatic disk(input [10:0] ox, input [10:0] oy, input [6:0] r2);
    reg in_win;
    begin
      in_win = ((ox[10:3] == 8'h00) || (ox[10:3] == 8'hFF)) &&
               ((oy[10:3] == 8'h00) || (oy[10:3] == 8'hFF));
      disk = in_win && (({1'b0, sq4(ox[3:0])} + {1'b0, sq4(oy[3:0])}) <= {1'b0, r2});
    end
  endfunction

  // r2 = R*R + R gives a nicely rounded disk of radius R
  wire on_mercury = disk(dx - mer_px, dy + mer_py, 7'd12);  // R = 3
  wire on_venus   = disk(dx - ven_px, dy + ven_py, 7'd30);  // R = 5
  wire on_earth   = disk(dx - ear_px, dy + ear_py, 7'd30);  // R = 5
  wire on_moon    = disk(dx - moo_px, dy + moo_py, 7'd6);   // R = 2
  wire on_mars    = disk(dx - mar_px, dy + mar_py, 7'd20);  // R = 4

  // ---------------------------------------------------------- the sun
  wire dither   = hpos[0] ^ vpos[0] ^ frame[0];        // shimmering checkerboard
  wire sun_core = d2 < 19'd256;                         // r 16
  wire sun_body = d2 < 19'd400;                         // r 20
  wire sun_rim  = d2 < 19'd576;                         // r 24
  wire corona   = d2 < 19'd784;                         // r 28

  // ------------------------------------------------------ orbit rings
  // |d2 - R^2| <= R  is a ring about one pixel wide
  wire ring = (d2 >= 19'd3080  && d2 <= 19'd3192)   ||   // 56
              (d2 >= 19'd9900  && d2 <= 19'd10100)  ||   // 100
              (d2 >= 19'd22350 && d2 <= 19'd22650)  ||   // 150
              (d2 >= 19'd41820 && d2 <= 19'd42230);      // 205

  // --------------------------------------------------------- starfield
  // 19-bit maximal LFSR (x^19 + x^18 + x^17 + x^14 + 1), restarted every
  // frame and advanced 9 steps per visible pixel, so neighbouring pixels
  // share no tested bits (one step per pixel draws dashes instead of dots).
  // The period 2^19-1 is prime, so a 9-step leap still takes 524287 pixels
  // to repeat, longer than a frame (307200 pixels).
  reg [18:0] lfsr;
  reg [18:0] lfsr_leap;
  integer i;
  always @(*) begin
    lfsr_leap = lfsr;
    for (i = 0; i < 9; i = i + 1)
      lfsr_leap = {lfsr_leap[17:0], lfsr_leap[18] ^ lfsr_leap[17] ^ lfsr_leap[16] ^ lfsr_leap[13]};
  end

  always @(posedge clk) begin
    if (!rst_n || (hlast && vlast))
      lfsr <= 19'h5A5A5;
    else if (visible)
      lfsr <= lfsr_leap;
  end

  // 9 tested bits: 1 star in 512 pixels.
  wire star = &{lfsr[18], lfsr[16], lfsr[14], lfsr[12], lfsr[10],
                lfsr[8],  lfsr[6],  lfsr[4],  lfsr[2]};
  wire twinkle = frame[5] ^ lfsr[5];

  // ------------------------------------------------------ colour mixer
  reg [5:0] rgb;   // {R1 R0, G1 G0, B1 B0}
  always @(*) begin
    if (on_moon)               rgb = 6'b10_10_10;                    // grey
    else if (on_earth)         rgb = 6'b00_01_11;                    // blue
    else if (on_mercury)       rgb = 6'b10_01_01;                    // brown-grey
    else if (on_venus)         rgb = 6'b11_11_10;                    // pale yellow
    else if (on_mars)          rgb = 6'b11_01_00;                    // red
    else if (sun_core)         rgb = 6'b11_11_10;                    // white-yellow
    else if (sun_body)         rgb = 6'b11_11_00;                    // yellow
    else if (sun_rim)          rgb = 6'b11_10_00;                    // orange
    else if (corona && dither) rgb = 6'b10_01_00;                    // glow
    else if (ring && !rings_off) rgb = 6'b00_00_01;                  // dark blue
    else if (star && !stars_off) begin
      case ({lfsr[3], lfsr[1]})
        2'b00:   rgb = 6'b01_01_01;
        2'b01:   rgb = 6'b01_01_10;
        2'b10:   rgb = 6'b10_10_10;
        default: rgb = twinkle ? 6'b11_11_11 : 6'b01_01_01;
      endcase
    end
    else                       rgb = 6'b00_00_00;
  end

  // ---------------------------------------------------------- outputs
  // TinyVGA PMOD: uo_out = {HSYNC, B0, G0, R0, VSYNC, B1, G1, R1}
  reg [7:0] out_r;
  always @(posedge clk) begin
    if (!rst_n) begin
      out_r <= 8'b1000_1000;   // syncs idle high, black
    end else begin
      out_r <= visible ? {hsync, rgb[0], rgb[2], rgb[4], vsync, rgb[1], rgb[3], rgb[5]}
                       : {hsync, 3'b000, vsync, 3'b000};
    end
  end

  assign uo_out  = out_r;
  assign uio_out = 8'h00;
  assign uio_oe  = 8'h00;

  wire _unused = &{ena, uio_in, ui_in[7:5], 1'b0};

endmodule

// Orbit state for one body, updated bit-serially by the shared adder.
// While sel is high both registers rotate right one bit per clock; the
// register being updated (x on pass 0, y on pass 1) takes new_bit at its MSB.
module orbit_serial #(
    parameter W = 12,
    parameter K = 5,
    parameter F = 6,
    parameter signed [W-1:0] X0 = 0,
    parameter signed [W-1:0] Y0 = 0
) (
    input  wire               clk,
    input  wire               rst_n,
    input  wire               sel,
    input  wire               pass,
    input  wire               new_bit,
    output wire               a,      // current bit of the register being updated
    output wire               tap,    // bit K of the other register
    output wire               sgn,    // sign of the other register
    output wire signed [10:0] px,
    output wire signed [10:0] py
);
  reg [W-1:0] x, y;

  always @(posedge clk) begin
    if (!rst_n) begin
      x <= X0;
      y <= Y0;
    end else if (sel) begin
      x <= {pass ? x[0] : new_bit, x[W-1:1]};
      y <= {pass ? new_bit : y[0], y[W-1:1]};
    end
  end

  assign a   = pass ? y[0]   : x[0];
  assign tap = pass ? x[K]   : y[K];
  assign sgn = pass ? x[W-1] : y[W-1];

  assign px = {{(11-(W-F)){x[W-1]}}, x[W-1:F]};
  assign py = {{(11-(W-F)){y[W-1]}}, y[W-1:F]};

  wire _unused = &{x[F-1:0], y[F-1:0], 1'b0};
endmodule
