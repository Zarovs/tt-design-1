#!/usr/bin/env python3
"""Search a Sun (mass 64) + Earth (mass 1) start that stays near-circular
under the exact design-A physics (hwA_step)."""
import math, sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import nbody_model as M
K = 2.0 ** (3 - M.GA)


def start(r, dv, c_sun=7, c_pl=1):
    ms = lambda c: 0 if c == 0 else 1 << (c - 1)
    m1, m2 = ms(c_sun), ms(c_pl); mt = m1 + m2
    v = math.sqrt(K * mt / r) * (1 + dv)
    r1, r2 = r * m2 / mt, r * m1 / mt
    return [M.fixA(-r1, 0, 0, -v * m2 / mt), M.fixA(r2, 0, 0, v * m1 / mt), M.fixA(-120, 120, 0, 0)]


def trial(r, dv, steps, tol=1.06):
    b = start(r, dv)
    lo, hi = 1e9, 0
    for t in range(steps):
        b = M.hwA_step(b, [7, 1, 0])
        d = math.hypot(M.wrap(b[1][0] - b[0][0], 11), M.wrap(b[1][1] - b[0][1], 11)) / 8
        lo, hi = min(lo, d), max(hi, d)
        if hi / lo > tol:
            return None, t
    return (lo, hi), steps


if __name__ == "__main__":
    steps = int(sys.argv[1]) if len(sys.argv) > 1 else 8000
    best = []
    for r in range(50, 100, 2):
        for dv in [x / 100 for x in range(-10, 11)]:
            res, t = trial(r, dv, steps)
            if res:
                best.append((res[1] / res[0], r, dv, res))
                print(f"r={r} dv={dv:+.2f}: {res[0]:.1f}-{res[1]:.1f} for {steps} steps", flush=True)
    print("best:", sorted(best)[:4])
