#!/usr/bin/env python3
"""Compare the RTL state dump (sim/obj_nb) with model hwB_frame, frame by frame.
Usage: check_rtl.py <scene 0|1> <sw0> <sw1> <sw2> <fast 0|1> <frames>
Switch values per body: 0 = massless, 1 = mass 1, 2 = mass 8, 3 = mass 64."""
import subprocess, sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import nbody_model as M

scene, s0, s1, s2, fast, frames = map(int, sys.argv[1:7])
exe = os.environ.get("NB_EXE") or os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", "sim", "obj_nb", "Vtt_um_zarovs_nbody")
out = subprocess.run([exe] + sys.argv[1:7], capture_output=True, text=True, check=True).stdout.split("\n")

SCENES = {0: [(-200, 0, -210, -290), (200, 0, -210, 290), (0, -760, 420, 0)],
          1: [(-12, 0, 0, -13), (740, 0, 0, 809), (-960, 960, 0, 0)]}
b = SCENES[scene]
bad = 0
for f in range(frames):
    b = M.hwB_frame(b, (s0, s1, s2), fast)
    got = list(map(int, out[f].split()))
    exp = []
    for (x, y, vx, vy) in b:
        exp += [x & 0x7FF, y & 0x7FF, vx & 0xFFF, vy & 0xFFF]
    if got != exp:
        bad += 1
        if bad <= 3:
            print(f"frame {f}: MISMATCH\n  rtl   {got}\n  model {exp}")
print(f"{frames - bad}/{frames} frames match (scene {scene}, switches {[s0, s1, s2]}, fast {fast})")
