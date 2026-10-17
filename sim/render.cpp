// Verilator harness: runs the design and dumps chosen VGA frames as PPM files.
// The frame image is rebuilt from the sync pulses the way a monitor would,
// so a wrong sync position shows up as a shifted or torn picture.
//
// Usage: render <ui_in> <first_frame> <num_frames> <every> <out_prefix>
#include VTOP_H
#include "verilated.h"
#include <cstdio>
#include <cstdlib>
#include <vector>

static const int H_VIS = 640, V_VIS = 480;
static const int H_BACK = 48 + 96;  // pixels from hsync falling edge to first visible pixel
static const int V_BACK = 33 + 2;   // lines from vsync falling edge to first visible line

int main(int argc, char **argv) {
  if (argc < 6) {
    fprintf(stderr, "usage: %s ui_in first_frame num_frames every out_prefix\n", argv[0]);
    return 1;
  }
  int ui = strtol(argv[1], nullptr, 0);
  int first = atoi(argv[2]), count = atoi(argv[3]), every = atoi(argv[4]);
  const char *prefix = argv[5];

  Verilated::commandArgs(argc, argv);
  auto *top = new VTOP;
  top->ui_in = ui;
  top->uio_in = 0;
  top->ena = 1;
  top->rst_n = 0;
  for (int i = 0; i < 10; i++) { top->clk = 0; top->eval(); top->clk = 1; top->eval(); }
  top->rst_n = 1;

  std::vector<unsigned char> img(H_VIS * V_VIS * 3, 0);
  int frame = -1, saved = 0;
  int x = 0, y = 0;  // counted from the last sync edges
  int prev_h = 1, prev_v = 1;

  while (saved < count) {
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    int o = top->uo_out;
    int hs = (o >> 7) & 1, vs = (o >> 3) & 1;

    if (prev_h && !hs) { x = 0; y++; }
    if (prev_v && !vs) {
      // new frame begins at the vsync falling edge
      if (frame >= first && ((frame - first) % every) == 0) {
        char name[256];
        snprintf(name, sizeof name, "%s%04d.ppm", prefix, saved);
        FILE *f = fopen(name, "wb");
        fprintf(f, "P6 %d %d 255\n", H_VIS, V_VIS);
        fwrite(img.data(), 1, img.size(), f);
        fclose(f);
        saved++;
      }
      frame++;
      y = 0;
      std::fill(img.begin(), img.end(), 0);
    }
    prev_h = hs; prev_v = vs;

    int px = x - H_BACK, py = y - V_BACK;
    if (px >= 0 && px < H_VIS && py >= 0 && py < V_VIS) {
      int r = (((o >> 0) & 1) << 1) | ((o >> 4) & 1);
      int g = (((o >> 1) & 1) << 1) | ((o >> 5) & 1);
      int b = (((o >> 2) & 1) << 1) | ((o >> 6) & 1);
      unsigned char *p = &img[(py * H_VIS + px) * 3];
      p[0] = r * 85; p[1] = g * 85; p[2] = b * 85;
    }
    x++;
  }
  delete top;
  return 0;
}
