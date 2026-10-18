## How it works

Three bodies attract each other with inverse-square gravity, drawn live on a 640x480 VGA screen. Each body's mass is set live with two switches (massless, 1, 8 or 64), and there are two starting scenes: a chaotic three-body dance, and a Sun with an Earth in a stable orbit.

**World.** The bodies live in a 256 x 256 world that wraps around at the edges (a torus). It is drawn at 2x scale in the middle of the screen. Positions are 8.3 fixed point; velocities are 12 bits with 10 fraction bits.

**Physics.** Each step, for every ordered pair of bodies (i, j):

1. `D = r_j - r_i` per axis (wrapping, so the shortest way round the torus), and its magnitude `M = |D| >> 3` in whole pixels.
2. Distance estimate `L = max(Mx, My) + 3/8 min`, within -3%..+7% of the true distance in every direction.
3. `L` is split into an exponent `e` (its leading one) and 4 mantissa bits. A 16-entry table gives `32 / (1 + m/16)^3` (within about ±12%), so `1/r^3 ≈ table[m] / 2^(3e + 2)`.
4. For each set bit `k` of the table value: `v_i += sign(D) * round(M >> (3e - 4 - code_j - k))`, where the mass of body j is `2^(code_j - 1)`. Body i is pulled by exactly the same amount as body j in the other direction, so momentum is conserved.

After all pairs, every position moves by `round(v >> 7)` (semi-implicit Euler, which keeps orbits stable).

Two safety rules keep the integers well behaved. The shift never goes below -4: this is gravitational softening, and it only matters when bodies are a few pixels apart. If a kick would overflow a velocity, it is undone, so the velocity stays where it was (a speed limit).

**Hardware.** All arithmetic is bit-serial: the state registers rotate one bit per clock past two 1-bit adders, one per axis. The physics runs during vertical blanking; one step for all three bodies takes 534 clocks. The 138 state bits and the distance register sit behind clock-gating cells, so they need no enable logic. The starting scenes are shifted in serially after reset.

**Drawing.** Each body is a square whose size shows its mass: 4 px for massless and mass 1, 8 px for 8, and 16 px for 64. Bodies 0, 1 and 2 are yellow, cyan and pink.

The RTL is bit-exact with the Python model in `model/nbody_model.py` (`hwB_frame`). `model/check_rtl.py` compares them frame by frame.

## How to test

Connect a TinyVGA PMOD and a monitor, and clock the design at 25.175 MHz.

**Masses** (live, two switches per body): `ui[1:0]` body 0 (yellow), `ui[3:2]` body 1 (cyan), `ui[5:4]` body 2 (pink). 00 = massless, 01 = mass 1, 10 = mass 8, 11 = mass 64. With every switch off, all bodies are massless and drift in straight lines.

**Speed:** 3 steps per frame; `ui[6]` makes it 4x faster (12 steps per frame).

**Scenes:**

- Reset starts the chaos scene. Set all three bodies to 10 (mass 8) for the classic chaotic dance: captures, slingshots and ejections.
- `ui[7]` restarts as Sun + Earth (hold it briefly; the scene starts when you let go). Set body 0 to 11, body 1 to 01 and body 2 to 00 (`ui[5:0]` = 00 01 11): Sun of mass 64 (yellow), Earth of mass 1 (cyan) on a stable, nearly circular orbit, and a massless test body (pink) that starts at the bottom edge and slowly falls towards the Sun.

Try giving the third body some mass while Earth is orbiting, or making one body in the chaos scene massless.

## External hardware

TinyVGA PMOD, VGA monitor.
