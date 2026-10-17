// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtt_um_zarovs_nbody.h for the primary calling header

#include "Vtt_um_zarovs_nbody__pch.h"
#include "Vtt_um_zarovs_nbody___024root.h"

VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___eval_static(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___eval_initial__TOP(Vtt_um_zarovs_nbody___024root* vlSelf);

VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___eval_initial(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_initial\n"); );
    // Body
    Vtt_um_zarovs_nbody___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___eval_initial__TOP(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tt_um_zarovs_nbody__DOT__uio_out = 0U;
    vlSelf->tt_um_zarovs_nbody__DOT__uio_oe = 0U;
    vlSelf->tt_um_zarovs_nbody__DOT___unused = 0U;
}

VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___eval_final(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___dump_triggers__stl(Vtt_um_zarovs_nbody___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtt_um_zarovs_nbody___024root___eval_phase__stl(Vtt_um_zarovs_nbody___024root* vlSelf);

VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___eval_settle(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtt_um_zarovs_nbody___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/claude/tt-design-1/src/project.v", 28, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtt_um_zarovs_nbody___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___dump_triggers__stl(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtt_um_zarovs_nbody___024root___ico_sequent__TOP__0(Vtt_um_zarovs_nbody___024root* vlSelf);

VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___eval_stl(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___eval_triggers__stl(Vtt_um_zarovs_nbody___024root* vlSelf);

VL_ATTR_COLD bool Vtt_um_zarovs_nbody___024root___eval_phase__stl(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtt_um_zarovs_nbody___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtt_um_zarovs_nbody___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___dump_triggers__ico(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___dump_triggers__act(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___dump_triggers__nba(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___ctor_var_reset(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ui_in = VL_RAND_RESET_I(8);
    vlSelf->uo_out = VL_RAND_RESET_I(8);
    vlSelf->uio_in = VL_RAND_RESET_I(8);
    vlSelf->uio_out = VL_RAND_RESET_I(8);
    vlSelf->uio_oe = VL_RAND_RESET_I(8);
    vlSelf->ena = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__ui_in = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT__uo_out = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT__uio_in = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT__uio_out = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT__uio_oe = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT__ena = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__hpos = VL_RAND_RESET_I(10);
    vlSelf->tt_um_zarovs_nbody__DOT__vpos = VL_RAND_RESET_I(10);
    vlSelf->tt_um_zarovs_nbody__DOT__hlast = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__vlast = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__visible = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__hsync = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__vsync = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__mass0 = VL_RAND_RESET_I(3);
    vlSelf->tt_um_zarovs_nbody__DOT__mass1 = VL_RAND_RESET_I(3);
    vlSelf->tt_um_zarovs_nbody__DOT__mass2 = VL_RAND_RESET_I(3);
    vlSelf->tt_um_zarovs_nbody__DOT__pause = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__spd = VL_RAND_RESET_I(3);
    vlSelf->tt_um_zarovs_nbody__DOT__spd_c = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tt_um_zarovs_nbody__DOT__px[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tt_um_zarovs_nbody__DOT__py[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tt_um_zarovs_nbody__DOT__vx[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tt_um_zarovs_nbody__DOT__vy[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->tt_um_zarovs_nbody__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tt_um_zarovs_nbody__DOT__t = VL_RAND_RESET_I(4);
    vlSelf->tt_um_zarovs_nbody__DOT__pair = VL_RAND_RESET_I(3);
    vlSelf->tt_um_zarovs_nbody__DOT__k = VL_RAND_RESET_I(3);
    vlSelf->tt_um_zarovs_nbody__DOT__pb = VL_RAND_RESET_I(2);
    vlSelf->tt_um_zarovs_nbody__DOT__steps_left = VL_RAND_RESET_I(7);
    vlSelf->tt_um_zarovs_nbody__DOT__cx = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__cy = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__dxr = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT__dyr = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT__bi = VL_RAND_RESET_I(2);
    vlSelf->tt_um_zarovs_nbody__DOT__bj = VL_RAND_RESET_I(2);
    vlSelf->tt_um_zarovs_nbody__DOT__mass_j = VL_RAND_RESET_I(3);
    vlSelf->tt_um_zarovs_nbody__DOT__ax = VL_RAND_RESET_I(7);
    vlSelf->tt_um_zarovs_nbody__DOT__ay = VL_RAND_RESET_I(7);
    vlSelf->tt_um_zarovs_nbody__DOT__xbig = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__hi = VL_RAND_RESET_I(7);
    vlSelf->tt_um_zarovs_nbody__DOT__lo = VL_RAND_RESET_I(7);
    vlSelf->tt_um_zarovs_nbody__DOT__oct = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT__e = VL_RAND_RESET_I(3);
    vlSelf->tt_um_zarovs_nbody__DOT__mant = VL_RAND_RESET_I(2);
    vlSelf->tt_um_zarovs_nbody__DOT__lut = VL_RAND_RESET_I(3);
    vlSelf->tt_um_zarovs_nbody__DOT__cfac6 = VL_RAND_RESET_I(6);
    vlSelf->tt_um_zarovs_nbody__DOT__cfac = VL_RAND_RESET_I(5);
    vlSelf->tt_um_zarovs_nbody__DOT__e3 = VL_RAND_RESET_I(6);
    vlSelf->tt_um_zarovs_nbody__DOT__sh = VL_RAND_RESET_I(6);
    vlSelf->tt_um_zarovs_nbody__DOT__q = VL_RAND_RESET_I(6);
    vlSelf->tt_um_zarovs_nbody__DOT__qr = VL_RAND_RESET_I(6);
    vlSelf->tt_um_zarovs_nbody__DOT__kon = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__vxb = VL_RAND_RESET_I(12);
    vlSelf->tt_um_zarovs_nbody__DOT__vyb = VL_RAND_RESET_I(12);
    vlSelf->tt_um_zarovs_nbody__DOT__tv = VL_RAND_RESET_I(5);
    vlSelf->tt_um_zarovs_nbody__DOT__a_x = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__b_x = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__a_y = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__b_y = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__c0x = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__c0y = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__first = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__cin_x = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__cin_y = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__sx = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__sy = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__cox = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__coy = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__last_p = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__last_v = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__n = VL_RAND_RESET_I(32);
    vlSelf->tt_um_zarovs_nbody__DOT__sxp = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT__syp = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT__o0x = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT__o0y = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT__o1x = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT__o1y = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT__o2x = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT__o2y = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT__on0 = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__on1 = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__on2 = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__border = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__rgb = VL_RAND_RESET_I(6);
    vlSelf->tt_um_zarovs_nbody__DOT__out_r = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT___unused = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h99d9bc9b__0 = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h3c9df23b__0 = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_hc1565f32__0 = VL_RAND_RESET_I(12);
    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h6c7d9e9f__0 = VL_RAND_RESET_I(12);
    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h99d9bc9b__1 = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h3c9df23b__1 = VL_RAND_RESET_I(11);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__d = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__idx = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__d = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__idx = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__d = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__idx = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__d = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__idx = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__Vfuncout = VL_RAND_RESET_I(7);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__v = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__a = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__Vfuncout = VL_RAND_RESET_I(7);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__v = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__a = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__10__Vfuncout = VL_RAND_RESET_I(7);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__10__v = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__10__a = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__11__Vfuncout = VL_RAND_RESET_I(7);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__11__v = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__11__a = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__14__Vfuncout = VL_RAND_RESET_I(7);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__14__v = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__14__a = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__15__Vfuncout = VL_RAND_RESET_I(7);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__15__v = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__15__a = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
