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
    CData/*6:0*/ tt_um_zarovs_nbody__DOT__lo;
    tt_um_zarovs_nbody__DOT__lo = 0;
    CData/*7:0*/ tt_um_zarovs_nbody__DOT__oct;
    tt_um_zarovs_nbody__DOT__oct = 0;
    CData/*2:0*/ tt_um_zarovs_nbody__DOT__e;
    tt_um_zarovs_nbody__DOT__e = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT__kon;
    tt_um_zarovs_nbody__DOT__kon = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT__c0x;
    tt_um_zarovs_nbody__DOT__c0x = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT__c0y;
    tt_um_zarovs_nbody__DOT__c0y = 0;
    CData/*0:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__disk__4__Vfuncout;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__4__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__disk__4__ox;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__4__ox = 0;
    SData/*10:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__disk__4__oy;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__4__oy = 0;
    CData/*6:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__disk__4__r2;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__4__r2 = 0;
    CData/*0:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__disk__4__in_win;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__4__in_win = 0;
    CData/*6:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__rr__5__Vfuncout;
    __Vfunc_tt_um_zarovs_nbody__DOT__rr__5__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__rr__5__m;
    __Vfunc_tt_um_zarovs_nbody__DOT__rr__5__m = 0;
    CData/*0:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__disk__8__Vfuncout;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__8__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__disk__8__ox;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__8__ox = 0;
    SData/*10:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__disk__8__oy;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__8__oy = 0;
    CData/*6:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__disk__8__r2;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__8__r2 = 0;
    CData/*0:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__disk__8__in_win;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__8__in_win = 0;
    CData/*6:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__rr__9__Vfuncout;
    __Vfunc_tt_um_zarovs_nbody__DOT__rr__9__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__rr__9__m;
    __Vfunc_tt_um_zarovs_nbody__DOT__rr__9__m = 0;
    CData/*0:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__disk__12__Vfuncout;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__12__Vfuncout = 0;
    SData/*10:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__disk__12__ox;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__12__ox = 0;
    SData/*10:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__disk__12__oy;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__12__oy = 0;
    CData/*6:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__disk__12__r2;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__12__r2 = 0;
    CData/*0:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__disk__12__in_win;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__12__in_win = 0;
    CData/*6:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__rr__13__Vfuncout;
    __Vfunc_tt_um_zarovs_nbody__DOT__rr__13__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__rr__13__m;
    __Vfunc_tt_um_zarovs_nbody__DOT__rr__13__m = 0;
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->tt_um_zarovs_nbody__DOT__hlast = (0x31fU 
                                              == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos));
    vlSelf->tt_um_zarovs_nbody__DOT__vlast = (0x20cU 
                                              == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos));
    vlSelf->tt_um_zarovs_nbody__DOT__last_p = (0xaU 
                                               == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t));
    vlSelf->tt_um_zarovs_nbody__DOT__last_v = (0xbU 
                                               == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t));
    vlSelf->uo_out = vlSelf->tt_um_zarovs_nbody__DOT__out_r;
    __Vfunc_tt_um_zarovs_nbody__DOT__rr__5__m = (7U 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (3U 
                                                     & (IData)(vlSelf->ui_in))));
    __Vfunc_tt_um_zarovs_nbody__DOT__rr__5__Vfuncout 
        = ((1U == (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__rr__5__m))
            ? 0xcU : ((2U == (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__rr__5__m))
                       ? 0x14U : ((3U == (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__rr__5__m))
                                   ? 0x1eU : 0x2aU)));
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__4__r2 = __Vfunc_tt_um_zarovs_nbody__DOT__rr__5__Vfuncout;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__4__oy = 
        (0x7ffU & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos) 
                    - (IData)(0xf0U)) - ((0x600U & 
                                          ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tt_um_zarovs_nbody__DOT__py
                                                          [0U] 
                                                          >> 0xaU)))) 
                                           << 9U)) 
                                         | (0x1feU 
                                            & (vlSelf->tt_um_zarovs_nbody__DOT__py
                                               [0U] 
                                               >> 2U)))));
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__4__ox = 
        (0x7ffU & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos) 
                    - (IData)(0x140U)) - ((0x600U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & (vlSelf->tt_um_zarovs_nbody__DOT__px
                                                           [0U] 
                                                           >> 0xaU)))) 
                                            << 9U)) 
                                          | (0x1feU 
                                             & (vlSelf->tt_um_zarovs_nbody__DOT__px
                                                [0U] 
                                                >> 2U)))));
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__4__in_win 
        = (((0U == (0xffU & ((IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__4__ox) 
                             >> 3U))) | (0xffU == (0xffU 
                                                   & ((IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__4__ox) 
                                                      >> 3U)))) 
           & ((0U == (0xffU & ((IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__4__oy) 
                               >> 3U))) | (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__4__oy) 
                                             >> 3U)))));
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__4__Vfuncout 
        = ((IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__4__in_win) 
           & ((0xffU & (VL_EXTEND_II(8,7, ([&]() {
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__v 
                                    = (0xfU & (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__4__ox));
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
                            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__Vfuncout))) 
                        + VL_EXTEND_II(8,7, ([&]() {
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__v 
                                    = (0xfU & (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__4__oy));
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__a 
                                    = (0xfU & ((8U 
                                                & (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__v))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__v)))
                                                : (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__v)));
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__Vfuncout 
                                    = (0x7fU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__a) 
                                                * (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__a)));
                            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__Vfuncout))))) 
              <= (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__4__r2)));
    vlSelf->tt_um_zarovs_nbody__DOT__on0 = __Vfunc_tt_um_zarovs_nbody__DOT__disk__4__Vfuncout;
    __Vfunc_tt_um_zarovs_nbody__DOT__rr__9__m = (7U 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (3U 
                                                     & ((IData)(vlSelf->ui_in) 
                                                        >> 2U))));
    __Vfunc_tt_um_zarovs_nbody__DOT__rr__9__Vfuncout 
        = ((1U == (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__rr__9__m))
            ? 0xcU : ((2U == (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__rr__9__m))
                       ? 0x14U : ((3U == (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__rr__9__m))
                                   ? 0x1eU : 0x2aU)));
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__8__r2 = __Vfunc_tt_um_zarovs_nbody__DOT__rr__9__Vfuncout;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__8__oy = 
        (0x7ffU & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos) 
                    - (IData)(0xf0U)) - ((0x600U & 
                                          ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tt_um_zarovs_nbody__DOT__py
                                                          [1U] 
                                                          >> 0xaU)))) 
                                           << 9U)) 
                                         | (0x1feU 
                                            & (vlSelf->tt_um_zarovs_nbody__DOT__py
                                               [1U] 
                                               >> 2U)))));
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__8__ox = 
        (0x7ffU & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos) 
                    - (IData)(0x140U)) - ((0x600U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & (vlSelf->tt_um_zarovs_nbody__DOT__px
                                                           [1U] 
                                                           >> 0xaU)))) 
                                            << 9U)) 
                                          | (0x1feU 
                                             & (vlSelf->tt_um_zarovs_nbody__DOT__px
                                                [1U] 
                                                >> 2U)))));
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__8__in_win 
        = (((0U == (0xffU & ((IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__8__ox) 
                             >> 3U))) | (0xffU == (0xffU 
                                                   & ((IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__8__ox) 
                                                      >> 3U)))) 
           & ((0U == (0xffU & ((IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__8__oy) 
                               >> 3U))) | (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__8__oy) 
                                             >> 3U)))));
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__8__Vfuncout 
        = ((IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__8__in_win) 
           & ((0xffU & (VL_EXTEND_II(8,7, ([&]() {
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__10__v 
                                    = (0xfU & (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__8__ox));
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__10__a 
                                    = (0xfU & ((8U 
                                                & (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__10__v))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__10__v)))
                                                : (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__10__v)));
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__10__Vfuncout 
                                    = (0x7fU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__10__a) 
                                                * (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__10__a)));
                            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__10__Vfuncout))) 
                        + VL_EXTEND_II(8,7, ([&]() {
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__11__v 
                                    = (0xfU & (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__8__oy));
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__11__a 
                                    = (0xfU & ((8U 
                                                & (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__11__v))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__11__v)))
                                                : (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__11__v)));
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__11__Vfuncout 
                                    = (0x7fU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__11__a) 
                                                * (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__11__a)));
                            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__11__Vfuncout))))) 
              <= (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__8__r2)));
    vlSelf->tt_um_zarovs_nbody__DOT__on1 = __Vfunc_tt_um_zarovs_nbody__DOT__disk__8__Vfuncout;
    __Vfunc_tt_um_zarovs_nbody__DOT__rr__13__m = (7U 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (3U 
                                                      & ((IData)(vlSelf->ui_in) 
                                                         >> 4U))));
    __Vfunc_tt_um_zarovs_nbody__DOT__rr__13__Vfuncout 
        = ((1U == (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__rr__13__m))
            ? 0xcU : ((2U == (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__rr__13__m))
                       ? 0x14U : ((3U == (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__rr__13__m))
                                   ? 0x1eU : 0x2aU)));
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__12__r2 = __Vfunc_tt_um_zarovs_nbody__DOT__rr__13__Vfuncout;
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__12__oy = 
        (0x7ffU & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos) 
                    - (IData)(0xf0U)) - ((0x600U & 
                                          ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tt_um_zarovs_nbody__DOT__py
                                                          [2U] 
                                                          >> 0xaU)))) 
                                           << 9U)) 
                                         | (0x1feU 
                                            & (vlSelf->tt_um_zarovs_nbody__DOT__py
                                               [2U] 
                                               >> 2U)))));
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__12__ox = 
        (0x7ffU & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos) 
                    - (IData)(0x140U)) - ((0x600U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & (vlSelf->tt_um_zarovs_nbody__DOT__px
                                                           [2U] 
                                                           >> 0xaU)))) 
                                            << 9U)) 
                                          | (0x1feU 
                                             & (vlSelf->tt_um_zarovs_nbody__DOT__px
                                                [2U] 
                                                >> 2U)))));
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__12__in_win 
        = (((0U == (0xffU & ((IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__12__ox) 
                             >> 3U))) | (0xffU == (0xffU 
                                                   & ((IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__12__ox) 
                                                      >> 3U)))) 
           & ((0U == (0xffU & ((IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__12__oy) 
                               >> 3U))) | (0xffU == 
                                           (0xffU & 
                                            ((IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__12__oy) 
                                             >> 3U)))));
    __Vfunc_tt_um_zarovs_nbody__DOT__disk__12__Vfuncout 
        = ((IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__12__in_win) 
           & ((0xffU & (VL_EXTEND_II(8,7, ([&]() {
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__14__v 
                                    = (0xfU & (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__12__ox));
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__14__a 
                                    = (0xfU & ((8U 
                                                & (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__14__v))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__14__v)))
                                                : (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__14__v)));
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__14__Vfuncout 
                                    = (0x7fU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__14__a) 
                                                * (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__14__a)));
                            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__14__Vfuncout))) 
                        + VL_EXTEND_II(8,7, ([&]() {
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__15__v 
                                    = (0xfU & (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__12__oy));
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__15__a 
                                    = (0xfU & ((8U 
                                                & (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__15__v))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__15__v)))
                                                : (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__15__v)));
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__15__Vfuncout 
                                    = (0x7fU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__15__a) 
                                                * (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__15__a)));
                            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__15__Vfuncout))))) 
              <= (IData)(__Vfunc_tt_um_zarovs_nbody__DOT__disk__12__r2)));
    vlSelf->tt_um_zarovs_nbody__DOT__on2 = __Vfunc_tt_um_zarovs_nbody__DOT__disk__12__Vfuncout;
    if ((2U >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb))) {
        vlSelf->tt_um_zarovs_nbody__DOT__vxb = vlSelf->tt_um_zarovs_nbody__DOT__vx
            [vlSelf->tt_um_zarovs_nbody__DOT__pb];
        vlSelf->tt_um_zarovs_nbody__DOT__vyb = vlSelf->tt_um_zarovs_nbody__DOT__vy
            [vlSelf->tt_um_zarovs_nbody__DOT__pb];
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__vxb = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__vyb = 0U;
    }
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
    tt_um_zarovs_nbody__DOT__xbig = ((IData)(tt_um_zarovs_nbody__DOT__ax) 
                                     >= (IData)(tt_um_zarovs_nbody__DOT__ay));
    tt_um_zarovs_nbody__DOT__lo = ((IData)(tt_um_zarovs_nbody__DOT__xbig)
                                    ? (IData)(tt_um_zarovs_nbody__DOT__ay)
                                    : (IData)(tt_um_zarovs_nbody__DOT__ax));
    tt_um_zarovs_nbody__DOT__oct = (0xffU & (((IData)(tt_um_zarovs_nbody__DOT__xbig)
                                               ? (IData)(tt_um_zarovs_nbody__DOT__ax)
                                               : (IData)(tt_um_zarovs_nbody__DOT__ay)) 
                                             + ((0x1fU 
                                                 & ((IData)(tt_um_zarovs_nbody__DOT__lo) 
                                                    >> 2U)) 
                                                + (0xfU 
                                                   & ((IData)(tt_um_zarovs_nbody__DOT__lo) 
                                                      >> 3U)))));
    if ((0x80U == (0x80U & (IData)(tt_um_zarovs_nbody__DOT__oct)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((IData)(tt_um_zarovs_nbody__DOT__oct) 
                                                    >> 5U));
        tt_um_zarovs_nbody__DOT__e = 7U;
    } else if ((0x40U == (0xc0U & (IData)(tt_um_zarovs_nbody__DOT__oct)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((IData)(tt_um_zarovs_nbody__DOT__oct) 
                                                    >> 4U));
        tt_um_zarovs_nbody__DOT__e = 6U;
    } else if ((0x20U == (0xe0U & (IData)(tt_um_zarovs_nbody__DOT__oct)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((IData)(tt_um_zarovs_nbody__DOT__oct) 
                                                    >> 3U));
        tt_um_zarovs_nbody__DOT__e = 5U;
    } else if ((0x10U == (0xf0U & (IData)(tt_um_zarovs_nbody__DOT__oct)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((IData)(tt_um_zarovs_nbody__DOT__oct) 
                                                    >> 2U));
        tt_um_zarovs_nbody__DOT__e = 4U;
    } else if ((8U == (0xf8U & (IData)(tt_um_zarovs_nbody__DOT__oct)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((IData)(tt_um_zarovs_nbody__DOT__oct) 
                                                    >> 1U));
        tt_um_zarovs_nbody__DOT__e = 3U;
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((4U 
                                                     == 
                                                     (0xfcU 
                                                      & (IData)(tt_um_zarovs_nbody__DOT__oct)))
                                                     ? (IData)(tt_um_zarovs_nbody__DOT__oct)
                                                     : 0U));
        tt_um_zarovs_nbody__DOT__e = 2U;
    }
    tt_um_zarovs_nbody__DOT__kon = ((4U >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__k)) 
                                    && (1U & ((0x3fU 
                                               & ((7U 
                                                   & ((0U 
                                                       == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->ui_in)))
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj))
                                                        ? 
                                                       ((IData)(1U) 
                                                        + 
                                                        (3U 
                                                         & ((IData)(vlSelf->ui_in) 
                                                            >> 2U)))
                                                        : 
                                                       ((IData)(1U) 
                                                        + 
                                                        (3U 
                                                         & ((IData)(vlSelf->ui_in) 
                                                            >> 4U)))))) 
                                                  * 
                                                  ((0U 
                                                    == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mant))
                                                    ? 6U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mant))
                                                     ? 3U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mant))
                                                      ? 2U
                                                      : 1U))))) 
                                              >> (IData)(vlSelf->tt_um_zarovs_nbody__DOT__k))));
    vlSelf->tt_um_zarovs_nbody__DOT__sh = (0x3fU & 
                                           (((((IData)(tt_um_zarovs_nbody__DOT__e) 
                                               << 1U) 
                                              + (IData)(tt_um_zarovs_nbody__DOT__e)) 
                                             - (IData)(0xaU)) 
                                            - (IData)(vlSelf->tt_um_zarovs_nbody__DOT__k)));
    vlSelf->tt_um_zarovs_nbody__DOT__q = (0x3fU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__t) 
                                                   + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sh)));
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
        vlSelf->tt_um_zarovs_nbody__DOT__b_x = ((IData)(tt_um_zarovs_nbody__DOT__kon) 
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
        vlSelf->tt_um_zarovs_nbody__DOT__b_y = ((IData)(tt_um_zarovs_nbody__DOT__kon) 
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
        tt_um_zarovs_nbody__DOT__c0x = (((IData)(tt_um_zarovs_nbody__DOT__kon) 
                                         & VL_LTS_III(32, 0U, 
                                                      VL_EXTENDS_II(32,6, (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sh)))) 
                                        & ([&]() {
                    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__idx 
                        = (0x3fU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sh) 
                                    - (IData)(1U)));
                    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__d 
                        = vlSelf->tt_um_zarovs_nbody__DOT__dxr;
                    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__Vfuncout 
                        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,6, (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__idx))) 
                           & (VL_LTS_III(32, 7U, VL_EXTENDS_II(32,6, (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__idx)))
                               ? ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__d) 
                                  >> 7U) : ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__d) 
                                            >> (7U 
                                                & (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__idx)))));
                }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__Vfuncout)));
        tt_um_zarovs_nbody__DOT__c0y = (((IData)(tt_um_zarovs_nbody__DOT__kon) 
                                         & VL_LTS_III(32, 0U, 
                                                      VL_EXTENDS_II(32,6, (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sh)))) 
                                        & ([&]() {
                    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__idx 
                        = (0x3fU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sh) 
                                    - (IData)(1U)));
                    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__d 
                        = vlSelf->tt_um_zarovs_nbody__DOT__dyr;
                    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__Vfuncout 
                        = (VL_LTES_III(32, 0U, VL_EXTENDS_II(32,6, (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__idx))) 
                           & (VL_LTS_III(32, 7U, VL_EXTENDS_II(32,6, (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__idx)))
                               ? ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__d) 
                                  >> 7U) : ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__d) 
                                            >> (7U 
                                                & (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__idx)))));
                }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__Vfuncout)));
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
        if ((0xbU < (0x1fU & ((IData)(7U) + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t))))) {
            vlSelf->tt_um_zarovs_nbody__DOT__b_x = 
                (1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vxb) 
                       >> 0xbU));
            vlSelf->tt_um_zarovs_nbody__DOT__b_y = 
                (1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vyb) 
                       >> 0xbU));
        } else {
            vlSelf->tt_um_zarovs_nbody__DOT__b_x = 
                (1U & ((0xbU >= (0xfU & ((IData)(7U) 
                                         + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)))) 
                       && (1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vxb) 
                                 >> (0xfU & ((IData)(7U) 
                                             + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)))))));
            vlSelf->tt_um_zarovs_nbody__DOT__b_y = 
                (1U & ((0xbU >= (0xfU & ((IData)(7U) 
                                         + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)))) 
                       && (1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vyb) 
                                 >> (0xfU & ((IData)(7U) 
                                             + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)))))));
        }
        tt_um_zarovs_nbody__DOT__c0x = (1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vxb) 
                                              >> 6U));
        tt_um_zarovs_nbody__DOT__c0y = (1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vyb) 
                                              >> 6U));
    }
    if ((0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t))) {
        vlSelf->tt_um_zarovs_nbody__DOT__cin_x = tt_um_zarovs_nbody__DOT__c0x;
        vlSelf->tt_um_zarovs_nbody__DOT__cin_y = tt_um_zarovs_nbody__DOT__c0y;
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__cin_x = vlSelf->tt_um_zarovs_nbody__DOT__cx;
        vlSelf->tt_um_zarovs_nbody__DOT__cin_y = vlSelf->tt_um_zarovs_nbody__DOT__cy;
    }
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
    vlSelf->tt_um_zarovs_nbody__DOT__hpos = VL_RAND_RESET_I(10);
    vlSelf->tt_um_zarovs_nbody__DOT__vpos = VL_RAND_RESET_I(10);
    vlSelf->tt_um_zarovs_nbody__DOT__hlast = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__vlast = VL_RAND_RESET_I(1);
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
    vlSelf->tt_um_zarovs_nbody__DOT__mant = VL_RAND_RESET_I(2);
    vlSelf->tt_um_zarovs_nbody__DOT__sh = VL_RAND_RESET_I(6);
    vlSelf->tt_um_zarovs_nbody__DOT__q = VL_RAND_RESET_I(6);
    vlSelf->tt_um_zarovs_nbody__DOT__vxb = VL_RAND_RESET_I(12);
    vlSelf->tt_um_zarovs_nbody__DOT__vyb = VL_RAND_RESET_I(12);
    vlSelf->tt_um_zarovs_nbody__DOT__a_x = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__b_x = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__a_y = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__b_y = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__cin_x = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__cin_y = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__sx = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__sy = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__last_p = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__last_v = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__on0 = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__on1 = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__on2 = VL_RAND_RESET_I(1);
    vlSelf->tt_um_zarovs_nbody__DOT__out_r = VL_RAND_RESET_I(8);
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
