#!/usr/bin/env python3
"""Compare the RTL state dump (sim/obj_nb) with model hw_step, frame by frame.
Usage: check_rtl.py <ui_in> <uio_in> <frames>"""
import subprocess, sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import nbody_model as M

ui, uio, frames = int(sys.argv[1], 0), int(sys.argv[2], 0), int(sys.argv[3])
exe = os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "sim", "obj_nb", "Vtt_um_zarovs_nbody")
out = subprocess.run([exe, hex(ui), hex(uio), str(frames)], capture_output=True, text=True, check=True).stdout.split("\n")
masses = [((ui >> (2 * b)) & 3) + 1 for b in range(3)]
pause = (ui >> 6) & 1
spd = (uio & 7) ^ 3
spd = 6 if spd == 7 else spd
steps = 0 if pause else 1 << spd
b = M.hw_scene()
bad = 0
for f in range(frames):
    for _ in range(steps):
        b = M.hw_step(b, masses)
    got = list(map(int, out[f].split()))
    exp = []
    for (x, y, vx, vy) in b:
        exp += [x & 0x7FF, y & 0x7FF, vx & 0xFFF, vy & 0xFFF]
    if got != exp:
        bad += 1
        if bad <= 3:
            print(f"frame {f}: MISMATCH\n  rtl  {got}\n  model {exp}")
print(f"{frames - bad}/{frames} frames match (masses {masses}, {steps} steps/frame)")
