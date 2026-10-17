## How it works

Three bodies attract each other with real inverse-square gravity, drawn live on a 640x480 VGA screen. You set each body's mass with the switches and watch orbits, close passes, captures and ejections.

**World.** The bodies live in a 256 x 256 world that wraps around at the edges (a torus). It is drawn at 2x scale in the middle of the screen. Positions are 8.3 fixed point; velocities are 12 bits with 10 fraction bits. Fine velocity resolution matters: the acceleration far from a body is a tiny fraction of a pixel per step.

**Physics.** Each step, for every ordered pair of bodies (i, j):

1. `dx, dy` = integer part of `r_j - r_i` (wrapping, so the shortest way round the torus).
2. Distance estimate `L = max(|dx|,|dy|) + min/4`, accurate to a few percent.
3. `L` is split into an exponent `e` (its leading one) and 2 mantissa bits. A 4-entry table gives `8 / (1 + m/4)^3`, so `1/r^3 ≈ table[m] / 2^(3e)`.
4. Velocity update `v_i += mass_j * table[m] * d >> (3e - 10)`. Masses are powers of two, so this is a sum of rounded arithmetic shifts of `d`, one for each set bit of the table value.

After all pairs, every position moves by `round(v >> 7)` (semi-implicit Euler, which keeps orbits stable).

**Hardware.** All arithmetic is bit-serial: the state registers rotate one bit per clock past two 1-bit adders, one per axis. The physics runs during vertical blanking. One step for all three bodies takes 336 clocks, and the speed setting chooses how many blanking lines are used, from 3 to 103 steps per frame. The 138 state bits sit behind six clock-gating cells, so they need no enable logic. The starting scene is shifted in serially after reset.

**Drawing.** Each body is a small diamond that grows with its mass. Per pixel, the design finds the first body whose 16x16 window contains the pixel and runs one shared shape test.

The RTL is bit-exact with the Python model in `model/nbody_model.py` (`hw_step`). `model/check_rtl.py` compares them frame by frame.

## How to test

Connect a TinyVGA PMOD and a monitor, and clock the design at 25.175 MHz. After reset, a pair of bodies orbits each other while a third orbits the pair. Three-body motion is chaotic, so expect captures, slingshots and ejections.

- `ui[1:0]`, `ui[3:2]`, `ui[5:4]`: mass of body 0 (yellow), 1 (cyan) and 2 (pink) = 1, 2, 4 or 8. You can change masses while it runs.
- `ui[6]`: pause.
- `uio[2:0]`: speed. The default (all low) gives about 20 steps per frame; `uio = 4` is the fastest.
- Reset restarts the starting scene.

## External hardware

TinyVGA PMOD, VGA monitor.
