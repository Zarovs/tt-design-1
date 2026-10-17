#!/usr/bin/env python3
"""Compare the RTL state dump (sim/obj_nb) with model hwA_frame, frame by frame.
Usage: check_rtl.py <scene 0|1> <code0|-1> <code1|-1> <code2|-1> <speed 0..7> <frames>
A code of -1 keeps the scene's default mass."""
import subprocess, sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import nbody_model as M

scene, c0, c1, c2, speed, frames = map(int, sys.argv[1:7])
exe = os.environ.get("NB_EXE") or os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "sim", "obj_nb", "Vtt_um_zarovs_nbody")
out = subprocess.run([exe] + sys.argv[1:7], capture_output=True, text=True, check=True).stdout.split("\n")

SCENES = {0: ([(-200, 0, -210, -290), (200, 0, -210, 290), (0, -760, 420, 0)], [4, 4, 4]),
          1: ([(-11, 0, 0, -14), (685, 0, 0, 880), (-960, 960, 0, 0)], [7, 1, 0])}
b, codes = SCENES[scene]
codes = [d if c < 0 else c for c, d in zip((c0, c1, c2), codes)]


bad = 0
for f in range(frames):
    b = M.hwA_frame(b, codes, speed, f)
    got = list(map(int, out[f].split()))
    exp = []
    for (x, y, vx, vy) in b:
        exp += [x & 0x7FF, y & 0x7FF, vx & 0xFFF, vy & 0xFFF]
    if got != exp:
        bad += 1
        if bad <= 3:
            print(f"frame {f}: MISMATCH\n  rtl   {got}\n  model {exp}")
print(f"{frames - bad}/{frames} frames match (scene {scene}, codes {codes}, speed {speed})")
