// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtt_um_zarovs_nbody.h for the primary calling header

#include "Vtt_um_zarovs_nbody__pch.h"
#include "Vtt_um_zarovs_nbody__Syms.h"
#include "Vtt_um_zarovs_nbody___024root.h"

// Parameter definitions for Vtt_um_zarovs_nbody___024root
constexpr CData/*2:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__S_IDLE;
constexpr CData/*2:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__S_D;
constexpr CData/*2:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__S_A;
constexpr CData/*2:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__S_P;
constexpr CData/*2:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__S_INIT;
constexpr SData/*10:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__X0;
constexpr SData/*10:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__Y0;
constexpr SData/*11:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__VX0;
constexpr SData/*11:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__VY0;
constexpr SData/*10:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__X0;
constexpr SData/*10:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__Y0;
constexpr SData/*11:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__VX0;
constexpr SData/*11:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__VY0;
constexpr SData/*10:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__X0;
constexpr SData/*10:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__Y0;
constexpr SData/*11:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__VX0;
constexpr SData/*11:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__VY0;
constexpr IData/*31:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__P;
constexpr IData/*31:0*/ Vtt_um_zarovs_nbody___024root::tt_um_zarovs_nbody__DOT__V;


void Vtt_um_zarovs_nbody___024root___ctor_var_reset(Vtt_um_zarovs_nbody___024root* vlSelf);

Vtt_um_zarovs_nbody___024root::Vtt_um_zarovs_nbody___024root(Vtt_um_zarovs_nbody__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtt_um_zarovs_nbody___024root___ctor_var_reset(this);
}

void Vtt_um_zarovs_nbody___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtt_um_zarovs_nbody___024root::~Vtt_um_zarovs_nbody___024root() {
}
