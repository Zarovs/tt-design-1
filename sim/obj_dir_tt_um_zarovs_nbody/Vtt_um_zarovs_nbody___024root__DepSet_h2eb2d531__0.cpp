// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtt_um_zarovs_nbody.h for the primary calling header

#include "Vtt_um_zarovs_nbody__pch.h"
#include "Vtt_um_zarovs_nbody___024root.h"

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___ico_sequent__TOP__0(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___ico_sequent__TOP__0\n"); );
    // Init
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
    // Body
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

void Vtt_um_zarovs_nbody___024root___eval_ico(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtt_um_zarovs_nbody___024root___eval_triggers__ico(Vtt_um_zarovs_nbody___024root* vlSelf);

bool Vtt_um_zarovs_nbody___024root___eval_phase__ico(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtt_um_zarovs_nbody___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtt_um_zarovs_nbody___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtt_um_zarovs_nbody___024root___eval_act(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*7:0*/, 1024> Vtt_um_zarovs_nbody__ConstPool__TABLE_hd132212b_0;
extern const VlUnpacked<CData/*1:0*/, 8> Vtt_um_zarovs_nbody__ConstPool__TABLE_h2bc3323b_0;
extern const VlUnpacked<CData/*1:0*/, 8> Vtt_um_zarovs_nbody__ConstPool__TABLE_h36fd642b_0;

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__0(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__0\n"); );
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
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*9:0*/ __Vdly__tt_um_zarovs_nbody__DOT__hpos;
    __Vdly__tt_um_zarovs_nbody__DOT__hpos = 0;
    SData/*9:0*/ __Vdly__tt_um_zarovs_nbody__DOT__vpos;
    __Vdly__tt_um_zarovs_nbody__DOT__vpos = 0;
    SData/*10:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v0;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v0;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v0 = 0;
    SData/*10:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v0;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v0 = 0;
    SData/*10:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v1;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v1;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v1 = 0;
    SData/*10:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v1;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v1 = 0;
    SData/*10:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v2;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v2;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v2 = 0;
    SData/*10:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v2;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v2 = 0;
    CData/*3:0*/ __Vdly__tt_um_zarovs_nbody__DOT__t;
    __Vdly__tt_um_zarovs_nbody__DOT__t = 0;
    CData/*1:0*/ __Vdly__tt_um_zarovs_nbody__DOT__state;
    __Vdly__tt_um_zarovs_nbody__DOT__state = 0;
    CData/*2:0*/ __Vdly__tt_um_zarovs_nbody__DOT__pair;
    __Vdly__tt_um_zarovs_nbody__DOT__pair = 0;
    SData/*11:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__vx__v0;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__vx__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tt_um_zarovs_nbody__DOT__vx__v0;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__vx__v0 = 0;
    SData/*11:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__vy__v0;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__vy__v0 = 0;
    SData/*11:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__vx__v1;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__vx__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tt_um_zarovs_nbody__DOT__vx__v1;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__vx__v1 = 0;
    SData/*11:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__vy__v1;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__vy__v1 = 0;
    SData/*11:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__vx__v2;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__vx__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tt_um_zarovs_nbody__DOT__vx__v2;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__vx__v2 = 0;
    SData/*11:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__vy__v2;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__vy__v2 = 0;
    SData/*10:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v3;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v3;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v3 = 0;
    SData/*10:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v3;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v3 = 0;
    SData/*10:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v4;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v4;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v4 = 0;
    SData/*10:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v4;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v4 = 0;
    SData/*10:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v5;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v5;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v5 = 0;
    SData/*10:0*/ __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v5;
    __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v6;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v6 = 0;
    // Body
    __Vdly__tt_um_zarovs_nbody__DOT__hpos = vlSelf->tt_um_zarovs_nbody__DOT__hpos;
    __Vdly__tt_um_zarovs_nbody__DOT__vpos = vlSelf->tt_um_zarovs_nbody__DOT__vpos;
    __Vdly__tt_um_zarovs_nbody__DOT__state = vlSelf->tt_um_zarovs_nbody__DOT__state;
    __Vdly__tt_um_zarovs_nbody__DOT__t = vlSelf->tt_um_zarovs_nbody__DOT__t;
    __Vdly__tt_um_zarovs_nbody__DOT__pair = vlSelf->tt_um_zarovs_nbody__DOT__pair;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__vx__v0 = 0U;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__vx__v1 = 0U;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__vx__v2 = 0U;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v0 = 0U;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v1 = 0U;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v2 = 0U;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v3 = 0U;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v4 = 0U;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v5 = 0U;
    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v6 = 0U;
    if (vlSelf->rst_n) {
        __Vdly__tt_um_zarovs_nbody__DOT__hpos = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hlast)
                                                  ? 0U
                                                  : 
                                                 (0x3ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos))));
        if ((0x31fU == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos))) {
            __Vdly__tt_um_zarovs_nbody__DOT__vpos = 
                ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vlast)
                  ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos))));
        }
        if ((2U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))) {
            if ((1U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))) {
                if ((0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb))) {
                    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h99d9bc9b__1 
                        = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sx) 
                            << 0xaU) | (0x3ffU & (vlSelf->tt_um_zarovs_nbody__DOT__px
                                                  [0U] 
                                                  >> 1U)));
                    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h3c9df23b__1 
                        = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sy) 
                            << 0xaU) | (0x3ffU & (vlSelf->tt_um_zarovs_nbody__DOT__py
                                                  [0U] 
                                                  >> 1U)));
                    __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v0 
                        = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h99d9bc9b__1;
                    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v0 = 1U;
                    __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v0 
                        = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h3c9df23b__1;
                }
                if ((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb))) {
                    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h99d9bc9b__1 
                        = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sx) 
                            << 0xaU) | (0x3ffU & (vlSelf->tt_um_zarovs_nbody__DOT__px
                                                  [1U] 
                                                  >> 1U)));
                    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h3c9df23b__1 
                        = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sy) 
                            << 0xaU) | (0x3ffU & (vlSelf->tt_um_zarovs_nbody__DOT__py
                                                  [1U] 
                                                  >> 1U)));
                    __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v1 
                        = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h99d9bc9b__1;
                    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v1 = 1U;
                    __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v1 
                        = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h3c9df23b__1;
                }
                if ((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb))) {
                    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h99d9bc9b__1 
                        = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sx) 
                            << 0xaU) | (0x3ffU & (vlSelf->tt_um_zarovs_nbody__DOT__px
                                                  [2U] 
                                                  >> 1U)));
                    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h3c9df23b__1 
                        = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sy) 
                            << 0xaU) | (0x3ffU & (vlSelf->tt_um_zarovs_nbody__DOT__py
                                                  [2U] 
                                                  >> 1U)));
                    __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v2 
                        = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h99d9bc9b__1;
                    __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v2 = 1U;
                    __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v2 
                        = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h3c9df23b__1;
                }
                if (vlSelf->tt_um_zarovs_nbody__DOT__last_p) {
                    __Vdly__tt_um_zarovs_nbody__DOT__t = 0U;
                    if ((2U != (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb))) {
                        vlSelf->tt_um_zarovs_nbody__DOT__pb 
                            = (3U & ((IData)(1U) + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb)));
                    } else if ((0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__steps_left))) {
                        __Vdly__tt_um_zarovs_nbody__DOT__state = 0U;
                    } else {
                        vlSelf->tt_um_zarovs_nbody__DOT__steps_left 
                            = (0x7fU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__steps_left) 
                                        - (IData)(1U)));
                        __Vdly__tt_um_zarovs_nbody__DOT__state = 1U;
                        __Vdly__tt_um_zarovs_nbody__DOT__pair = 0U;
                    }
                } else {
                    __Vdly__tt_um_zarovs_nbody__DOT__t 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)));
                }
            } else {
                if ((0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi))) {
                    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_hc1565f32__0 
                        = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sx) 
                            << 0xbU) | (0x7ffU & (vlSelf->tt_um_zarovs_nbody__DOT__vx
                                                  [0U] 
                                                  >> 1U)));
                    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h6c7d9e9f__0 
                        = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sy) 
                            << 0xbU) | (0x7ffU & (vlSelf->tt_um_zarovs_nbody__DOT__vy
                                                  [0U] 
                                                  >> 1U)));
                    __Vdlyvval__tt_um_zarovs_nbody__DOT__vx__v0 
                        = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_hc1565f32__0;
                    __Vdlyvset__tt_um_zarovs_nbody__DOT__vx__v0 = 1U;
                    __Vdlyvval__tt_um_zarovs_nbody__DOT__vy__v0 
                        = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h6c7d9e9f__0;
                }
                if (vlSelf->tt_um_zarovs_nbody__DOT__last_v) {
                    __Vdly__tt_um_zarovs_nbody__DOT__t = 0U;
                    if ((4U != (IData)(vlSelf->tt_um_zarovs_nbody__DOT__k))) {
                        vlSelf->tt_um_zarovs_nbody__DOT__k 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__k)));
                    } else if ((5U != (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pair))) {
                        __Vdly__tt_um_zarovs_nbody__DOT__pair 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pair)));
                        __Vdly__tt_um_zarovs_nbody__DOT__state = 1U;
                    } else {
                        vlSelf->tt_um_zarovs_nbody__DOT__pb = 0U;
                        __Vdly__tt_um_zarovs_nbody__DOT__state = 3U;
                    }
                } else {
                    __Vdly__tt_um_zarovs_nbody__DOT__t 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)));
                }
                if ((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi))) {
                    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_hc1565f32__0 
                        = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sx) 
                            << 0xbU) | (0x7ffU & (vlSelf->tt_um_zarovs_nbody__DOT__vx
                                                  [1U] 
                                                  >> 1U)));
                    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h6c7d9e9f__0 
                        = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sy) 
                            << 0xbU) | (0x7ffU & (vlSelf->tt_um_zarovs_nbody__DOT__vy
                                                  [1U] 
                                                  >> 1U)));
                    __Vdlyvval__tt_um_zarovs_nbody__DOT__vx__v1 
                        = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_hc1565f32__0;
                    __Vdlyvset__tt_um_zarovs_nbody__DOT__vx__v1 = 1U;
                    __Vdlyvval__tt_um_zarovs_nbody__DOT__vy__v1 
                        = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h6c7d9e9f__0;
                }
                if ((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi))) {
                    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_hc1565f32__0 
                        = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sx) 
                            << 0xbU) | (0x7ffU & (vlSelf->tt_um_zarovs_nbody__DOT__vx
                                                  [2U] 
                                                  >> 1U)));
                    vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h6c7d9e9f__0 
                        = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sy) 
                            << 0xbU) | (0x7ffU & (vlSelf->tt_um_zarovs_nbody__DOT__vy
                                                  [2U] 
                                                  >> 1U)));
                    __Vdlyvval__tt_um_zarovs_nbody__DOT__vx__v2 
                        = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_hc1565f32__0;
                    __Vdlyvset__tt_um_zarovs_nbody__DOT__vx__v2 = 1U;
                    __Vdlyvval__tt_um_zarovs_nbody__DOT__vy__v2 
                        = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h6c7d9e9f__0;
                }
            }
        } else if ((1U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))) {
            if ((3U <= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t))) {
                vlSelf->tt_um_zarovs_nbody__DOT__dxr 
                    = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sx) 
                        << 7U) | (0x7fU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__dxr) 
                                           >> 1U)));
                vlSelf->tt_um_zarovs_nbody__DOT__dyr 
                    = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sy) 
                        << 7U) | (0x7fU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__dyr) 
                                           >> 1U)));
            }
            if (((0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi)) 
                 | (0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj)))) {
                vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h99d9bc9b__0 
                    = ((0x400U & (vlSelf->tt_um_zarovs_nbody__DOT__px
                                  [0U] << 0xaU)) | 
                       (0x3ffU & (vlSelf->tt_um_zarovs_nbody__DOT__px
                                  [0U] >> 1U)));
                vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h3c9df23b__0 
                    = ((0x400U & (vlSelf->tt_um_zarovs_nbody__DOT__py
                                  [0U] << 0xaU)) | 
                       (0x3ffU & (vlSelf->tt_um_zarovs_nbody__DOT__py
                                  [0U] >> 1U)));
                __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v3 
                    = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h99d9bc9b__0;
                __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v3 = 1U;
                __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v3 
                    = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h3c9df23b__0;
            }
            if (vlSelf->tt_um_zarovs_nbody__DOT__last_p) {
                __Vdly__tt_um_zarovs_nbody__DOT__state = 2U;
                __Vdly__tt_um_zarovs_nbody__DOT__t = 0U;
                vlSelf->tt_um_zarovs_nbody__DOT__k = 0U;
            } else {
                __Vdly__tt_um_zarovs_nbody__DOT__t 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)));
            }
            if (((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi)) 
                 | (1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj)))) {
                vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h99d9bc9b__0 
                    = ((0x400U & (vlSelf->tt_um_zarovs_nbody__DOT__px
                                  [1U] << 0xaU)) | 
                       (0x3ffU & (vlSelf->tt_um_zarovs_nbody__DOT__px
                                  [1U] >> 1U)));
                vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h3c9df23b__0 
                    = ((0x400U & (vlSelf->tt_um_zarovs_nbody__DOT__py
                                  [1U] << 0xaU)) | 
                       (0x3ffU & (vlSelf->tt_um_zarovs_nbody__DOT__py
                                  [1U] >> 1U)));
                __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v4 
                    = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h99d9bc9b__0;
                __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v4 = 1U;
                __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v4 
                    = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h3c9df23b__0;
            }
            if (((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi)) 
                 | (2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj)))) {
                vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h99d9bc9b__0 
                    = ((0x400U & (vlSelf->tt_um_zarovs_nbody__DOT__px
                                  [2U] << 0xaU)) | 
                       (0x3ffU & (vlSelf->tt_um_zarovs_nbody__DOT__px
                                  [2U] >> 1U)));
                vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h3c9df23b__0 
                    = ((0x400U & (vlSelf->tt_um_zarovs_nbody__DOT__py
                                  [2U] << 0xaU)) | 
                       (0x3ffU & (vlSelf->tt_um_zarovs_nbody__DOT__py
                                  [2U] >> 1U)));
                __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v5 
                    = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h99d9bc9b__0;
                __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v5 = 1U;
                __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v5 
                    = vlSelf->tt_um_zarovs_nbody__DOT____Vlvbound_h3c9df23b__0;
            }
        } else if (((~ ((IData)(vlSelf->ui_in) >> 6U)) 
                    & ((0x1e0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos)) 
                       & (0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos))))) {
            vlSelf->tt_um_zarovs_nbody__DOT__steps_left 
                = (0x7fU & (((IData)(1U) << ((7U == 
                                              (7U & 
                                               (3U 
                                                ^ (IData)(vlSelf->uio_in))))
                                              ? 6U : 
                                             (7U & 
                                              (3U ^ (IData)(vlSelf->uio_in))))) 
                            - (IData)(1U)));
            __Vdly__tt_um_zarovs_nbody__DOT__state = 1U;
            __Vdly__tt_um_zarovs_nbody__DOT__t = 0U;
            __Vdly__tt_um_zarovs_nbody__DOT__pair = 0U;
        }
    } else {
        __Vdly__tt_um_zarovs_nbody__DOT__hpos = 0U;
        __Vdly__tt_um_zarovs_nbody__DOT__vpos = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__pb = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__steps_left = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__dxr = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__dyr = 0U;
        __Vdly__tt_um_zarovs_nbody__DOT__state = 0U;
        __Vdly__tt_um_zarovs_nbody__DOT__t = 0U;
        __Vdly__tt_um_zarovs_nbody__DOT__pair = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__k = 0U;
        __Vdlyvset__tt_um_zarovs_nbody__DOT__px__v6 = 1U;
    }
    vlSelf->tt_um_zarovs_nbody__DOT__cx = ((IData)(vlSelf->rst_n) 
                                           && (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__a_x) 
                                                & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_x) 
                                                   | (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_x))) 
                                               | ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_x) 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_x))));
    vlSelf->tt_um_zarovs_nbody__DOT__cy = ((IData)(vlSelf->rst_n) 
                                           && (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__a_y) 
                                                & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_y) 
                                                   | (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_y))) 
                                               | ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_y) 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_y))));
    __Vtableidx2 = ((0x200U & ((~ ((0x1eaU <= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos)) 
                                   & (0x1ecU > (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos)))) 
                               << 9U)) | ((((IData)(vlSelf->tt_um_zarovs_nbody__DOT__on0)
                                             ? 0x3cU
                                             : ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__on1)
                                                 ? 0xfU
                                                 : 
                                                ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__on2)
                                                  ? 0x37U
                                                  : 
                                                 (((0x40U 
                                                    == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)) 
                                                   | (0x23fU 
                                                      == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)))
                                                   ? 1U
                                                   : 0U)))) 
                                           << 3U) | 
                                          ((4U & ((~ 
                                                   ((0x290U 
                                                     <= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)) 
                                                    & (0x2f0U 
                                                       > (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)))) 
                                                  << 2U)) 
                                           | ((((0x280U 
                                                 > (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)) 
                                                & (0x1e0U 
                                                   > (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos))) 
                                               << 1U) 
                                              | (IData)(vlSelf->rst_n)))));
    vlSelf->tt_um_zarovs_nbody__DOT__out_r = Vtt_um_zarovs_nbody__ConstPool__TABLE_hd132212b_0
        [__Vtableidx2];
    vlSelf->tt_um_zarovs_nbody__DOT__state = __Vdly__tt_um_zarovs_nbody__DOT__state;
    vlSelf->tt_um_zarovs_nbody__DOT__t = __Vdly__tt_um_zarovs_nbody__DOT__t;
    vlSelf->tt_um_zarovs_nbody__DOT__pair = __Vdly__tt_um_zarovs_nbody__DOT__pair;
    if (__Vdlyvset__tt_um_zarovs_nbody__DOT__vx__v0) {
        vlSelf->tt_um_zarovs_nbody__DOT__vy[0U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__vy__v0;
        vlSelf->tt_um_zarovs_nbody__DOT__vx[0U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__vx__v0;
    }
    if (__Vdlyvset__tt_um_zarovs_nbody__DOT__vx__v1) {
        vlSelf->tt_um_zarovs_nbody__DOT__vy[1U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__vy__v1;
        vlSelf->tt_um_zarovs_nbody__DOT__vx[1U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__vx__v1;
    }
    if (__Vdlyvset__tt_um_zarovs_nbody__DOT__vx__v2) {
        vlSelf->tt_um_zarovs_nbody__DOT__vy[2U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__vy__v2;
        vlSelf->tt_um_zarovs_nbody__DOT__vx[2U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__vx__v2;
    }
    if (__Vdlyvset__tt_um_zarovs_nbody__DOT__px__v0) {
        vlSelf->tt_um_zarovs_nbody__DOT__py[0U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v0;
        vlSelf->tt_um_zarovs_nbody__DOT__px[0U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v0;
    }
    if (__Vdlyvset__tt_um_zarovs_nbody__DOT__px__v1) {
        vlSelf->tt_um_zarovs_nbody__DOT__py[1U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v1;
        vlSelf->tt_um_zarovs_nbody__DOT__px[1U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v1;
    }
    if (__Vdlyvset__tt_um_zarovs_nbody__DOT__px__v2) {
        vlSelf->tt_um_zarovs_nbody__DOT__py[2U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v2;
        vlSelf->tt_um_zarovs_nbody__DOT__px[2U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v2;
    }
    if (__Vdlyvset__tt_um_zarovs_nbody__DOT__px__v3) {
        vlSelf->tt_um_zarovs_nbody__DOT__py[0U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v3;
        vlSelf->tt_um_zarovs_nbody__DOT__px[0U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v3;
    }
    if (__Vdlyvset__tt_um_zarovs_nbody__DOT__px__v4) {
        vlSelf->tt_um_zarovs_nbody__DOT__py[1U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v4;
        vlSelf->tt_um_zarovs_nbody__DOT__px[1U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v4;
    }
    if (__Vdlyvset__tt_um_zarovs_nbody__DOT__px__v5) {
        vlSelf->tt_um_zarovs_nbody__DOT__py[2U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__py__v5;
        vlSelf->tt_um_zarovs_nbody__DOT__px[2U] = __Vdlyvval__tt_um_zarovs_nbody__DOT__px__v5;
    }
    if (__Vdlyvset__tt_um_zarovs_nbody__DOT__px__v6) {
        vlSelf->tt_um_zarovs_nbody__DOT__vy[0U] = 0xedeU;
        vlSelf->tt_um_zarovs_nbody__DOT__vy[1U] = 0x122U;
        vlSelf->tt_um_zarovs_nbody__DOT__vy[2U] = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__vx[0U] = 0xf2eU;
        vlSelf->tt_um_zarovs_nbody__DOT__vx[1U] = 0xf2eU;
        vlSelf->tt_um_zarovs_nbody__DOT__vx[2U] = 0x1a4U;
        vlSelf->tt_um_zarovs_nbody__DOT__py[0U] = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__py[1U] = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__py[2U] = 0x508U;
        vlSelf->tt_um_zarovs_nbody__DOT__px[0U] = 0x738U;
        vlSelf->tt_um_zarovs_nbody__DOT__px[1U] = 0xc8U;
        vlSelf->tt_um_zarovs_nbody__DOT__px[2U] = 0U;
    }
    vlSelf->tt_um_zarovs_nbody__DOT__vpos = __Vdly__tt_um_zarovs_nbody__DOT__vpos;
    vlSelf->tt_um_zarovs_nbody__DOT__hpos = __Vdly__tt_um_zarovs_nbody__DOT__hpos;
    vlSelf->tt_um_zarovs_nbody__DOT__last_p = (0xaU 
                                               == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t));
    vlSelf->tt_um_zarovs_nbody__DOT__last_v = (0xbU 
                                               == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t));
    __Vtableidx1 = vlSelf->tt_um_zarovs_nbody__DOT__pair;
    vlSelf->tt_um_zarovs_nbody__DOT__bi = Vtt_um_zarovs_nbody__ConstPool__TABLE_h2bc3323b_0
        [__Vtableidx1];
    vlSelf->tt_um_zarovs_nbody__DOT__bj = Vtt_um_zarovs_nbody__ConstPool__TABLE_h36fd642b_0
        [__Vtableidx1];
    if ((2U >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb))) {
        vlSelf->tt_um_zarovs_nbody__DOT__vyb = vlSelf->tt_um_zarovs_nbody__DOT__vy
            [vlSelf->tt_um_zarovs_nbody__DOT__pb];
        vlSelf->tt_um_zarovs_nbody__DOT__vxb = vlSelf->tt_um_zarovs_nbody__DOT__vx
            [vlSelf->tt_um_zarovs_nbody__DOT__pb];
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__vyb = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__vxb = 0U;
    }
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
    vlSelf->uo_out = vlSelf->tt_um_zarovs_nbody__DOT__out_r;
    vlSelf->tt_um_zarovs_nbody__DOT__vlast = (0x20cU 
                                              == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos));
    vlSelf->tt_um_zarovs_nbody__DOT__hlast = (0x31fU 
                                              == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos));
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

void Vtt_um_zarovs_nbody___024root___eval_nba(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtt_um_zarovs_nbody___024root___eval_triggers__act(Vtt_um_zarovs_nbody___024root* vlSelf);

bool Vtt_um_zarovs_nbody___024root___eval_phase__act(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtt_um_zarovs_nbody___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtt_um_zarovs_nbody___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtt_um_zarovs_nbody___024root___eval_phase__nba(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtt_um_zarovs_nbody___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___dump_triggers__ico(Vtt_um_zarovs_nbody___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___dump_triggers__nba(Vtt_um_zarovs_nbody___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___dump_triggers__act(Vtt_um_zarovs_nbody___024root* vlSelf);
#endif  // VL_DEBUG

void Vtt_um_zarovs_nbody___024root___eval(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtt_um_zarovs_nbody___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/claude/tt-design-1/src/project.v", 28, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtt_um_zarovs_nbody___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtt_um_zarovs_nbody___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/claude/tt-design-1/src/project.v", 28, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtt_um_zarovs_nbody___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/claude/tt-design-1/src/project.v", 28, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtt_um_zarovs_nbody___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtt_um_zarovs_nbody___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtt_um_zarovs_nbody___024root___eval_debug_assertions(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ena & 0xfeU))) {
        Verilated::overWidthError("ena");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
