# SPDX-FileCopyrightText: © 2026 Nils Gazarovs
# SPDX-License-Identifier: Apache-2.0
#
# Tests for the three-body design. Physics correctness is checked bit-exactly
# against the Python model by model/check_rtl.py (Verilator); these cocotb tests
# cover the VGA timing, the starting scene and the controls.

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles

H_TOTAL, V_TOTAL = 800, 525
YELLOW, CYAN, PINK, BLACK = (3, 3, 0), (0, 3, 3), (3, 1, 3), (0, 0, 0)


def decode(v):
    """TinyVGA PMOD: uo_out = {HSYNC, B0, G0, R0, VSYNC, B1, G1, R1}"""
    v = int(v)
    r = ((v >> 0) & 1) << 1 | ((v >> 4) & 1)
    g = ((v >> 1) & 1) << 1 | ((v >> 5) & 1)
    b = ((v >> 2) & 1) << 1 | ((v >> 6) & 1)
    return {"hs": (v >> 7) & 1, "vs": (v >> 3) & 1, "rgb": (r, g, b)}


class Beam:
    """Outputs are combinational from the counters. After n clock edges from
    reset release the counters point at pixel n; ClockCycles wakes up at the
    edge before registers update, so a read after n edges sees pixel n - 1."""

    def __init__(self, dut):
        self.dut = dut
        self.edges = 0

    async def reset(self, ui=0, uio=0):
        dut = self.dut
        dut.ena.value = 1
        dut.ui_in.value = ui
        dut.uio_in.value = uio
        dut.rst_n.value = 0
        await ClockCycles(dut.clk, 10)
        dut.rst_n.value = 1
        self.edges = 0

    async def goto(self, frame, x, y):
        target = (frame * V_TOTAL + y) * H_TOTAL + x + 1
        assert target >= self.edges, "can't go back in time"
        if target > self.edges:
            await ClockCycles(self.dut.clk, target - self.edges)
        self.edges = target
        return decode(self.dut.uo_out.value)


async def start(dut, ui=0, uio=0):
    cocotb.start_soon(Clock(dut.clk, 40, units="ns").start())
    beam = Beam(dut)
    await beam.reset(ui, uio)
    return beam


@cocotb.test()
async def test_hsync(dut):
    beam = await start(dut)
    samples = [(await beam.goto(0, x, 0))["hs"] for x in range(2 * H_TOTAL)]
    falls = [i for i in range(1, len(samples)) if samples[i - 1] == 1 and samples[i] == 0]
    assert falls == [656, 656 + H_TOTAL], f"hsync falling edges at {falls}"
    assert samples[656:752] == [0] * 96 and samples[752] == 1, "hsync pulse must be 96 pixels"


@cocotb.test()
async def test_vsync(dut):
    beam = await start(dut)
    assert (await beam.goto(0, 799, 489))["vs"] == 1
    assert (await beam.goto(0, 0, 490))["vs"] == 0
    assert (await beam.goto(0, 799, 491))["vs"] == 0
    assert (await beam.goto(0, 0, 492))["vs"] == 1
    assert (await beam.goto(0, 700, 495))["rgb"] == BLACK


@cocotb.test()
async def test_start_scene(dut):
    # chaos scene: body 0 at world (-25, 0) -> screen (270, 240); body 1 at (25, 0)
    # -> (370, 240); body 2 at (0, -95) -> (320, 50)
    beam = await start(dut)
    assert (await beam.goto(0, 320, 50))["rgb"] == PINK
    assert (await beam.goto(0, 270, 240))["rgb"] == YELLOW
    assert (await beam.goto(0, 320, 240))["rgb"] == BLACK
    assert (await beam.goto(0, 370, 240))["rgb"] == CYAN


@cocotb.test()
async def test_sun_earth_scene(dut):
    # ui[3] at reset picks the Sun + Earth scene: Sun (mass 64, 16 px square) at
    # world (-2, 0) -> screen (316, 240), Earth (mass 1, 4 px) at (85, 0) -> (490, 240)
    beam = await start(dut, ui=0b1000)
    assert (await beam.goto(0, 312, 240))["rgb"] == YELLOW
    assert (await beam.goto(0, 316, 240))["rgb"] == YELLOW
    assert (await beam.goto(0, 400, 240))["rgb"] == BLACK
    assert (await beam.goto(0, 490, 240))["rgb"] == CYAN
    assert (await beam.goto(0, 494, 240))["rgb"] == BLACK   # Earth is small


@cocotb.test()
async def test_pause_holds(dut):
    # paused (ui[1]): the third body is still at its start
    # position frames later
    beam = await start(dut, ui=0b0000_0010)
    assert (await beam.goto(3, 320, 50))["rgb"] == PINK


@cocotb.test()
async def test_bodies_move(dut):
    # fastest speed (ui[6:4] = 7, ~34 steps per frame): after a few frames the
    # third body (vx = 0.41 px/step) has left its start position
    beam = await start(dut, ui=0b0111_0000)
    assert (await beam.goto(0, 320, 50))["rgb"] == PINK
    assert (await beam.goto(3, 320, 50))["rgb"] != PINK
