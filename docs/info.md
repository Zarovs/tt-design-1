## How it works

A solar system drawn on a 640x480 VGA screen, computed pixel by pixel as the beam scans (there is no framebuffer).

- The squared distance from each pixel to the screen centre is tracked incrementally with adders only. Comparing it against constants draws the sun (with a shimmering corona) and the orbit rings.
- Mercury, Venus, Earth (with its Moon) and Mars move on Minsky circles (`x -= y>>>k; y += x>>>k`), updated during vertical blanking. These orbits are exactly periodic. The periods come out as 1/4, 1/2, 1 and 2 Earth years.
- Each planet is a small disk tested inside a 16x16 window around its position.
- A 19-bit LFSR, advanced 9 steps per pixel and restarted each frame, gives a fixed starfield with a few twinkling stars.

## How to test

Connect a TinyVGA PMOD to the outputs and a monitor to it, and set the clock to 25.175 MHz.

- `ui[0]` pauses the motion.
- `ui[2:1]` set the speed: 1, 2, 4 or 8 orbit steps per frame.
- `ui[3]` hides the orbit rings.
- `ui[4]` hides the stars.

## External hardware

TinyVGA PMOD, VGA monitor.
