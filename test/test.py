# SPDX-FileCopyrightText: © 2026 Nils Gazarovs
# SPDX-License-Identifier: Apache-2.0

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles

H_TOTAL, V_TOTAL = 800, 525

# Expected colours (2 bits per channel)
MERCURY = (2, 1, 1)
EARTH = (0, 1, 3)
SUN_CORE = (3, 3, 2)
RING = (0, 0, 1)


def decode(v):
    """TinyVGA PMOD: uo_out = {HSYNC, B0, G0, R0, VSYNC, B1, G1, R1}"""
    v = int(v)
    r = ((v >> 0) & 1) << 1 | ((v >> 4) & 1)
    g = ((v >> 1) & 1) << 1 | ((v >> 5) & 1)
    b = ((v >> 2) & 1) << 1 | ((v >> 6) & 1)
    return {"hs": (v >> 7) & 1, "vs": (v >> 3) & 1, "rgb": (r, g, b)}


class Beam:
    """Tracks which pixel is on uo_out. The output is registered, so after n
    clock edges from reset release uo_out holds pixel n - 1. ClockCycles wakes
    up at the edge itself, before registers update, so a read after waiting n
    edges sees pixel n - 2."""

    def __init__(self, dut):
        self.dut = dut
        self.edges = 0

    async def reset(self, ui=0):
        dut = self.dut
        dut.ena.value = 1
        dut.ui_in.value = ui
        dut.uio_in.value = 0
        dut.rst_n.value = 0
        await ClockCycles(dut.clk, 10)
        dut.rst_n.value = 1
        self.edges = 0

    async def goto(self, frame, x, y):
        target = (frame * V_TOTAL + y) * H_TOTAL + x + 2
        assert target >= self.edges, "can't go back in time"
        if target > self.edges:
            await ClockCycles(self.dut.clk, target - self.edges)
        self.edges = target
        return decode(self.dut.uo_out.value)


async def start(dut, ui=0):
    clock = Clock(dut.clk, 40, units="ns")  # ~25 MHz
    cocotb.start_soon(clock.start())
    beam = Beam(dut)
    await beam.reset(ui)
    return beam


@cocotb.test()
async def test_hsync(dut):
    beam = await start(dut)
    samples = []
    for x in range(2 * H_TOTAL):
        samples.append((await beam.goto(0, x, 0))["hs"])
    falls = [i for i in range(1, len(samples)) if samples[i - 1] == 1 and samples[i] == 0]
    assert falls == [656, 656 + H_TOTAL], f"hsync falling edges at {falls}"
    low = samples[656:656 + 100]
    assert low[:96] == [0] * 96 and low[96] == 1, "hsync pulse must be 96 pixels"


@cocotb.test()
async def test_vsync(dut):
    beam = await start(dut)
    assert (await beam.goto(0, 799, 489))["vs"] == 1
    assert (await beam.goto(0, 0, 490))["vs"] == 0
    assert (await beam.goto(0, 799, 491))["vs"] == 0
    assert (await beam.goto(0, 0, 492))["vs"] == 1
    # blanking is black
    assert (await beam.goto(0, 700, 495))["rgb"] == (0, 0, 0)


@cocotb.test()
async def test_first_frame(dut):
    beam = await start(dut)
    assert (await beam.goto(0, 320, 240))["rgb"] == SUN_CORE
    assert (await beam.goto(0, 376, 240))["rgb"] == MERCURY   # (+56, 0) from the sun
    assert (await beam.goto(0, 179, 291))["rgb"] == EARTH     # (-141, -51), y flipped


@cocotb.test()
async def test_pause(dut):
    # paused: mercury has not moved one frame later
    beam = await start(dut, ui=0b0000_0001)
    assert (await beam.goto(1, 376, 240))["rgb"] == MERCURY


@cocotb.test()
async def test_speed(dut):
    # 8 steps per frame: mercury moved ~14 px, its old spot shows the ring
    beam = await start(dut, ui=0b0000_0110)
    assert (await beam.goto(0, 376, 240))["rgb"] == MERCURY
    assert (await beam.goto(1, 376, 240))["rgb"] == RING


@cocotb.test()
async def test_rings_off(dut):
    beam = await start(dut, ui=0b0000_1110)  # rings hidden, speed 8x
    assert (await beam.goto(1, 376, 240))["rgb"] != RING
