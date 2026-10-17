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
    for (int b = 0; b < 3; b++)
      printf("%d %d %d %d%s", r->tt_um_zarovs_nbody__DOT__px[b], r->tt_um_zarovs_nbody__DOT__py[b],
             r->tt_um_zarovs_nbody__DOT__vx[b], r->tt_um_zarovs_nbody__DOT__vy[b], b == 2 ? "\n" : " ");
  }
  return 0;
}
