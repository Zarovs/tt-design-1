#!/usr/bin/env python3
"""Search starting conditions for a sun + Earth orbit that stays near-circular
for a long time under the exact hardware physics (hw2_step)."""
import math, sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import nbody_model as M
P = M.V2
K = 2.0 ** (6 - P.G)
SUN, EARTH = 7, 1                      # mass codes: 64 and 1


def trial(r_px, dv, steps):
    m1, m2 = 64, 1
    v = math.sqrt(K * (m1 + m2) / r_px) * (1 + dv)
    r1, r2 = r_px * m2 / (m1 + m2), r_px * m1 / (m1 + m2)
    b = [M.fix2(-r1, 0, 0, -v * m2 / (m1 + m2)), M.fix2(r2, 0, 0, v * m1 / (m1 + m2)),
         M.fix2(-120, 120, 0, 0)]                       # third body: massless, far away
    W = P.I + P.F
    lo, hi = 1e9, 0
    for t in range(steps):
        b = M.hw2_step(b, [SUN, EARTH, 0])
        d = math.hypot(M.wrap(b[1][0] - b[0][0], W), M.wrap(b[1][1] - b[0][1], W)) / (1 << P.F)
        lo, hi = min(lo, d), max(hi, d)
        if hi / lo > 1.06:
            return None, t
    return (lo, hi), steps


if __name__ == "__main__":
    steps = int(sys.argv[1]) if len(sys.argv) > 1 else 20000
    best = []
    for r in range(56, 96, 2):
        for dv in (-0.02, -0.01, 0.0, 0.01, 0.02):
            res, t = trial(r, dv, steps)
            if res:
                best.append((res[1] / res[0], r, dv, res))
                print(f"r={r} dv={dv:+.2f}: radius {res[0]:.1f}-{res[1]:.1f} for {steps} steps", flush=True)
    best.sort()
    print("best:", best[:5])
