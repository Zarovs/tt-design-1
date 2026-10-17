// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtt_um_zarovs_nbody.h for the primary calling header

#include "Vtt_um_zarovs_nbody__pch.h"
#include "Vtt_um_zarovs_nbody__Syms.h"
#include "Vtt_um_zarovs_nbody___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___dump_triggers__ico(Vtt_um_zarovs_nbody___024root* vlSelf);
#endif  // VL_DEBUG

void Vtt_um_zarovs_nbody___024root___eval_triggers__ico(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtt_um_zarovs_nbody___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___dump_triggers__act(Vtt_um_zarovs_nbody___024root* vlSelf);
#endif  // VL_DEBUG

void Vtt_um_zarovs_nbody___024root___eval_triggers__act(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_pos) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_pos__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_vel) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_vel__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_pos) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_pos__0))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_vel) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_vel__0))));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_pos) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_pos__0))));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_vel) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_vel__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_pos__0 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_pos;
    vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_vel__0 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_vel;
    vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_pos__0 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_pos;
    vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_vel__0 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_vel;
    vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_pos__0 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_pos;
    vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_vel__0 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_vel;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtt_um_zarovs_nbody___024root___dump_triggers__act(vlSelf);
    }
#endif
}
