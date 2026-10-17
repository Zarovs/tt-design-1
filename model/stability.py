#!/usr/bin/env python3
"""Stability tests for the v2 physics (exact r^2)."""
import math, random, sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import nbody_model as M

P = M.V2
K = 2.0 ** (6 - P.G)       # a = K * mass / r^2  (px/step^2)


def binary(r, c1, c2, ang, steps):
    """two bodies, mass codes c1 (heavy) c2, circular orbit about the centre of mass"""
    m1 = 0 if c1 == 0 else 1 << (c1 - 1)
    m2 = 0 if c2 == 0 else 1 << (c2 - 1)
    mt = m1 + m2
    v = math.sqrt(K * mt / r)                 # relative speed
    r1, r2 = r * m2 / mt, r * m1 / mt         # distances from centre of mass
    v1, v2 = v * m2 / mt, v * m1 / mt
    c, s = math.cos(ang), math.sin(ang)
    b = [M.fix2(-r1 * c, -r1 * s, v1 * s, -v1 * c), M.fix2(r2 * c, r2 * s, -v2 * s, v2 * c),
         M.fix2(127, 127, 0, 0)]
    W = P.I + P.F
    lo, hi = 1e9, 0
    for _ in range(steps):
        b = M.hw2_step(b, [c1, c2, 0])
        d = math.hypot(M.wrap(b[1][0] - b[0][0], W), M.wrap(b[1][1] - b[0][1], W)) / (1 << P.F)
        lo, hi = min(lo, d), max(hi, d)
    return lo, hi


if __name__ == "__main__":
    steps = int(sys.argv[1]) if len(sys.argv) > 1 else 4000
    rng = random.Random(3)
    for c1, c2 in [(1, 1), (3, 1), (4, 1), (5, 1), (7, 1), (7, 0)]:
        ok, sp = 0, []
        for t in range(12):
            r = rng.uniform(30, 80)
            lo, hi = binary(r, c1, c2, rng.uniform(0, 6.283), steps)
            if lo > 0.8 * r and hi < 1.25 * r:
                ok += 1
            sp.append(hi / max(lo, 0.1))
        m1 = 1 << (c1 - 1); m2 = 0 if c2 == 0 else 1 << (c2 - 1)
        print(f"masses {m1}:{m2}  within +-20%: {ok}/12   max/min separation: worst {max(sp):.2f}, median {sorted(sp)[6]:.2f}")
