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
}

VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___eval_initial__TOP(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->uio_out = 0U;
    vlSelf->uio_oe = 0U;
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

extern const VlUnpacked<CData/*1:0*/, 8> Vtt_um_zarovs_nbody__ConstPool__TABLE_h2bc3323b_0;
extern const VlUnpacked<CData/*1:0*/, 8> Vtt_um_zarovs_nbody__ConstPool__TABLE_h36fd642b_0;

VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___stl_sequent__TOP__0(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ tt_um_zarovs_nbody__DOT__ax;
    tt_um_zarovs_nbody__DOT__ax = 0;
    CData/*6:0*/ tt_um_zarovs_nbody__DOT__ay;
    tt_um_zarovs_nbody__DOT__ay = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT__xbig;
    tt_um_zarovs_nbody__DOT__xbig = 0;
    CData/*7:0*/ tt_um_zarovs_nbody__DOT__oct;
    tt_um_zarovs_nbody__DOT__oct = 0;
    CData/*1:0*/ tt_um_zarovs_nbody__DOT__mant;
    tt_um_zarovs_nbody__DOT__mant = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT__c0x;
    tt_um_zarovs_nbody__DOT__c0x = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT__c0y;
    tt_um_zarovs_nbody__DOT__c0y = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT__hit;
    tt_um_zarovs_nbody__DOT__hit = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT__on0;
    tt_um_zarovs_nbody__DOT__on0 = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT__on1;
    tt_um_zarovs_nbody__DOT__on1 = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT__on2;
    tt_um_zarovs_nbody__DOT__on2 = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h3b6c90c8__0;
    tt_um_zarovs_nbody__DOT____VdfgTmp_h3b6c90c8__0 = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h187ae4f7__0;
    tt_um_zarovs_nbody__DOT____VdfgTmp_h187ae4f7__0 = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h890c3c30__0;
    tt_um_zarovs_nbody__DOT____VdfgTmp_h890c3c30__0 = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h43f790a7__0;
    tt_um_zarovs_nbody__DOT____VdfgTmp_h43f790a7__0 = 0;
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->tt_um_zarovs_nbody__DOT__hlast = (0x31fU 
                                              == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos));
    vlSelf->tt_um_zarovs_nbody__DOT__vlast = (0x20cU 
                                              == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos));
    vlSelf->tt_um_zarovs_nbody__DOT__first = (0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t));
    vlSelf->tt_um_zarovs_nbody__DOT__last_v = (0xbU 
                                               == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t));
    vlSelf->tt_um_zarovs_nbody__DOT__last_p = (0xaU 
                                               == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t));
    vlSelf->tt_um_zarovs_nbody__DOT__hsync = (1U & 
                                              (~ ((0x290U 
                                                   <= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)) 
                                                  & (0x2f0U 
                                                     > (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)))));
    vlSelf->tt_um_zarovs_nbody__DOT__vsync = (1U & 
                                              (~ ((0x1eaU 
                                                   <= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos)) 
                                                  & (0x1ecU 
                                                     > (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos)))));
    vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h8c12093b__0 
        = ((0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)) 
           & (2U != (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)));
    vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h7d63c64c__0 
        = ((3U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
           & (0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb)));
    vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h7d34167f__0 
        = ((3U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
           & (1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb)));
    vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h7d3827b6__0 
        = ((3U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
           & (2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb)));
    vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0 
        = ((0xbU != (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)) 
           & (4U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)));
    vlSelf->tt_um_zarovs_nbody__DOT__px[0U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rx;
    vlSelf->tt_um_zarovs_nbody__DOT__px[1U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rx;
    vlSelf->tt_um_zarovs_nbody__DOT__px[2U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rx;
    vlSelf->tt_um_zarovs_nbody__DOT__py[0U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__ry;
    vlSelf->tt_um_zarovs_nbody__DOT__py[1U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__ry;
    vlSelf->tt_um_zarovs_nbody__DOT__py[2U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__ry;
    vlSelf->tt_um_zarovs_nbody__DOT__vx[0U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rvx;
    vlSelf->tt_um_zarovs_nbody__DOT__vx[1U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rvx;
    vlSelf->tt_um_zarovs_nbody__DOT__vx[2U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rvx;
    vlSelf->tt_um_zarovs_nbody__DOT__vy[0U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rvy;
    vlSelf->tt_um_zarovs_nbody__DOT__vy[1U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rvy;
    vlSelf->tt_um_zarovs_nbody__DOT__vy[2U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rvy;
    __Vtableidx1 = vlSelf->tt_um_zarovs_nbody__DOT__pair;
    vlSelf->tt_um_zarovs_nbody__DOT__bi = Vtt_um_zarovs_nbody__ConstPool__TABLE_h2bc3323b_0
        [__Vtableidx1];
    vlSelf->tt_um_zarovs_nbody__DOT__bj = Vtt_um_zarovs_nbody__ConstPool__TABLE_h36fd642b_0
        [__Vtableidx1];
    tt_um_zarovs_nbody__DOT__ax = (0x7fU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__dxr) 
                                            ^ (- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__dxr) 
                                                             >> 7U))))));
    tt_um_zarovs_nbody__DOT__ay = (0x7fU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__dyr) 
                                            ^ (- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__dyr) 
                                                             >> 7U))))));
    vlSelf->tt_um_zarovs_nbody__DOT__d2x = (0xffU & 
                                            ((0x3ffU 
                                              & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos) 
                                                  - (IData)(0x140U)) 
                                                 >> 1U)) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rx) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__d2y = (0xffU & 
                                            ((0x3ffU 
                                              & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos) 
                                                  - (IData)(0xf0U)) 
                                                 >> 1U)) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__ry) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__d1x = (0xffU & 
                                            ((0x3ffU 
                                              & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos) 
                                                  - (IData)(0x140U)) 
                                                 >> 1U)) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rx) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__d1y = (0xffU & 
                                            ((0x3ffU 
                                              & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos) 
                                                  - (IData)(0xf0U)) 
                                                 >> 1U)) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__ry) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__d0x = (0xffU & 
                                            ((0x3ffU 
                                              & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos) 
                                                  - (IData)(0x140U)) 
                                                 >> 1U)) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rx) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__d0y = (0xffU & 
                                            ((0x3ffU 
                                              & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos) 
                                                  - (IData)(0xf0U)) 
                                                 >> 1U)) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__ry) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__in_world = ((0U 
                                                  == 
                                                  (7U 
                                                   & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos) 
                                                       - (IData)(0x140U)) 
                                                      >> 8U))) 
                                                 | (7U 
                                                    == 
                                                    (7U 
                                                     & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos) 
                                                         - (IData)(0x140U)) 
                                                        >> 8U))));
    if ((2U >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb))) {
        vlSelf->tt_um_zarovs_nbody__DOT__vxb = vlSelf->tt_um_zarovs_nbody__DOT__vx
            [vlSelf->tt_um_zarovs_nbody__DOT__pb];
        vlSelf->tt_um_zarovs_nbody__DOT__vyb = vlSelf->tt_um_zarovs_nbody__DOT__vy
            [vlSelf->tt_um_zarovs_nbody__DOT__pb];
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__vxb = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__vyb = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__en_l 
            = ((4U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
               | (((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
                   & ((0U != (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)) 
                      & (0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi)))) 
                  | (IData)(vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h7d63c64c__0)));
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__en_l 
            = ((4U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
               | (((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
                   & ((0U != (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)) 
                      & (1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi)))) 
                  | (IData)(vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h7d34167f__0)));
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__en_l 
            = ((4U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
               | (((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
                   & ((0U != (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)) 
                      & (2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi)))) 
                  | (IData)(vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h7d3827b6__0)));
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__en_l 
            = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0) 
               | (((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
                   & ((0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi)) 
                      | (0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj)))) 
                  | ((0xbU != (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)) 
                     & (IData)(vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h7d63c64c__0))));
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__en_l 
            = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0) 
               | (((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
                   & ((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi)) 
                      | (1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj)))) 
                  | ((0xbU != (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)) 
                     & (IData)(vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h7d34167f__0))));
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__en_l 
            = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0) 
               | (((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
                   & ((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi)) 
                      | (2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj)))) 
                  | ((0xbU != (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)) 
                     & (IData)(vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h7d3827b6__0))));
    }
    tt_um_zarovs_nbody__DOT__xbig = ((IData)(tt_um_zarovs_nbody__DOT__ax) 
                                     >= (IData)(tt_um_zarovs_nbody__DOT__ay));
    vlSelf->tt_um_zarovs_nbody__DOT__w2 = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__in_world) 
                                           & ([&]() {
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__oy 
                    = ((0xc0U & ((- (IData)((1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2y) 
                                                   >> 7U)))) 
                                 << 6U)) | (0x3fU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2y) 
                                             >> 2U)));
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__ox 
                    = ((0xc0U & ((- (IData)((1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2x) 
                                                   >> 7U)))) 
                                 << 6U)) | (0x3fU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2x) 
                                             >> 2U)));
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__Vfuncout 
                    = (((0U == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__ox)) 
                        | (0xffU == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__ox))) 
                       & ((0U == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__oy)) 
                          | (0xffU == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__oy))));
            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__Vfuncout)));
    vlSelf->tt_um_zarovs_nbody__DOT__w1 = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__in_world) 
                                           & ([&]() {
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__3__oy 
                    = ((0xc0U & ((- (IData)((1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1y) 
                                                   >> 7U)))) 
                                 << 6U)) | (0x3fU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1y) 
                                             >> 2U)));
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__3__ox 
                    = ((0xc0U & ((- (IData)((1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1x) 
                                                   >> 7U)))) 
                                 << 6U)) | (0x3fU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1x) 
                                             >> 2U)));
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__3__Vfuncout 
                    = (((0U == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__3__ox)) 
                        | (0xffU == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__3__ox))) 
                       & ((0U == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__3__oy)) 
                          | (0xffU == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__3__oy))));
            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__3__Vfuncout)));
    vlSelf->tt_um_zarovs_nbody__DOT__w0 = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__in_world) 
                                           & ([&]() {
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__2__oy 
                    = ((0xc0U & ((- (IData)((1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0y) 
                                                   >> 7U)))) 
                                 << 6U)) | (0x3fU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0y) 
                                             >> 2U)));
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__2__ox 
                    = ((0xc0U & ((- (IData)((1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0x) 
                                                   >> 7U)))) 
                                 << 6U)) | (0x3fU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0x) 
                                             >> 2U)));
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__2__Vfuncout 
                    = (((0U == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__2__ox)) 
                        | (0xffU == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__2__ox))) 
                       & ((0U == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__2__oy)) 
                          | (0xffU == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__2__oy))));
            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__2__Vfuncout)));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_vel 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_vel 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_vel 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_pos 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_pos 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_pos 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__en_l));
    tt_um_zarovs_nbody__DOT__oct = (0xffU & (((IData)(tt_um_zarovs_nbody__DOT__xbig)
                                               ? (IData)(tt_um_zarovs_nbody__DOT__ax)
                                               : (IData)(tt_um_zarovs_nbody__DOT__ay)) 
                                             + (0x1fU 
                                                & (((IData)(tt_um_zarovs_nbody__DOT__xbig)
                                                     ? (IData)(tt_um_zarovs_nbody__DOT__ay)
                                                     : (IData)(tt_um_zarovs_nbody__DOT__ax)) 
                                                   >> 2U))));
    tt_um_zarovs_nbody__DOT__hit = ((((IData)(vlSelf->tt_um_zarovs_nbody__DOT__w0) 
                                      | (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w1)) 
                                     | (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w2)) 
                                    & ((0xffU & (VL_EXTEND_II(8,7, 
                                                              ([&]() {
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__5__v 
                                    = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__w0)
                                        ? ((0xeU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0x) 
                                             << 1U)) 
                                           | (1U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)))
                                        : ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__w1)
                                            ? ((0xeU 
                                                & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1x) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)))
                                            : ((0xeU 
                                                & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2x) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)))));
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__5__a 
                                    = (0xfU & ((8U 
                                                & (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__5__v))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__5__v)))
                                                : (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__5__v)));
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__5__Vfuncout 
                                    = (0x7fU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__5__a) 
                                                * (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__5__a)));
                            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__5__Vfuncout))) 
                                                 + 
                                                 VL_EXTEND_II(8,7, 
                                                              ([&]() {
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__v 
                                    = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__w0)
                                        ? ((0xeU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0y) 
                                             << 1U)) 
                                           | (1U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos)))
                                        : ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__w1)
                                            ? ((0xeU 
                                                & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1y) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos)))
                                            : ((0xeU 
                                                & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2y) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos)))));
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__a 
                                    = (0xfU & ((8U 
                                                & (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__v))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__v)))
                                                : (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__v)));
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__Vfuncout 
                                    = (0x7fU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__a) 
                                                * (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__a)));
                            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__Vfuncout))))) 
                                       <= VL_EXTEND_II(8,7, 
                                                       ([&]() {
                        vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__7__m 
                            = (3U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__w0)
                                      ? (IData)(vlSelf->ui_in)
                                      : ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__w1)
                                          ? ((IData)(vlSelf->ui_in) 
                                             >> 2U)
                                          : ((IData)(vlSelf->ui_in) 
                                             >> 4U))));
                        vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__7__Vfuncout 
                            = ((0U == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__7__m))
                                ? 0xcU : ((1U == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__7__m))
                                           ? 0x14U : 
                                          ((2U == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__7__m))
                                            ? 0x1eU
                                            : 0x2aU)));
                    }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__7__Vfuncout)))));
    if ((0x80U == (0x80U & (IData)(tt_um_zarovs_nbody__DOT__oct)))) {
        tt_um_zarovs_nbody__DOT__mant = (3U & ((IData)(tt_um_zarovs_nbody__DOT__oct) 
                                               >> 5U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 7U;
    } else if ((0x40U == (0xc0U & (IData)(tt_um_zarovs_nbody__DOT__oct)))) {
        tt_um_zarovs_nbody__DOT__mant = (3U & ((IData)(tt_um_zarovs_nbody__DOT__oct) 
                                               >> 4U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 6U;
    } else if ((0x20U == (0xe0U & (IData)(tt_um_zarovs_nbody__DOT__oct)))) {
        tt_um_zarovs_nbody__DOT__mant = (3U & ((IData)(tt_um_zarovs_nbody__DOT__oct) 
                                               >> 3U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 5U;
    } else if ((0x10U == (0xf0U & (IData)(tt_um_zarovs_nbody__DOT__oct)))) {
        tt_um_zarovs_nbody__DOT__mant = (3U & ((IData)(tt_um_zarovs_nbody__DOT__oct) 
                                               >> 2U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 4U;
    } else if ((8U == (0xf8U & (IData)(tt_um_zarovs_nbody__DOT__oct)))) {
        tt_um_zarovs_nbody__DOT__mant = (3U & ((IData)(tt_um_zarovs_nbody__DOT__oct) 
                                               >> 1U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 3U;
    } else {
        tt_um_zarovs_nbody__DOT__mant = (3U & ((4U 
                                                == 
                                                (0xfcU 
                                                 & (IData)(tt_um_zarovs_nbody__DOT__oct)))
                                                ? (IData)(tt_um_zarovs_nbody__DOT__oct)
                                                : 0U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 2U;
    }
    tt_um_zarovs_nbody__DOT__on0 = ((IData)(tt_um_zarovs_nbody__DOT__hit) 
                                    & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w0));
    tt_um_zarovs_nbody__DOT____VdfgTmp_h43f790a7__0 
        = ((~ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w0)) 
           & (IData)(tt_um_zarovs_nbody__DOT__hit));
    vlSelf->tt_um_zarovs_nbody__DOT__kon = ((2U >= 
                                             (3U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__k))) 
                                            && (1U 
                                                & (((0U 
                                                     == (IData)(tt_um_zarovs_nbody__DOT__mant))
                                                     ? 6U
                                                     : 
                                                    ((1U 
                                                      == (IData)(tt_um_zarovs_nbody__DOT__mant))
                                                      ? 3U
                                                      : 
                                                     ((2U 
                                                       == (IData)(tt_um_zarovs_nbody__DOT__mant))
                                                       ? 2U
                                                       : 1U))) 
                                                   >> 
                                                   (3U 
                                                    & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__k)))));
    vlSelf->tt_um_zarovs_nbody__DOT__sh = (0x3fU & 
                                           ((((((IData)(vlSelf->tt_um_zarovs_nbody__DOT__e) 
                                                << 1U) 
                                               + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__e)) 
                                              - (IData)(0xaU)) 
                                             - (3U 
                                                & ((0U 
                                                    == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj))
                                                    ? (IData)(vlSelf->ui_in)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj))
                                                     ? 
                                                    ((IData)(vlSelf->ui_in) 
                                                     >> 2U)
                                                     : 
                                                    ((IData)(vlSelf->ui_in) 
                                                     >> 4U))))) 
                                            - (IData)(vlSelf->tt_um_zarovs_nbody__DOT__k)));
    tt_um_zarovs_nbody__DOT__on2 = ((~ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w1)) 
                                    & (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h43f790a7__0));
    tt_um_zarovs_nbody__DOT__on1 = ((IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h43f790a7__0) 
                                    & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w1));
    vlSelf->tt_um_zarovs_nbody__DOT__q = (0x3fU & (
                                                   ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__t) 
                                                    + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sh)) 
                                                   - (IData)(1U)));
    tt_um_zarovs_nbody__DOT____VdfgTmp_h890c3c30__0 
        = ((IData)(tt_um_zarovs_nbody__DOT__on0) | 
           ((~ (IData)(tt_um_zarovs_nbody__DOT__on1)) 
            & (IData)(tt_um_zarovs_nbody__DOT__on2)));
    tt_um_zarovs_nbody__DOT____VdfgTmp_h187ae4f7__0 
        = ((IData)(tt_um_zarovs_nbody__DOT__on1) | (IData)(tt_um_zarovs_nbody__DOT__on2));
    vlSelf->tt_um_zarovs_nbody__DOT__a_x = 0U;
    vlSelf->tt_um_zarovs_nbody__DOT__b_x = 0U;
    vlSelf->tt_um_zarovs_nbody__DOT__a_y = 0U;
    vlSelf->tt_um_zarovs_nbody__DOT__b_y = 0U;
    tt_um_zarovs_nbody__DOT__c0x = 0U;
    tt_um_zarovs_nbody__DOT__c0y = 0U;
    if ((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))) {
        if ((2U >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj))) {
            vlSelf->tt_um_zarovs_nbody__DOT__a_x = 
                (1U & vlSelf->tt_um_zarovs_nbody__DOT__px
                 [vlSelf->tt_um_zarovs_nbody__DOT__bj]);
            vlSelf->tt_um_zarovs_nbody__DOT__a_y = 
                (1U & vlSelf->tt_um_zarovs_nbody__DOT__py
                 [vlSelf->tt_um_zarovs_nbody__DOT__bj]);
        } else {
            vlSelf->tt_um_zarovs_nbody__DOT__a_x = 0U;
            vlSelf->tt_um_zarovs_nbody__DOT__a_y = 0U;
        }
        vlSelf->tt_um_zarovs_nbody__DOT__b_x = (1U 
                                                & (~ 
                                                   ((2U 
                                                     >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi))
                                                     ? 
                                                    vlSelf->tt_um_zarovs_nbody__DOT__px
                                                    [vlSelf->tt_um_zarovs_nbody__DOT__bi]
                                                     : 0U)));
        vlSelf->tt_um_zarovs_nbody__DOT__b_y = (1U 
                                                & (~ 
                                                   ((2U 
                                                     >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi))
                                                     ? 
                                                    vlSelf->tt_um_zarovs_nbody__DOT__py
                                                    [vlSelf->tt_um_zarovs_nbody__DOT__bi]
                                                     : 0U)));
        tt_um_zarovs_nbody__DOT__c0x = 1U;
        tt_um_zarovs_nbody__DOT__c0y = 1U;
    } else if ((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))) {
        if ((2U >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi))) {
            vlSelf->tt_um_zarovs_nbody__DOT__a_x = 
                (1U & vlSelf->tt_um_zarovs_nbody__DOT__vx
                 [vlSelf->tt_um_zarovs_nbody__DOT__bi]);
            vlSelf->tt_um_zarovs_nbody__DOT__a_y = 
                (1U & vlSelf->tt_um_zarovs_nbody__DOT__vy
                 [vlSelf->tt_um_zarovs_nbody__DOT__bi]);
        } else {
            vlSelf->tt_um_zarovs_nbody__DOT__a_x = 0U;
            vlSelf->tt_um_zarovs_nbody__DOT__a_y = 0U;
        }
        vlSelf->tt_um_zarovs_nbody__DOT__b_x = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__kon) 
                                                & ([&]() {
                    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__idx 
                        = vlSelf->tt_um_zarovs_nbody__DOT__q;
                    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__d 
                        = vlSelf->tt_um_zarovs_nbody__DOT__dxr;
                    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__Vfuncout 
                        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,6, (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__idx))) 
                           & (VL_LTS_III(32, 7U, VL_EXTENDS_II(32,6, (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__idx)))
                               ? ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__d) 
                                  >> 7U) : ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__d) 
                                            >> (7U 
                                                & (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__idx)))));
                }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__Vfuncout)));
        vlSelf->tt_um_zarovs_nbody__DOT__b_y = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__kon) 
                                                & ([&]() {
                    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__idx 
                        = vlSelf->tt_um_zarovs_nbody__DOT__q;
                    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__d 
                        = vlSelf->tt_um_zarovs_nbody__DOT__dyr;
                    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__Vfuncout 
                        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,6, (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__idx))) 
                           & (VL_LTS_III(32, 7U, VL_EXTENDS_II(32,6, (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__idx)))
                               ? ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__d) 
                                  >> 7U) : ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__d) 
                                            >> (7U 
                                                & (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__idx)))));
                }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__Vfuncout)));
    } else if ((3U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))) {
        if ((2U >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb))) {
            vlSelf->tt_um_zarovs_nbody__DOT__a_x = 
                (1U & vlSelf->tt_um_zarovs_nbody__DOT__px
                 [vlSelf->tt_um_zarovs_nbody__DOT__pb]);
            vlSelf->tt_um_zarovs_nbody__DOT__a_y = 
                (1U & vlSelf->tt_um_zarovs_nbody__DOT__py
                 [vlSelf->tt_um_zarovs_nbody__DOT__pb]);
        } else {
            vlSelf->tt_um_zarovs_nbody__DOT__a_x = 0U;
            vlSelf->tt_um_zarovs_nbody__DOT__a_y = 0U;
        }
        if ((4U < (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t))) {
            vlSelf->tt_um_zarovs_nbody__DOT__b_x = 
                (1U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vsx));
            vlSelf->tt_um_zarovs_nbody__DOT__b_y = 
                (1U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vsy));
        } else {
            vlSelf->tt_um_zarovs_nbody__DOT__b_x = 
                (1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vxb) 
                       >> 7U));
            vlSelf->tt_um_zarovs_nbody__DOT__b_y = 
                (1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vyb) 
                       >> 7U));
        }
        tt_um_zarovs_nbody__DOT__c0x = (1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vxb) 
                                              >> 6U));
        tt_um_zarovs_nbody__DOT__c0y = (1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vyb) 
                                              >> 6U));
    }
    tt_um_zarovs_nbody__DOT____VdfgTmp_h3b6c90c8__0 
        = ((~ (IData)(tt_um_zarovs_nbody__DOT__on0)) 
           & (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h187ae4f7__0));
    if (vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h8c12093b__0) {
        vlSelf->tt_um_zarovs_nbody__DOT__cin_x = tt_um_zarovs_nbody__DOT__c0x;
        vlSelf->tt_um_zarovs_nbody__DOT__cin_y = tt_um_zarovs_nbody__DOT__c0y;
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__cin_x = vlSelf->tt_um_zarovs_nbody__DOT__cx;
        vlSelf->tt_um_zarovs_nbody__DOT__cin_y = vlSelf->tt_um_zarovs_nbody__DOT__cy;
    }
    vlSelf->uo_out = (((0x280U > (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)) 
                       & (0x1e0U > (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos)))
                       ? (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hsync) 
                           << 7U) | (((IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h3b6c90c8__0) 
                                      << 6U) | ((((IData)(tt_um_zarovs_nbody__DOT__on0) 
                                                  | (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h187ae4f7__0)) 
                                                 << 5U) 
                                                | (((IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h890c3c30__0) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vsync) 
                                                       << 3U) 
                                                      | (((IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h3b6c90c8__0) 
                                                          << 2U) 
                                                         | ((((IData)(tt_um_zarovs_nbody__DOT__on0) 
                                                              | (IData)(tt_um_zarovs_nbody__DOT__on1)) 
                                                             << 1U) 
                                                            | (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h890c3c30__0))))))))
                       : (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hsync) 
                           << 7U) | ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vsync) 
                                     << 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__sx = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__a_x) 
                                           ^ ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_x) 
                                              ^ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_x)));
    vlSelf->tt_um_zarovs_nbody__DOT__sy = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__a_y) 
                                           ^ ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_y) 
                                              ^ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_y)));
}

VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___eval_stl(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___stl_sequent__TOP__0(vlSelf);
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
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tt_um_zarovs_nbody.body[0].gclk_pos)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tt_um_zarovs_nbody.body[0].gclk_vel)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge tt_um_zarovs_nbody.body[1].gclk_pos)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge tt_um_zarovs_nbody.body[1].gclk_vel)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge tt_um_zarovs_nbody.body[2].gclk_pos)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge tt_um_zarovs_nbody.body[2].gclk_vel)\n");
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
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tt_um_zarovs_nbody.body[0].gclk_pos)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tt_um_zarovs_nbody.body[0].gclk_vel)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge tt_um_zarovs_nbody.body[1].gclk_pos)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge tt_um_zarovs_nbody.body[1].gclk_vel)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge tt_um_zarovs_nbody.body[2].gclk_pos)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge tt_um_zarovs_nbody.body[2].gclk_vel)\n");
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
    vlSelf->tt_um_zarovs_nbody__DOT__hpos = VL_RAND_RESET_I(10);
    vlSelf->tt_um_zarovs_nbody__DOT__vpos = VL_RAND_RESET_I(10);
    vlSelf->tt_um_zarovs_nbody__DOT__hlast = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__vlast = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__hsync = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__vsync = VL_RAND_RESET_I(1);
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
    vlSelf->tt_um_zarovs_nbody__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tt_um_zarovs_nbody__DOT__t = VL_RAND_RESET_I(4);
    vlSelf->tt_um_zarovs_nbody__DOT__pair = VL_RAND_RESET_I(3);
    vlSelf->tt_um_zarovs_nbody__DOT__k = VL_RAND_RESET_I(3);
    vlSelf->tt_um_zarovs_nbody__DOT__pb = VL_RAND_RESET_I(2);
    vlSelf->tt_um_zarovs_nbody__DOT__cx = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__cy = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__dxr = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT__dyr = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT__bi = VL_RAND_RESET_I(2);
    vlSelf->tt_um_zarovs_nbody__DOT__bj = VL_RAND_RESET_I(2);
    vlSelf->tt_um_zarovs_nbody__DOT__e = VL_RAND_RESET_I(3);
    vlSelf->tt_um_zarovs_nbody__DOT__sh = VL_RAND_RESET_I(6);
    vlSelf->tt_um_zarovs_nbody__DOT__q = VL_RAND_RESET_I(6);
    vlSelf->tt_um_zarovs_nbody__DOT__kon = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__vxb = VL_RAND_RESET_I(12);
    vlSelf->tt_um_zarovs_nbody__DOT__vyb = VL_RAND_RESET_I(12);
    vlSelf->tt_um_zarovs_nbody__DOT__vsx = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__vsy = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__a_x = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__b_x = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__a_y = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__b_y = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__first = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__cin_x = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__cin_y = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__sx = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__sy = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__last_p = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__last_v = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__d0x = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT__d0y = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT__d1x = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT__d1y = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT__d2x = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT__d2y = VL_RAND_RESET_I(8);
    vlSelf->tt_um_zarovs_nbody__DOT__in_world = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__w0 = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__w1 = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__w2 = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_pos = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_vel = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rx = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__ry = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rvx = VL_RAND_RESET_I(12);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rvy = VL_RAND_RESET_I(12);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_pos = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_vel = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rx = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__ry = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rvx = VL_RAND_RESET_I(12);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rvy = VL_RAND_RESET_I(12);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_pos = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_vel = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rx = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__ry = VL_RAND_RESET_I(11);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rvx = VL_RAND_RESET_I(12);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rvy = VL_RAND_RESET_I(12);
    vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h8c12093b__0 = 0;
    vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0 = 0;
    vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h7d63c64c__0 = 0;
    vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h7d34167f__0 = 0;
    vlSelf->tt_um_zarovs_nbody__DOT____VdfgTmp_h7d3827b6__0 = 0;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__en_l = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__en_l = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__en_l = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__en_l = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__en_l = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__en_l = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__d = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__idx = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__d = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__idx = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__2__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__2__ox = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__2__oy = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__3__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__3__ox = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__3__oy = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__ox = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__oy = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__5__Vfuncout = VL_RAND_RESET_I(7);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__5__v = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__5__a = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__Vfuncout = VL_RAND_RESET_I(7);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__v = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__a = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__7__Vfuncout = VL_RAND_RESET_I(7);
    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__7__m = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_pos__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_vel__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_pos__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_vel__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_pos__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_vel__0 = VL_RAND_RESET_I(1);
}
