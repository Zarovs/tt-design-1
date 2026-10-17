#!/usr/bin/env python3
"""Render VGA frames of the design to PNG and an animated GIF.

Examples:
  python3 sim/render.py                      # one PNG of frame 2 -> sim/out/frame.png
  python3 sim/render.py --gif --frames 120   # animation, 1 of every 4 frames
  python3 sim/render.py --ui 0x06 --gif      # speed 8x
"""
import argparse
import glob
import os
import subprocess
import sys

from PIL import Image

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
BUILD = os.path.join(HERE, "obj_dir")
OUT = os.path.join(HERE, "out")
TOP = "tt_um_zarovs_solar_system"


def build():
    exe = os.path.join(BUILD, "V" + TOP)
    srcs = [os.path.join(ROOT, "src", "project.v"), os.path.join(HERE, "render.cpp")]
    if os.path.exists(exe) and all(os.path.getmtime(s) < os.path.getmtime(exe) for s in srcs):
        return exe
    subprocess.run(
        ["verilator", "--cc", "--exe", "--build", "-O3", "-Wno-fatal", "-Wno-lint",
         "--top-module", TOP, "-Mdir", BUILD, *srcs],
        check=True, stdout=subprocess.DEVNULL)
    return exe


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--ui", default="0x00", help="value on ui_in")
    ap.add_argument("--start", type=int, default=2, help="first frame to capture")
    ap.add_argument("--frames", type=int, default=1, help="number of frames to capture")
    ap.add_argument("--every", type=int, default=4, help="capture every Nth frame")
    ap.add_argument("--gif", action="store_true", help="also write an animated GIF")
    ap.add_argument("--name", default="frame")
    a = ap.parse_args()

    exe = build()
    os.makedirs(OUT, exist_ok=True)
    for f in glob.glob(os.path.join(OUT, a.name + "_*.ppm")):
        os.remove(f)
    prefix = os.path.join(OUT, a.name + "_")
    subprocess.run([exe, a.ui, str(a.start), str(a.frames), str(a.every), prefix], check=True)

    ppms = sorted(glob.glob(prefix + "*.ppm"))
    imgs = [Image.open(p).convert("RGB") for p in ppms]
    imgs[0].save(os.path.join(OUT, a.name + ".png"))
    if a.gif and len(imgs) > 1:
        # 60 fps / every -> frame delay
        imgs[0].save(os.path.join(OUT, a.name + ".gif"), save_all=True,
                     append_images=imgs[1:], duration=int(1000 * a.every / 60), loop=0)
    for p in ppms:
        os.remove(p)
    print("wrote", os.path.join(OUT, a.name + (".gif" if a.gif else ".png")))


if __name__ == "__main__":
    sys.exit(main())
