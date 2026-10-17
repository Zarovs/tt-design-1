## How it works

Three bodies attract each other with inverse-square gravity, drawn live on a 640x480 VGA screen. Each body's mass can be set from massless up to 64, and there are two starting scenes: a chaotic three-body dance, and a Sun with an Earth in a stable orbit.

**World.** The bodies live in a 256 x 256 world that wraps around at the edges (a torus). It is drawn at 2x scale in the middle of the screen. Positions are 8.3 fixed point; velocities are 12 bits with 10 fraction bits.

**Physics.** Each step, for every ordered pair of bodies (i, j):

1. `D = r_j - r_i` per axis (wrapping, so the shortest way round the torus), and its magnitude `M = |D| >> 3` in whole pixels.
2. Distance estimate `L = max(Mx, My) + 3/8 min`, within -3%..+7% of the true distance in every direction.
3. `L` is split into an exponent `e` (its leading one) and 4 mantissa bits. A 16-entry table gives `32 / (1 + m/16)^3` (within about ±12%), so `1/r^3 ≈ table[m] / 2^(3e + 2)`.
4. For each set bit `k` of the table value: `v_i += sign(D) * round(M >> (3e - 4 - code_j - k))`, where the mass of body j is `2^(code_j - 1)`. Body i is pulled by exactly the same amount as body j in the other direction, so momentum is conserved.

After all pairs, every position moves by `round(v >> 7)` (semi-implicit Euler, which keeps orbits stable).

Two safety rules keep the integers well behaved. The shift never goes below -4: this is gravitational softening, and it only matters when bodies are a few pixels apart. If a kick would overflow a velocity, it is undone, so the velocity stays where it was (a speed limit).

**Hardware.** All arithmetic is bit-serial: the state registers rotate one bit per clock past two 1-bit adders, one per axis. The physics runs during vertical blanking; one step for all three bodies takes 534 clocks. The 138 state bits and the distance register sit behind clock-gating cells, so they need no enable logic. The starting scenes are shifted in serially after reset.

**Drawing.** Each body is a square whose size shows its mass: 4 px for masses up to 4, 8 px for 8 to 32, and 16 px for 64. Bodies 0, 1 and 2 are yellow, cyan and pink.

The RTL is bit-exact with the Python model in `model/nbody_model.py` (`hwA_frame`). `model/check_rtl.py` compares them frame by frame.

## How to test

Connect a TinyVGA PMOD and a monitor, and clock the design at 25.175 MHz.

**Scenes.** Hold `ui[3]` while resetting to choose the scene:

- `ui[3]` low: three equal bodies (mass 8) in a chaotic dance. Expect captures, slingshots and ejections.
- `ui[3]` high: Sun (mass 64, yellow) with an Earth (mass 1, cyan) on a stable, nearly circular orbit. The pink body is massless and starts at the bottom edge of the screen, slowly falling towards the Sun.

**Controls** with the menu off (`ui[0]` low):

- `ui[1]`: pause.
- `ui[6:4]`: speed. 0 (default) = one step every 4 frames, 1 = every 2nd frame, 2 = one step per frame, 3..7 = about 2, 3, 6, 12 and 24 steps per frame.

**Menu** (`ui[0]` high): `ui[1]`, `ui[2]`, `ui[3]` select bodies 0, 1, 2 (several at once is fine), and `ui[6:4]` sets the selected bodies' mass code: 0 = massless, 1..7 = mass 1, 2, 4, 8, 16, 32, 64. The simulation keeps running. When you turn the menu off, the speed and pause switches take effect again.

Try giving the massless body some mass in the Sun + Earth scene, or making one body in the chaos scene massless.

## External hardware

TinyVGA PMOD, VGA monitor.
