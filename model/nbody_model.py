#!/usr/bin/env python3
"""Bit-exact model of the planned on-chip N-body physics (1x1 tile).

Integer-only, using exactly the operations the hardware will do:
  - world is a 2^I x 2^I torus; positions are I.F fixed point, wrap mod 2^(I+F)
  - dx, dy = integer part of (pos_j - pos_i), wrapped to signed I bits
  - exponent e = index of leading one of (|dx| | |dy|) computed as dx^sign,
    plus 2 mantissa bits -> LUT -> small multiplier c = m_j * lut and shift s
  - dv = (c * dx) >>> s  done as a sum of arithmetic right shifts of dx
  - semi-implicit Euler: all velocities updated from current positions, then
    positions += v (v in units of 2^-F px per step)
Velocities saturate at their width.
"""
import argparse
import math


def wrap(v, bits):
    m = 1 << bits
    v &= m - 1
    return v - m if v >= m // 2 else v


def sat(v, bits):
    lo, hi = -(1 << (bits - 1)), (1 << (bits - 1)) - 1
    return max(lo, min(hi, v))


def lead1(v):
    return v.bit_length() - 1  # -1 for 0


class Params:
    def __init__(self, I=8, F=3, V=9, G=6, emin=2, mant=2, FV=None, rnd=True):
        self.I, self.F, self.V = I, F, V
        self.FV = F if FV is None else FV   # velocity fraction bits (>= F)
        self.rnd = rnd                      # round instead of floor in shifts
        self.lbits = 3                      # LUT scale 2^lbits
        self.lscale = 1 << self.lbits
        self.bias = 1.0
        self.G = G          # global gravity shift (bigger = weaker)
        self.emin = emin    # softening: distances below 2^emin treated as 2^emin
        self.mant = mant    # mantissa bits used for 1/r^3


def lut_table(p):
    # 1/r^3 mantissa table, scaled by 8 (3 bits) and by p.bias to cancel the
    # octagonal-distance overestimate (~+3% on average -> ~+9% in r^3)
    return [round(p.lscale * p.bias / (1 + (mm + 0.5) / (1 << p.mant)) ** 3)
            for mm in range(1 << p.mant)]


def accel_terms(p, dx, dy, mass):
    """Return list of (sign_shifts) such that dvx = sum(dx >>> s) etc.
    Mirrors the hardware: c = mass * lut(mantissa), applied as shift-adds."""
    sx = -1 if dx < 0 else 0
    sy = -1 if dy < 0 else 0
    ax = dx ^ sx            # ~|dx| (one's complement abs), cheap in hardware
    ay = dy ^ sy
    hi, lo = (ax, ay) if ax >= ay else (ay, ax)
    o = hi + (lo >> 2)                  # octagonal distance ~ |r| (max + 1/4 min)
    e = max(lead1(o), p.emin)
    # mantissa: next `mant` bits below the leading one (0 if below emin)
    if lead1(o) >= p.emin and e >= p.mant:
        m = (o >> (e - p.mant)) & ((1 << p.mant) - 1)
    else:
        m = 0
    # r ~ 2^e * (1 + m/2^mant); 1/r^3 ~ 2^-3e * k(m), k from a 4-entry LUT
    # LUT values approximate 8 / (1 + m/4)^3 as small integers
    lut = lut_table(p)
    c = mass * lut[m]       # small integer, a few bits
    s = 3 * e + p.G + p.lbits - 6   # a = m * 2^(6-G) / r^2 for any LUT scale
    return c, s


def ashr(v, sh, rnd):
    if sh <= 0:
        return v << -sh
    return (v + (1 << (sh - 1))) >> sh if rnd else v >> sh


def shift_mult(d, c, s, rnd=True):
    """(c * d) >>> s as a sum of arithmetic shifts, one per set bit of c."""
    tot = 0
    k = 0
    while c:
        if c & 1:
            tot += ashr(d, s - k, rnd)
        c >>= 1
        k += 1
    return tot


def step(p, bodies, masses):
    W = p.I + p.F
    n = len(bodies)
    newv = []
    for i in range(n):
        xi, yi, vxi, vyi = bodies[i]
        for j in range(n):
            if j == i or masses[j] == 0:
                continue
            xj, yj = bodies[j][0], bodies[j][1]
            # full-precision difference (keeps fraction bits for the multiply)
            dX = wrap(xj - xi, W)
            dY = wrap(yj - yi, W)
            c, s = accel_terms(p, dX >> p.F, dY >> p.F, masses[j])
            sv = s - (p.FV - p.F)
            vxi = sat(vxi + shift_mult(dX, c, sv, p.rnd), p.V)
            vyi = sat(vyi + shift_mult(dY, c, sv, p.rnd), p.V)
        newv.append((vxi, vyi))
    out = []
    for (x, y, _, _), (vx, vy) in zip(bodies, newv):
        out.append((wrap(x + ashr(vx, p.FV - p.F, p.rnd), W),
                    wrap(y + ashr(vy, p.FV - p.F, p.rnd), W), vx, vy))
    return out


def to_fixed(p, x, y, vx, vy):
    f = 1 << p.F
    fv = 1 << p.FV
    return (wrap(round(x * f), p.I + p.F), wrap(round(y * f), p.I + p.F),
            sat(round(vx * fv), p.V), sat(round(vy * fv), p.V))


def run(p, init, masses, steps):
    b = [to_fixed(p, *s) for s in init]
    traj = [b]
    for _ in range(steps):
        b = step(p, b, masses)
        traj.append(b)
    return traj


def dist_stats(p, traj, i, j):
    W = p.I + p.F
    ds = []
    for b in traj:
        dx = wrap(b[j][0] - b[i][0], W) / (1 << p.F)
        dy = wrap(b[j][1] - b[i][1], W) / (1 << p.F)
        ds.append(math.hypot(dx, dy))
    return min(ds), max(ds), ds


def scenes(G):
    k = 2.0 ** (6 - G)          # a = k * m / r^2  (px / step^2)
    vb = math.sqrt(k * 4 / (4 * 30))       # binary: m=4 each, separation 60
    vp = math.sqrt(k * 7 / 60)             # planet around fixed-ish sun m=7, r=60
    return {
        "binary": ([(-30, 0, 0, -vb), (30, 0, 0, vb)], [4, 4]),
        "sun+planet": ([(0, 0, 0, 0), (60, 0, 0, vp)], [7, 0]),
        "three": ([(-30, 0, 0, -vb), (30, 0, 0, vb), (0, 90, math.sqrt(k * 8 / 90), 0)], [4, 4, 1]),
    }


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--I", type=int, default=8)
    ap.add_argument("--F", type=int, default=3)
    ap.add_argument("--V", type=int, default=9)
    ap.add_argument("--G", type=int, default=6)
    ap.add_argument("--FV", type=int, default=None)
    ap.add_argument("--floor", action="store_true")
    ap.add_argument("--steps", type=int, default=6000)
    ap.add_argument("--scene", default="all")
    a = ap.parse_args()
    p = Params(a.I, a.F, a.V, a.G, FV=a.FV, rnd=not a.floor)
    for name, (init, masses) in scenes(a.G).items():
        if a.scene not in ("all", name):
            continue
        traj = run(p, init, masses, a.steps)
        lo, hi, ds = dist_stats(p, traj, 0, 1)
        q = len(ds) // 4
        print(f"{name:11s} F{a.F} FV{p.FV} V{a.V} G{a.G}: d(0,1) min {lo:6.1f} max {hi:6.1f} "
              f"| per quarter max: " + " ".join(f"{max(ds[k*q:(k+1)*q]):6.1f}" for k in range(4)))


if __name__ == "__main__":
    main()


# ---------------------------------------------------------------------------
# Exact reference for the RTL (src/project.v on branch onchip-nbody).
# Widths and constants must match the Verilog.
HW = Params(I=8, F=3, V=12, G=3, emin=2, mant=2, FV=10, rnd=True)
HW.lbits, HW.lscale, HW.bias = 3, 8, 1.0
HW_LUT = lut_table(HW)          # [6, 3, 2, 1]


def hw_step(bodies, masses, p=HW):
    """One physics step exactly as the hardware does it.
    bodies: list of (x, y, vx, vy) raw integers; masses: list of ints."""
    W = p.I + p.F
    n = len(bodies)
    newv = []
    for i in range(n):
        xi, yi, vxi, vyi = bodies[i]
        for j in range(n):
            if j == i:
                continue
            dx = wrap(bodies[j][0] - xi, W) >> p.F      # integer part, signed I bits
            dy = wrap(bodies[j][1] - yi, W) >> p.F
            c, s = accel_terms(p, dx, dy, masses[j])
            sh0 = s - p.FV                              # applied to the integer dx
            vxi = wrap(vxi + shift_mult(dx, c, sh0, True), p.V)
            vyi = wrap(vyi + shift_mult(dy, c, sh0, True), p.V)
        newv.append((vxi, vyi))
    return [(wrap(x + ashr(vx, p.FV - p.F, True), W), wrap(y + ashr(vy, p.FV - p.F, True), W), vx, vy)
            for (x, y, _, _), (vx, vy) in zip(bodies, newv)]


def hw_scene(p=HW):
    """Default scene for masses 1,1,1: a binary pair plus a third body
    orbiting the pair, with zero total momentum."""
    k = 2.0 ** (6 - p.G)
    vb = math.sqrt(k * 1 / (2 * 50))        # binary, separation 50
    v3 = math.sqrt(k * 2 / 95)              # third body around mass 2 at r=95
    drift = v3 / 2                          # binary moves the other way
    init = [(-25, 0, -drift, -vb), (25, 0, -drift, vb), (0, -95, v3, 0)]
    return [to_fixed(p, *b) for b in init]


# ---------------------------------------------------------------------------
# Design A (branch onchip-a): the passing octagon/2-bit-LUT physics, plus
#  - momentum-conserving sign-magnitude force: M = |D| >> 3 (exact magnitude),
#    term = sign(D) * round(M >> sh), so the force on i from j is exactly minus
#    the force on j from i
#  - mass codes: 0 = massless, c > 0 = 2^(c-1) (1..64), gravity scale GA
#  - per-pass clamping: a term >= 2048 or a sum outside 12 bits saturates
GA = 3          # extra right shift vs the old G=3 physics (weaker gravity for heavy masses)


def forceA(mx, my, code):
    """passes for one pair: list of shifts (one per set LUT bit); [] if massless"""
    if code == 0:
        return []
    hi, lo = (mx, my) if mx >= my else (my, mx)
    o = hi + (lo >> 2)
    e = max(o.bit_length() - 1, 2)
    m = (o >> (e - 2)) & 3 if o.bit_length() - 1 >= 2 else 0
    lut = [6, 3, 2, 1][m]
    return [3 * e - 10 + GA - (code - 1) - k for k in range(3) if (lut >> k) & 1]


def addA(v, neg, M, sh):
    """v + sign * round(M >> sh), saturating, exactly as the hardware does it:
    T' = M >> sh (truncated) >= 2048 saturates toward the sign; otherwise the
    13-bit sum v +- (T' + rounding bit) saturates if it leaves 12 bits."""
    if sh > 0:
        Tt, rb = M >> sh, (M >> (sh - 1)) & 1
    else:
        Tt, rb = M << -sh, 0
    if Tt >= 2048:
        return -2048 if neg else 2047
    r = v - (Tt + rb) if neg else v + (Tt + rb)
    if r > 2047:
        return 2047
    if r < -2048:
        return -2048
    return r


def hwA_step(bodies, codes):
    W = 11
    n = len(bodies)
    newv = []
    for i in range(n):
        xi, yi, vx, vy = bodies[i]
        for j in range(n):
            if j == i:
                continue
            DX = wrap(bodies[j][0] - xi, W)
            DY = wrap(bodies[j][1] - yi, W)
            mx, my = abs(DX) >> 3, abs(DY) >> 3
            for sh in forceA(mx, my, codes[j]):
                vx = addA(vx, DX < 0, mx, sh)
                vy = addA(vy, DY < 0, my, sh)
        newv.append((vx, vy))
    return [(wrap(x + ashr(vx, 7, True), W), wrap(y + ashr(vy, 7, True), W), vx, vy)
            for (x, y, _, _), (vx, vy) in zip(bodies, newv)]


def fixA(x, y, vx, vy):
    """px, px/step -> raw state (positions 8.3, velocities 2.10)"""
    s = lambda v: max(-2048, min(2047, round(v * 1024)))
    return (wrap(round(x * 8), 11), wrap(round(y * 8), 11), s(vx), s(vy))
