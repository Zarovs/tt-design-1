// Dumps the 3-body state after each frame's physics, for comparison with
// model/nbody_model.py. Usage: nbody_state <ui_in> <uio_in> <frames>
#include "Vtt_um_zarovs_nbody.h"
#include "Vtt_um_zarovs_nbody___024root.h"
#include "verilated.h"
#include <cstdio>
#include <cstdlib>
int main(int argc, char **argv) {
  int ui = strtol(argv[1], 0, 0), uio = strtol(argv[2], 0, 0), frames = atoi(argv[3]);
  auto *top = new Vtt_um_zarovs_nbody;
  top->ui_in = ui; top->uio_in = uio; top->ena = 1; top->rst_n = 0;
  for (int i = 0; i < 10; i++) { top->clk = 0; top->eval(); top->clk = 1; top->eval(); }
  top->rst_n = 1;
  auto *r = top->rootp;
  long cyc = 0;
  for (int f = 0; f < frames; f++) {
    for (int c = 0; c < 800 * 525; c++) { top->clk = 0; top->eval(); top->clk = 1; top->eval(); cyc++; }
#define R(b, f) r->tt_um_zarovs_nbody__DOT__body__BRA__##b##__KET____DOT__##f
    printf("%d %d %d %d %d %d %d %d %d %d %d %d\n",
           R(0, rx), R(0, ry), R(0, rvx), R(0, rvy), R(1, rx), R(1, ry), R(1, rvx), R(1, rvy),
           R(2, rx), R(2, ry), R(2, rvx), R(2, rvy));
  }
  return 0;
}
