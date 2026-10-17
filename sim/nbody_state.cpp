// Dumps the 3-body state after each frame's physics, for comparison with
// model/nbody_model.py hwA_step.
// Usage: nbody_state <scene 0|1> <code0> <code1> <code2> <speed 0..7> <frames>
// Masses are programmed through the menu (ui[0]=1, body select, ui[6:4]=code).
#include "Vtt_um_zarovs_nbody.h"
#include "Vtt_um_zarovs_nbody___024root.h"
#include "verilated.h"
#include <cstdio>
#include <cstdlib>
static Vtt_um_zarovs_nbody *top;
static void tick(int n) { while (n--) { top->clk = 0; top->eval(); top->clk = 1; top->eval(); } }
int main(int argc, char **argv) {
  int scene = atoi(argv[1]), c[3] = {atoi(argv[2]), atoi(argv[3]), atoi(argv[4])};
  int speed = atoi(argv[5]), frames = atoi(argv[6]);
  top = new Vtt_um_zarovs_nbody;
  top->ena = 1; top->uio_in = 0;
  top->ui_in = scene << 3;                 // scene on ui[3], menu off
  top->rst_n = 0; tick(10); top->rst_n = 1;
  int used = 0;
  for (int b = 0; b < 3; b++) if (c[b] >= 0) {   // menu on, select body b, code on ui[6:4]
    top->ui_in = 1 | (1 << (1 + b)) | (c[b] << 4); tick(4); used += 4;
  }
  top->ui_in = speed << 4;                 // menu off: pause 0, speed
  tick(4); used += 4;
  auto *r = top->rootp;
  tick(800 * 525 - used);
  for (int f = 0; f < frames; f++) {
#define R(b, f) r->tt_um_zarovs_nbody__DOT__body__BRA__##b##__KET____DOT__##f
    printf("%d %d %d %d %d %d %d %d %d %d %d %d\n",
           R(0, rx), R(0, ry), R(0, rvx), R(0, rvy), R(1, rx), R(1, ry), R(1, rvx), R(1, rvy),
           R(2, rx), R(2, ry), R(2, rvx), R(2, rvy));
    tick(800 * 525);
  }
  return 0;
}
