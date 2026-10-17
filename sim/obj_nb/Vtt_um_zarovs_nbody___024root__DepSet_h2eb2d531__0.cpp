// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtt_um_zarovs_nbody.h for the primary calling header

#include "Vtt_um_zarovs_nbody__pch.h"
#include "Vtt_um_zarovs_nbody___024root.h"

extern const VlUnpacked<CData/*1:0*/, 8> Vtt_um_zarovs_nbody__ConstPool__TABLE_h2bc3323b_0;
extern const VlUnpacked<CData/*1:0*/, 8> Vtt_um_zarovs_nbody__ConstPool__TABLE_h36fd642b_0;

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___ico_sequent__TOP__0(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0;
    tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0 = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h7d63c64c__0;
    tt_um_zarovs_nbody__DOT____VdfgTmp_h7d63c64c__0 = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h7d34167f__0;
    tt_um_zarovs_nbody__DOT____VdfgTmp_h7d34167f__0 = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h7d3827b6__0;
    tt_um_zarovs_nbody__DOT____VdfgTmp_h7d3827b6__0 = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h43f790a7__0;
    tt_um_zarovs_nbody__DOT____VdfgTmp_h43f790a7__0 = 0;
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->tt_um_zarovs_nbody__DOT__ui_in = vlSelf->ui_in;
    vlSelf->tt_um_zarovs_nbody__DOT__uio_in = vlSelf->uio_in;
    vlSelf->tt_um_zarovs_nbody__DOT__ena = vlSelf->ena;
    vlSelf->tt_um_zarovs_nbody__DOT__rst_n = vlSelf->rst_n;
    vlSelf->tt_um_zarovs_nbody__DOT__hlast = (0x31fU 
                                              == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos));
    vlSelf->tt_um_zarovs_nbody__DOT__vlast = (0x20cU 
                                              == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos));
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
    vlSelf->uio_out = vlSelf->tt_um_zarovs_nbody__DOT__uio_out;
    vlSelf->uio_oe = vlSelf->tt_um_zarovs_nbody__DOT__uio_oe;
    vlSelf->tt_um_zarovs_nbody__DOT__visible = ((0x280U 
                                                 > (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)) 
                                                & (0x1e0U 
                                                   > (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos)));
    vlSelf->uo_out = vlSelf->tt_um_zarovs_nbody__DOT__out_r;
    vlSelf->tt_um_zarovs_nbody__DOT__spd = (7U & (3U 
                                                  ^ (IData)(vlSelf->uio_in)));
    vlSelf->tt_um_zarovs_nbody__DOT__pause = (1U & 
                                              ((IData)(vlSelf->ui_in) 
                                               >> 6U));
    vlSelf->tt_um_zarovs_nbody__DOT__border = ((0x40U 
                                                == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)) 
                                               | (0x23fU 
                                                  == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)));
    vlSelf->tt_um_zarovs_nbody__DOT__clk = vlSelf->clk;
    vlSelf->tt_um_zarovs_nbody__DOT__first = (0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t));
    tt_um_zarovs_nbody__DOT____VdfgTmp_h7d63c64c__0 
        = ((3U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
           & (0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb)));
    tt_um_zarovs_nbody__DOT____VdfgTmp_h7d34167f__0 
        = ((3U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
           & (1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb)));
    tt_um_zarovs_nbody__DOT____VdfgTmp_h7d3827b6__0 
        = ((3U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
           & (2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb)));
    vlSelf->tt_um_zarovs_nbody__DOT__px[0U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rx;
    vlSelf->tt_um_zarovs_nbody__DOT__px[1U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rx;
    vlSelf->tt_um_zarovs_nbody__DOT__px[2U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rx;
    vlSelf->tt_um_zarovs_nbody__DOT__py[0U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__ry;
    vlSelf->tt_um_zarovs_nbody__DOT__py[1U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__ry;
    vlSelf->tt_um_zarovs_nbody__DOT__py[2U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__ry;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init 
        = (4U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state));
    vlSelf->tt_um_zarovs_nbody__DOT__last_v = (0xbU 
                                               == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t));
    vlSelf->tt_um_zarovs_nbody__DOT__mass0 = (7U & 
                                              ((IData)(1U) 
                                               + (3U 
                                                  & (IData)(vlSelf->ui_in))));
    vlSelf->tt_um_zarovs_nbody__DOT__mass1 = (7U & 
                                              ((IData)(1U) 
                                               + (3U 
                                                  & ((IData)(vlSelf->ui_in) 
                                                     >> 2U))));
    vlSelf->tt_um_zarovs_nbody__DOT__mass2 = (7U & 
                                              ((IData)(1U) 
                                               + (3U 
                                                  & ((IData)(vlSelf->ui_in) 
                                                     >> 4U))));
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
    vlSelf->tt_um_zarovs_nbody__DOT__in_world = ((0x40U 
                                                  <= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)) 
                                                 & (0x240U 
                                                    > (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)));
    vlSelf->tt_um_zarovs_nbody__DOT__sxp = (0x7ffU 
                                            & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos) 
                                               - (IData)(0x140U)));
    vlSelf->tt_um_zarovs_nbody__DOT__syp = (0x7ffU 
                                            & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos) 
                                               - (IData)(0xf0U)));
    vlSelf->tt_um_zarovs_nbody__DOT__ax = (0x7fU & 
                                           ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__dxr) 
                                            ^ (- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__dxr) 
                                                             >> 7U))))));
    vlSelf->tt_um_zarovs_nbody__DOT__ay = (0x7fU & 
                                           ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__dyr) 
                                            ^ (- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__dyr) 
                                                             >> 7U))))));
    vlSelf->tt_um_zarovs_nbody__DOT__uo_out = vlSelf->uo_out;
    vlSelf->tt_um_zarovs_nbody__DOT__spd_c = ((7U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__spd))
                                               ? 6U
                                               : (IData)(vlSelf->tt_um_zarovs_nbody__DOT__spd));
    vlSelf->tt_um_zarovs_nbody__DOT__start = ((~ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pause)) 
                                              & ((0x1e0U 
                                                  == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos)) 
                                                 & (0U 
                                                    == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos))));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__clk 
        = vlSelf->tt_um_zarovs_nbody__DOT__clk;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__clk 
        = vlSelf->tt_um_zarovs_nbody__DOT__clk;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__clk 
        = vlSelf->tt_um_zarovs_nbody__DOT__clk;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__clk 
        = vlSelf->tt_um_zarovs_nbody__DOT__clk;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__clk 
        = vlSelf->tt_um_zarovs_nbody__DOT__clk;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__clk 
        = vlSelf->tt_um_zarovs_nbody__DOT__clk;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__init 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__init 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init;
    tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0 
        = ((~ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__last_v)) 
           & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init));
    if ((2U >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb))) {
        vlSelf->tt_um_zarovs_nbody__DOT__vxb = vlSelf->tt_um_zarovs_nbody__DOT__vx
            [vlSelf->tt_um_zarovs_nbody__DOT__pb];
        vlSelf->tt_um_zarovs_nbody__DOT__vyb = vlSelf->tt_um_zarovs_nbody__DOT__vy
            [vlSelf->tt_um_zarovs_nbody__DOT__pb];
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__vxb = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__vyb = 0U;
    }
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__en_vel 
        = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init) 
           | (((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
               & (0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi))) 
              | (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h7d63c64c__0)));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__en_vel 
        = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init) 
           | (((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
               & (1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi))) 
              | (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h7d34167f__0)));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__en_vel 
        = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init) 
           | (((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
               & (2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi))) 
              | (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h7d3827b6__0)));
    vlSelf->tt_um_zarovs_nbody__DOT__mass_j = ((0U 
                                                == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj))
                                                ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mass0)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj))
                                                    ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mass1)
                                                    : (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mass2)));
    vlSelf->tt_um_zarovs_nbody__DOT__wx = (0xffU & 
                                           ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sxp) 
                                            >> 1U));
    vlSelf->tt_um_zarovs_nbody__DOT__wy = (0xffU & 
                                           ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__syp) 
                                            >> 1U));
    vlSelf->tt_um_zarovs_nbody__DOT__xbig = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__ax) 
                                             >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__ay));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__en_pos 
        = ((IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0) 
           | (((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
               & ((0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi)) 
                  | (0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj)))) 
              | ((~ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__last_v)) 
                 & (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h7d63c64c__0))));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__en_pos 
        = ((IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0) 
           | (((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
               & ((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi)) 
                  | (1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj)))) 
              | ((~ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__last_v)) 
                 & (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h7d34167f__0))));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__en_pos 
        = ((IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0) 
           | (((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
               & ((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi)) 
                  | (2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj)))) 
              | ((~ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__last_v)) 
                 & (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h7d3827b6__0))));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__en 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__en_vel;
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__en_l 
            = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__en_vel;
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__en_l 
            = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__en_vel;
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__en_l 
            = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__en_vel;
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__en_l 
            = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__en_pos;
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__en_l 
            = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__en_pos;
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__en_l 
            = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__en_pos;
    }
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__en 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__en_vel;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__en 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__en_vel;
    vlSelf->tt_um_zarovs_nbody__DOT__d2x = (0xffU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__wx) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rx) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__d1x = (0xffU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__wx) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rx) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__d0x = (0xffU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__wx) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rx) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__d2y = (0xffU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__wy) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__ry) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__d1y = (0xffU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__wy) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__ry) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__d0y = (0xffU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__wy) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__ry) 
                                                >> 3U)));
    if (vlSelf->tt_um_zarovs_nbody__DOT__xbig) {
        vlSelf->tt_um_zarovs_nbody__DOT__hi = vlSelf->tt_um_zarovs_nbody__DOT__ax;
        vlSelf->tt_um_zarovs_nbody__DOT__lo = vlSelf->tt_um_zarovs_nbody__DOT__ay;
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__hi = vlSelf->tt_um_zarovs_nbody__DOT__ay;
        vlSelf->tt_um_zarovs_nbody__DOT__lo = vlSelf->tt_um_zarovs_nbody__DOT__ax;
    }
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__en 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__en_pos;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__en 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__en_pos;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__en 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__en_pos;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_vel 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_vel 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_vel 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__o2x = ((0x600U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2x) 
                                                               >> 7U)))) 
                                                << 9U)) 
                                            | (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2x) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sxp))));
    vlSelf->tt_um_zarovs_nbody__DOT__o1x = ((0x600U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1x) 
                                                               >> 7U)))) 
                                                << 9U)) 
                                            | (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1x) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sxp))));
    vlSelf->tt_um_zarovs_nbody__DOT__o0x = ((0x600U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0x) 
                                                               >> 7U)))) 
                                                << 9U)) 
                                            | (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0x) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sxp))));
    vlSelf->tt_um_zarovs_nbody__DOT__o2y = ((0x600U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2y) 
                                                               >> 7U)))) 
                                                << 9U)) 
                                            | (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2y) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__syp))));
    vlSelf->tt_um_zarovs_nbody__DOT__o1y = ((0x600U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1y) 
                                                               >> 7U)))) 
                                                << 9U)) 
                                            | (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1y) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__syp))));
    vlSelf->tt_um_zarovs_nbody__DOT__o0y = ((0x600U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0y) 
                                                               >> 7U)))) 
                                                << 9U)) 
                                            | (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0y) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__syp))));
    vlSelf->tt_um_zarovs_nbody__DOT__oct = (0xffU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hi) 
                                             + ((0x1fU 
                                                 & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__lo) 
                                                    >> 2U)) 
                                                + (0xfU 
                                                   & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__lo) 
                                                      >> 3U)))));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_pos 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_pos 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_pos 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__gclk 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_vel;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__gclk 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_vel;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__gclk 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_vel;
    vlSelf->tt_um_zarovs_nbody__DOT__w2 = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__in_world) 
                                           & ([&]() {
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__6__oy 
                    = vlSelf->tt_um_zarovs_nbody__DOT__o2y;
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__6__ox 
                    = vlSelf->tt_um_zarovs_nbody__DOT__o2x;
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__6__Vfuncout 
                    = (((0U == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__6__ox) 
                                         >> 3U))) | 
                        (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__6__ox) 
                                            >> 3U)))) 
                       & ((0U == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__6__oy) 
                                           >> 3U))) 
                          | (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__6__oy) 
                                                >> 3U)))));
            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__6__Vfuncout)));
    vlSelf->tt_um_zarovs_nbody__DOT__w1 = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__in_world) 
                                           & ([&]() {
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__5__oy 
                    = vlSelf->tt_um_zarovs_nbody__DOT__o1y;
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__5__ox 
                    = vlSelf->tt_um_zarovs_nbody__DOT__o1x;
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__5__Vfuncout 
                    = (((0U == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__5__ox) 
                                         >> 3U))) | 
                        (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__5__ox) 
                                            >> 3U)))) 
                       & ((0U == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__5__oy) 
                                           >> 3U))) 
                          | (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__5__oy) 
                                                >> 3U)))));
            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__5__Vfuncout)));
    vlSelf->tt_um_zarovs_nbody__DOT__w0 = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__in_world) 
                                           & ([&]() {
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__oy 
                    = vlSelf->tt_um_zarovs_nbody__DOT__o0y;
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__ox 
                    = vlSelf->tt_um_zarovs_nbody__DOT__o0x;
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__Vfuncout 
                    = (((0U == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__ox) 
                                         >> 3U))) | 
                        (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__ox) 
                                            >> 3U)))) 
                       & ((0U == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__oy) 
                                           >> 3U))) 
                          | (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__oy) 
                                                >> 3U)))));
            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__Vfuncout)));
    if ((0x80U == (0x80U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct) 
                                                    >> 5U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 7U;
    } else if ((0x40U == (0xc0U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct) 
                                                    >> 4U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 6U;
    } else if ((0x20U == (0xe0U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct) 
                                                    >> 3U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 5U;
    } else if ((0x10U == (0xf0U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct) 
                                                    >> 2U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 4U;
    } else if ((8U == (0xf8U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct) 
                                                    >> 1U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 3U;
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((4U 
                                                     == 
                                                     (0xfcU 
                                                      & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct)))
                                                     ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct)
                                                     : 0U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 2U;
    }
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__gclk 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_pos;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__gclk 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_pos;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__gclk 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_pos;
    if (vlSelf->tt_um_zarovs_nbody__DOT__w0) {
        vlSelf->tt_um_zarovs_nbody__DOT__selm = vlSelf->tt_um_zarovs_nbody__DOT__mass0;
        vlSelf->tt_um_zarovs_nbody__DOT__selx = ((0xeU 
                                                  & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0x) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sxp)));
        vlSelf->tt_um_zarovs_nbody__DOT__sely = ((0xeU 
                                                  & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0y) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__syp)));
    } else if (vlSelf->tt_um_zarovs_nbody__DOT__w1) {
        vlSelf->tt_um_zarovs_nbody__DOT__selm = vlSelf->tt_um_zarovs_nbody__DOT__mass1;
        vlSelf->tt_um_zarovs_nbody__DOT__selx = ((0xeU 
                                                  & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1x) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sxp)));
        vlSelf->tt_um_zarovs_nbody__DOT__sely = ((0xeU 
                                                  & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1y) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__syp)));
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__selm = vlSelf->tt_um_zarovs_nbody__DOT__mass2;
        vlSelf->tt_um_zarovs_nbody__DOT__selx = ((0xeU 
                                                  & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2x) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sxp)));
        vlSelf->tt_um_zarovs_nbody__DOT__sely = ((0xeU 
                                                  & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2y) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__syp)));
    }
    vlSelf->tt_um_zarovs_nbody__DOT__lut = ((0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mant))
                                             ? 6U : 
                                            ((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mant))
                                              ? 3U : 
                                             ((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mant))
                                               ? 2U
                                               : 1U)));
    vlSelf->tt_um_zarovs_nbody__DOT__e3 = (0x3fU & 
                                           (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__e) 
                                             << 1U) 
                                            + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__e)));
    vlSelf->tt_um_zarovs_nbody__DOT__hit = ((((IData)(vlSelf->tt_um_zarovs_nbody__DOT__w0) 
                                              | (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w1)) 
                                             | (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w2)) 
                                            & ((0xffU 
                                                & (VL_EXTEND_II(8,7, 
                                                                ([&]() {
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__v 
                                    = vlSelf->tt_um_zarovs_nbody__DOT__selx;
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
                            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__Vfuncout))) 
                                                   + 
                                                   VL_EXTEND_II(8,7, 
                                                                ([&]() {
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__v 
                                    = vlSelf->tt_um_zarovs_nbody__DOT__sely;
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__a 
                                    = (0xfU & ((8U 
                                                & (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__v))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__v)))
                                                : (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__v)));
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__Vfuncout 
                                    = (0x7fU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__a) 
                                                * (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__a)));
                            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__Vfuncout))))) 
                                               <= VL_EXTEND_II(8,7, 
                                                               ([&]() {
                        vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__9__m 
                            = vlSelf->tt_um_zarovs_nbody__DOT__selm;
                        vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__9__Vfuncout 
                            = ((1U == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__9__m))
                                ? 0xcU : ((2U == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__9__m))
                                           ? 0x14U : 
                                          ((3U == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__9__m))
                                            ? 0x1eU
                                            : 0x2aU)));
                    }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__9__Vfuncout)))));
    vlSelf->tt_um_zarovs_nbody__DOT__cfac6 = (0x3fU 
                                              & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__mass_j) 
                                                 * (IData)(vlSelf->tt_um_zarovs_nbody__DOT__lut)));
    vlSelf->tt_um_zarovs_nbody__DOT__sh = (0x3fU & 
                                           (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__e3) 
                                             - (IData)(0xaU)) 
                                            - (IData)(vlSelf->tt_um_zarovs_nbody__DOT__k)));
    vlSelf->tt_um_zarovs_nbody__DOT__on0 = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hit) 
                                            & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w0));
    tt_um_zarovs_nbody__DOT____VdfgTmp_h43f790a7__0 
        = ((~ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w0)) 
           & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hit));
    vlSelf->tt_um_zarovs_nbody__DOT__cfac = (0x1fU 
                                             & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cfac6));
    vlSelf->tt_um_zarovs_nbody__DOT__qr = (0x3fU & 
                                           ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sh) 
                                            - (IData)(1U)));
    vlSelf->tt_um_zarovs_nbody__DOT__q = (0x3fU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__t) 
                                                   + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sh)));
    vlSelf->tt_um_zarovs_nbody__DOT__on1 = ((IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h43f790a7__0) 
                                            & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w1));
    vlSelf->tt_um_zarovs_nbody__DOT__on2 = ((~ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w1)) 
                                            & (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h43f790a7__0));
    vlSelf->tt_um_zarovs_nbody__DOT__kon = ((4U >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__k)) 
                                            && (1U 
                                                & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__cfac) 
                                                   >> (IData)(vlSelf->tt_um_zarovs_nbody__DOT__k))));
    vlSelf->tt_um_zarovs_nbody__DOT__rgb = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__on0)
                                             ? 0x3cU
                                             : ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__on1)
                                                 ? 0xfU
                                                 : 
                                                ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__on2)
                                                  ? 0x37U
                                                  : 
                                                 ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__border)
                                                   ? 1U
                                                   : 0U))));
    vlSelf->tt_um_zarovs_nbody__DOT__a_x = 0U;
    vlSelf->tt_um_zarovs_nbody__DOT__b_x = 0U;
    vlSelf->tt_um_zarovs_nbody__DOT__a_y = 0U;
    vlSelf->tt_um_zarovs_nbody__DOT__b_y = 0U;
    vlSelf->tt_um_zarovs_nbody__DOT__c0x = 0U;
    vlSelf->tt_um_zarovs_nbody__DOT__c0y = 0U;
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
        vlSelf->tt_um_zarovs_nbody__DOT__c0x = 1U;
        vlSelf->tt_um_zarovs_nbody__DOT__c0y = 1U;
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
        vlSelf->tt_um_zarovs_nbody__DOT__c0x = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__kon) 
                                                 & VL_LTS_III(32, 0U, 
                                                              VL_EXTENDS_II(32,6, (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sh)))) 
                                                & ([&]() {
                    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__idx 
                        = vlSelf->tt_um_zarovs_nbody__DOT__qr;
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
        vlSelf->tt_um_zarovs_nbody__DOT__c0y = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__kon) 
                                                 & VL_LTS_III(32, 0U, 
                                                              VL_EXTENDS_II(32,6, (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sh)))) 
                                                & ([&]() {
                    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__idx 
                        = vlSelf->tt_um_zarovs_nbody__DOT__qr;
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
        vlSelf->tt_um_zarovs_nbody__DOT__c0x = (1U 
                                                & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vxb) 
                                                   >> 6U));
        vlSelf->tt_um_zarovs_nbody__DOT__c0y = (1U 
                                                & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vyb) 
                                                   >> 6U));
    }
    if (vlSelf->tt_um_zarovs_nbody__DOT__first) {
        vlSelf->tt_um_zarovs_nbody__DOT__cin_x = vlSelf->tt_um_zarovs_nbody__DOT__c0x;
        vlSelf->tt_um_zarovs_nbody__DOT__cin_y = vlSelf->tt_um_zarovs_nbody__DOT__c0y;
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__cin_x = vlSelf->tt_um_zarovs_nbody__DOT__cx;
        vlSelf->tt_um_zarovs_nbody__DOT__cin_y = vlSelf->tt_um_zarovs_nbody__DOT__cy;
    }
    vlSelf->tt_um_zarovs_nbody__DOT__sx = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__a_x) 
                                           ^ ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_x) 
                                              ^ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_x)));
    vlSelf->tt_um_zarovs_nbody__DOT__cox = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__a_x) 
                                             & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_x) 
                                                | (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_x))) 
                                            | ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_x) 
                                               & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_x)));
    vlSelf->tt_um_zarovs_nbody__DOT__sy = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__a_y) 
                                           ^ ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_y) 
                                              ^ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_y)));
    vlSelf->tt_um_zarovs_nbody__DOT__coy = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__a_y) 
                                             & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_y) 
                                                | (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_y))) 
                                            | ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_y) 
                                               & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_y)));
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

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__0(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rvy 
        = ((0x800U & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init)
                        ? ((0xbU >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)) 
                           && (1U & (0xedeU >> (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t))))
                        : ((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))
                            ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sy)
                            : (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rvy))) 
                      << 0xbU)) | (0x7ffU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rvy) 
                                             >> 1U)));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rvx 
        = ((0x800U & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init)
                        ? ((0xbU >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)) 
                           && (1U & (0xf2eU >> (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t))))
                        : ((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))
                            ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sx)
                            : (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rvx))) 
                      << 0xbU)) | (0x7ffU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rvx) 
                                             >> 1U)));
    vlSelf->tt_um_zarovs_nbody__DOT__vy[0U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rvy;
    vlSelf->tt_um_zarovs_nbody__DOT__vx[0U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rvx;
}

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__1(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rvy 
        = ((0x800U & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init)
                        ? ((0xbU >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)) 
                           && (1U & (0x122U >> (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t))))
                        : ((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))
                            ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sy)
                            : (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rvy))) 
                      << 0xbU)) | (0x7ffU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rvy) 
                                             >> 1U)));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rvx 
        = ((0x800U & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init)
                        ? ((0xbU >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)) 
                           && (1U & (0xf2eU >> (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t))))
                        : ((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))
                            ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sx)
                            : (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rvx))) 
                      << 0xbU)) | (0x7ffU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rvx) 
                                             >> 1U)));
    vlSelf->tt_um_zarovs_nbody__DOT__vy[1U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rvy;
    vlSelf->tt_um_zarovs_nbody__DOT__vx[1U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rvx;
}

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__2(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rvy 
        = ((((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init)
              ? 0U : (1U & ((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))
                             ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sy)
                             : (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rvy)))) 
            << 0xbU) | (0x7ffU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rvy) 
                                  >> 1U)));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rvx 
        = ((0x800U & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init)
                        ? ((0xbU >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)) 
                           && (1U & (0x1a4U >> (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t))))
                        : ((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))
                            ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sx)
                            : (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rvx))) 
                      << 0xbU)) | (0x7ffU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rvx) 
                                             >> 1U)));
    vlSelf->tt_um_zarovs_nbody__DOT__vy[2U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rvy;
    vlSelf->tt_um_zarovs_nbody__DOT__vx[2U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rvx;
}

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__3(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__ry 
        = ((0x400U & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init)
                        ? ((0xaU >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)) 
                           && (1U & (0x508U >> (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t))))
                        : ((3U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))
                            ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sy)
                            : (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__ry))) 
                      << 0xaU)) | (0x3ffU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__ry) 
                                             >> 1U)));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rx 
        = ((((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init)
              ? 0U : (1U & ((3U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))
                             ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sx)
                             : (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rx)))) 
            << 0xaU) | (0x3ffU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rx) 
                                  >> 1U)));
    vlSelf->tt_um_zarovs_nbody__DOT__py[2U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__ry;
    vlSelf->tt_um_zarovs_nbody__DOT__px[2U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rx;
}

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__4(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__ry 
        = ((((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init)
              ? 0U : (1U & ((3U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))
                             ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sy)
                             : (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__ry)))) 
            << 0xaU) | (0x3ffU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__ry) 
                                  >> 1U)));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rx 
        = ((0x400U & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init)
                        ? ((0xaU >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)) 
                           && (1U & (0xc8U >> (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t))))
                        : ((3U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))
                            ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sx)
                            : (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rx))) 
                      << 0xaU)) | (0x3ffU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rx) 
                                             >> 1U)));
    vlSelf->tt_um_zarovs_nbody__DOT__py[1U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__ry;
    vlSelf->tt_um_zarovs_nbody__DOT__px[1U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rx;
}

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__5(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__ry 
        = ((((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init)
              ? 0U : (1U & ((3U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))
                             ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sy)
                             : (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__ry)))) 
            << 0xaU) | (0x3ffU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__ry) 
                                  >> 1U)));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rx 
        = ((0x400U & (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init)
                        ? ((0xaU >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)) 
                           && (1U & (0x738U >> (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t))))
                        : ((3U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))
                            ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sx)
                            : (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rx))) 
                      << 0xaU)) | (0x3ffU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rx) 
                                             >> 1U)));
    vlSelf->tt_um_zarovs_nbody__DOT__py[0U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__ry;
    vlSelf->tt_um_zarovs_nbody__DOT__px[0U] = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rx;
}

extern const VlUnpacked<CData/*7:0*/, 1024> Vtt_um_zarovs_nbody__ConstPool__TABLE_hd132212b_0;

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__6(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__6\n"); );
    // Init
    CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0;
    tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0 = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h7d63c64c__0;
    tt_um_zarovs_nbody__DOT____VdfgTmp_h7d63c64c__0 = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h7d34167f__0;
    tt_um_zarovs_nbody__DOT____VdfgTmp_h7d34167f__0 = 0;
    CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h7d3827b6__0;
    tt_um_zarovs_nbody__DOT____VdfgTmp_h7d3827b6__0 = 0;
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vdly__tt_um_zarovs_nbody__DOT__state;
    __Vdly__tt_um_zarovs_nbody__DOT__state = 0;
    CData/*3:0*/ __Vdly__tt_um_zarovs_nbody__DOT__t;
    __Vdly__tt_um_zarovs_nbody__DOT__t = 0;
    CData/*2:0*/ __Vdly__tt_um_zarovs_nbody__DOT__pair;
    __Vdly__tt_um_zarovs_nbody__DOT__pair = 0;
    // Body
    __Vdly__tt_um_zarovs_nbody__DOT__t = vlSelf->tt_um_zarovs_nbody__DOT__t;
    __Vdly__tt_um_zarovs_nbody__DOT__state = vlSelf->tt_um_zarovs_nbody__DOT__state;
    __Vdly__tt_um_zarovs_nbody__DOT__pair = vlSelf->tt_um_zarovs_nbody__DOT__pair;
    if (vlSelf->rst_n) {
        if (vlSelf->tt_um_zarovs_nbody__DOT__hlast) {
            vlSelf->tt_um_zarovs_nbody__DOT__vpos = 
                ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vlast)
                  ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos))));
            vlSelf->tt_um_zarovs_nbody__DOT__hpos = 0U;
        } else {
            vlSelf->tt_um_zarovs_nbody__DOT__hpos = 
                (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)));
        }
        if ((4U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))) {
            if ((2U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))) {
                __Vdly__tt_um_zarovs_nbody__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))) {
                __Vdly__tt_um_zarovs_nbody__DOT__state = 0U;
            } else if (vlSelf->tt_um_zarovs_nbody__DOT__last_v) {
                __Vdly__tt_um_zarovs_nbody__DOT__state = 0U;
                __Vdly__tt_um_zarovs_nbody__DOT__t = 0U;
            } else {
                __Vdly__tt_um_zarovs_nbody__DOT__t 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)));
            }
        } else if ((2U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))) {
            if ((1U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state))) {
                if (vlSelf->tt_um_zarovs_nbody__DOT__first) {
                    vlSelf->tt_um_zarovs_nbody__DOT__vsx 
                        = (1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vxb) 
                                 >> 0xbU));
                    vlSelf->tt_um_zarovs_nbody__DOT__vsy 
                        = (1U & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vyb) 
                                 >> 0xbU));
                }
                if (vlSelf->tt_um_zarovs_nbody__DOT__last_v) {
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
            } else if (vlSelf->tt_um_zarovs_nbody__DOT__last_v) {
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
            if (vlSelf->tt_um_zarovs_nbody__DOT__last_p) {
                __Vdly__tt_um_zarovs_nbody__DOT__state = 2U;
                __Vdly__tt_um_zarovs_nbody__DOT__t = 0U;
                vlSelf->tt_um_zarovs_nbody__DOT__k = 0U;
            } else {
                __Vdly__tt_um_zarovs_nbody__DOT__t 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t)));
            }
        } else if (vlSelf->tt_um_zarovs_nbody__DOT__start) {
            vlSelf->tt_um_zarovs_nbody__DOT__steps_left 
                = (0x7fU & (((IData)(1U) << (IData)(vlSelf->tt_um_zarovs_nbody__DOT__spd_c)) 
                            - (IData)(1U)));
            __Vdly__tt_um_zarovs_nbody__DOT__state = 1U;
            __Vdly__tt_um_zarovs_nbody__DOT__t = 0U;
            __Vdly__tt_um_zarovs_nbody__DOT__pair = 0U;
        }
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__vpos = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__hpos = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__pb = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__steps_left = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__dxr = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__dyr = 0U;
        __Vdly__tt_um_zarovs_nbody__DOT__state = 4U;
        __Vdly__tt_um_zarovs_nbody__DOT__t = 0U;
        __Vdly__tt_um_zarovs_nbody__DOT__pair = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__k = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__vsx = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__vsy = 0U;
    }
    vlSelf->tt_um_zarovs_nbody__DOT__cy = ((IData)(vlSelf->rst_n) 
                                           && (IData)(vlSelf->tt_um_zarovs_nbody__DOT__coy));
    vlSelf->tt_um_zarovs_nbody__DOT__cx = ((IData)(vlSelf->rst_n) 
                                           && (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cox));
    __Vtableidx2 = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vsync) 
                     << 9U) | (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__rgb) 
                                << 3U) | (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hsync) 
                                           << 2U) | 
                                          (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__visible) 
                                            << 1U) 
                                           | (IData)(vlSelf->rst_n)))));
    vlSelf->tt_um_zarovs_nbody__DOT__out_r = Vtt_um_zarovs_nbody__ConstPool__TABLE_hd132212b_0
        [__Vtableidx2];
    vlSelf->tt_um_zarovs_nbody__DOT__t = __Vdly__tt_um_zarovs_nbody__DOT__t;
    vlSelf->tt_um_zarovs_nbody__DOT__state = __Vdly__tt_um_zarovs_nbody__DOT__state;
    vlSelf->tt_um_zarovs_nbody__DOT__pair = __Vdly__tt_um_zarovs_nbody__DOT__pair;
    vlSelf->tt_um_zarovs_nbody__DOT__vlast = (0x20cU 
                                              == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos));
    vlSelf->tt_um_zarovs_nbody__DOT__vsync = (1U & 
                                              (~ ((0x1eaU 
                                                   <= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos)) 
                                                  & (0x1ecU 
                                                     > (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos)))));
    vlSelf->tt_um_zarovs_nbody__DOT__syp = (0x7ffU 
                                            & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos) 
                                               - (IData)(0xf0U)));
    vlSelf->tt_um_zarovs_nbody__DOT__hlast = (0x31fU 
                                              == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos));
    vlSelf->tt_um_zarovs_nbody__DOT__hsync = (1U & 
                                              (~ ((0x290U 
                                                   <= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)) 
                                                  & (0x2f0U 
                                                     > (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)))));
    vlSelf->tt_um_zarovs_nbody__DOT__visible = ((0x280U 
                                                 > (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)) 
                                                & (0x1e0U 
                                                   > (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos)));
    vlSelf->tt_um_zarovs_nbody__DOT__border = ((0x40U 
                                                == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)) 
                                               | (0x23fU 
                                                  == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)));
    vlSelf->tt_um_zarovs_nbody__DOT__in_world = ((0x40U 
                                                  <= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)) 
                                                 & (0x240U 
                                                    > (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos)));
    vlSelf->tt_um_zarovs_nbody__DOT__sxp = (0x7ffU 
                                            & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos) 
                                               - (IData)(0x140U)));
    vlSelf->uo_out = vlSelf->tt_um_zarovs_nbody__DOT__out_r;
    vlSelf->tt_um_zarovs_nbody__DOT__last_p = (0xaU 
                                               == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t));
    vlSelf->tt_um_zarovs_nbody__DOT__first = (0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t));
    vlSelf->tt_um_zarovs_nbody__DOT__last_v = (0xbU 
                                               == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__t));
    tt_um_zarovs_nbody__DOT____VdfgTmp_h7d63c64c__0 
        = ((3U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
           & (0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb)));
    tt_um_zarovs_nbody__DOT____VdfgTmp_h7d34167f__0 
        = ((3U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
           & (1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb)));
    tt_um_zarovs_nbody__DOT____VdfgTmp_h7d3827b6__0 
        = ((3U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
           & (2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb)));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init 
        = (4U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state));
    __Vtableidx1 = vlSelf->tt_um_zarovs_nbody__DOT__pair;
    vlSelf->tt_um_zarovs_nbody__DOT__bi = Vtt_um_zarovs_nbody__ConstPool__TABLE_h2bc3323b_0
        [__Vtableidx1];
    vlSelf->tt_um_zarovs_nbody__DOT__bj = Vtt_um_zarovs_nbody__ConstPool__TABLE_h36fd642b_0
        [__Vtableidx1];
    vlSelf->tt_um_zarovs_nbody__DOT__ax = (0x7fU & 
                                           ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__dxr) 
                                            ^ (- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__dxr) 
                                                             >> 7U))))));
    vlSelf->tt_um_zarovs_nbody__DOT__ay = (0x7fU & 
                                           ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__dyr) 
                                            ^ (- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__dyr) 
                                                             >> 7U))))));
    vlSelf->tt_um_zarovs_nbody__DOT__wy = (0xffU & 
                                           ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__syp) 
                                            >> 1U));
    vlSelf->tt_um_zarovs_nbody__DOT__wx = (0xffU & 
                                           ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sxp) 
                                            >> 1U));
    vlSelf->tt_um_zarovs_nbody__DOT__uo_out = vlSelf->uo_out;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__init 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__init 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init;
    tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0 
        = ((~ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__last_v)) 
           & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__en_vel 
        = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init) 
           | (((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
               & (0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi))) 
              | (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h7d63c64c__0)));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__en_vel 
        = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init) 
           | (((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
               & (1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi))) 
              | (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h7d34167f__0)));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__en_vel 
        = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init) 
           | (((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
               & (2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi))) 
              | (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h7d3827b6__0)));
    vlSelf->tt_um_zarovs_nbody__DOT__xbig = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__ax) 
                                             >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__ay));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__en_pos 
        = ((IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0) 
           | (((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
               & ((0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi)) 
                  | (0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj)))) 
              | ((~ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__last_v)) 
                 & (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h7d63c64c__0))));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__en_pos 
        = ((IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0) 
           | (((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
               & ((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi)) 
                  | (1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj)))) 
              | ((~ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__last_v)) 
                 & (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h7d34167f__0))));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__en_pos 
        = ((IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0) 
           | (((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__state)) 
               & ((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bi)) 
                  | (2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj)))) 
              | ((~ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__last_v)) 
                 & (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h7d3827b6__0))));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__en 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__en_vel;
    if ((1U & (~ (IData)(vlSelf->clk)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__en_l 
            = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__en_vel;
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__en_l 
            = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__en_vel;
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__en_l 
            = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__en_vel;
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__en_l 
            = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__en_pos;
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__en_l 
            = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__en_pos;
        vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__en_l 
            = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__en_pos;
    }
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__en 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__en_vel;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__en 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__en_vel;
    if (vlSelf->tt_um_zarovs_nbody__DOT__xbig) {
        vlSelf->tt_um_zarovs_nbody__DOT__hi = vlSelf->tt_um_zarovs_nbody__DOT__ax;
        vlSelf->tt_um_zarovs_nbody__DOT__lo = vlSelf->tt_um_zarovs_nbody__DOT__ay;
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__hi = vlSelf->tt_um_zarovs_nbody__DOT__ay;
        vlSelf->tt_um_zarovs_nbody__DOT__lo = vlSelf->tt_um_zarovs_nbody__DOT__ax;
    }
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__en 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__en_pos;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__en 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__en_pos;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__en 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__en_pos;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_vel 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_vel 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_vel 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__oct = (0xffU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hi) 
                                             + ((0x1fU 
                                                 & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__lo) 
                                                    >> 2U)) 
                                                + (0xfU 
                                                   & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__lo) 
                                                      >> 3U)))));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_pos 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_pos 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_pos 
        = ((IData)(vlSelf->clk) & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__en_l));
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__gclk 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_vel;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__gclk 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_vel;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__gclk 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_vel;
    if ((0x80U == (0x80U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct) 
                                                    >> 5U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 7U;
    } else if ((0x40U == (0xc0U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct) 
                                                    >> 4U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 6U;
    } else if ((0x20U == (0xe0U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct) 
                                                    >> 3U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 5U;
    } else if ((0x10U == (0xf0U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct) 
                                                    >> 2U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 4U;
    } else if ((8U == (0xf8U & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct)))) {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct) 
                                                    >> 1U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 3U;
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__mant = (3U 
                                                 & ((4U 
                                                     == 
                                                     (0xfcU 
                                                      & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct)))
                                                     ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__oct)
                                                     : 0U));
        vlSelf->tt_um_zarovs_nbody__DOT__e = 2U;
    }
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__gclk 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_pos;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__gclk 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_pos;
    vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__gclk 
        = vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_pos;
    vlSelf->tt_um_zarovs_nbody__DOT__lut = ((0U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mant))
                                             ? 6U : 
                                            ((1U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mant))
                                              ? 3U : 
                                             ((2U == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mant))
                                               ? 2U
                                               : 1U)));
    vlSelf->tt_um_zarovs_nbody__DOT__e3 = (0x3fU & 
                                           (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__e) 
                                             << 1U) 
                                            + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__e)));
    vlSelf->tt_um_zarovs_nbody__DOT__sh = (0x3fU & 
                                           (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__e3) 
                                             - (IData)(0xaU)) 
                                            - (IData)(vlSelf->tt_um_zarovs_nbody__DOT__k)));
    vlSelf->tt_um_zarovs_nbody__DOT__qr = (0x3fU & 
                                           ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__sh) 
                                            - (IData)(1U)));
    vlSelf->tt_um_zarovs_nbody__DOT__q = (0x3fU & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__t) 
                                                   + (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sh)));
}

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___nba_comb__TOP__0(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___nba_comb__TOP__0\n"); );
    // Body
    if ((2U >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pb))) {
        vlSelf->tt_um_zarovs_nbody__DOT__vxb = vlSelf->tt_um_zarovs_nbody__DOT__vx
            [vlSelf->tt_um_zarovs_nbody__DOT__pb];
        vlSelf->tt_um_zarovs_nbody__DOT__vyb = vlSelf->tt_um_zarovs_nbody__DOT__vy
            [vlSelf->tt_um_zarovs_nbody__DOT__pb];
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__vxb = 0U;
        vlSelf->tt_um_zarovs_nbody__DOT__vyb = 0U;
    }
}

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___nba_comb__TOP__1(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->tt_um_zarovs_nbody__DOT__d2y = (0xffU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__wy) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__ry) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__d2x = (0xffU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__wx) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rx) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__o2y = ((0x600U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2y) 
                                                               >> 7U)))) 
                                                << 9U)) 
                                            | (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2y) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__syp))));
    vlSelf->tt_um_zarovs_nbody__DOT__o2x = ((0x600U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2x) 
                                                               >> 7U)))) 
                                                << 9U)) 
                                            | (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2x) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sxp))));
    vlSelf->tt_um_zarovs_nbody__DOT__w2 = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__in_world) 
                                           & ([&]() {
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__6__oy 
                    = vlSelf->tt_um_zarovs_nbody__DOT__o2y;
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__6__ox 
                    = vlSelf->tt_um_zarovs_nbody__DOT__o2x;
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__6__Vfuncout 
                    = (((0U == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__6__ox) 
                                         >> 3U))) | 
                        (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__6__ox) 
                                            >> 3U)))) 
                       & ((0U == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__6__oy) 
                                           >> 3U))) 
                          | (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__6__oy) 
                                                >> 3U)))));
            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__6__Vfuncout)));
}

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___nba_comb__TOP__2(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->tt_um_zarovs_nbody__DOT__d1y = (0xffU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__wy) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__ry) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__d1x = (0xffU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__wx) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rx) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__o1y = ((0x600U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1y) 
                                                               >> 7U)))) 
                                                << 9U)) 
                                            | (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1y) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__syp))));
    vlSelf->tt_um_zarovs_nbody__DOT__o1x = ((0x600U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1x) 
                                                               >> 7U)))) 
                                                << 9U)) 
                                            | (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1x) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sxp))));
    vlSelf->tt_um_zarovs_nbody__DOT__w1 = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__in_world) 
                                           & ([&]() {
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__5__oy 
                    = vlSelf->tt_um_zarovs_nbody__DOT__o1y;
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__5__ox 
                    = vlSelf->tt_um_zarovs_nbody__DOT__o1x;
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__5__Vfuncout 
                    = (((0U == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__5__ox) 
                                         >> 3U))) | 
                        (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__5__ox) 
                                            >> 3U)))) 
                       & ((0U == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__5__oy) 
                                           >> 3U))) 
                          | (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__5__oy) 
                                                >> 3U)))));
            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__5__Vfuncout)));
}

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___nba_comb__TOP__3(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->tt_um_zarovs_nbody__DOT__d0y = (0xffU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__wy) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__ry) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__d0x = (0xffU & 
                                            ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__wx) 
                                             - ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rx) 
                                                >> 3U)));
    vlSelf->tt_um_zarovs_nbody__DOT__o0y = ((0x600U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0y) 
                                                               >> 7U)))) 
                                                << 9U)) 
                                            | (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0y) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__syp))));
    vlSelf->tt_um_zarovs_nbody__DOT__o0x = ((0x600U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0x) 
                                                               >> 7U)))) 
                                                << 9U)) 
                                            | (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0x) 
                                                << 1U) 
                                               | (1U 
                                                  & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sxp))));
    vlSelf->tt_um_zarovs_nbody__DOT__w0 = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__in_world) 
                                           & ([&]() {
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__oy 
                    = vlSelf->tt_um_zarovs_nbody__DOT__o0y;
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__ox 
                    = vlSelf->tt_um_zarovs_nbody__DOT__o0x;
                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__Vfuncout 
                    = (((0U == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__ox) 
                                         >> 3U))) | 
                        (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__ox) 
                                            >> 3U)))) 
                       & ((0U == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__oy) 
                                           >> 3U))) 
                          | (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__oy) 
                                                >> 3U)))));
            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__Vfuncout)));
}

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__7(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->tt_um_zarovs_nbody__DOT__start = ((~ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__pause)) 
                                              & ((0x1e0U 
                                                  == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__vpos)) 
                                                 & (0U 
                                                    == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hpos))));
    vlSelf->tt_um_zarovs_nbody__DOT__mass_j = ((0U 
                                                == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj))
                                                ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mass0)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->tt_um_zarovs_nbody__DOT__bj))
                                                    ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mass1)
                                                    : (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mass2)));
    vlSelf->tt_um_zarovs_nbody__DOT__cfac6 = (0x3fU 
                                              & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__mass_j) 
                                                 * (IData)(vlSelf->tt_um_zarovs_nbody__DOT__lut)));
    vlSelf->tt_um_zarovs_nbody__DOT__cfac = (0x1fU 
                                             & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cfac6));
    vlSelf->tt_um_zarovs_nbody__DOT__kon = ((4U >= (IData)(vlSelf->tt_um_zarovs_nbody__DOT__k)) 
                                            && (1U 
                                                & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__cfac) 
                                                   >> (IData)(vlSelf->tt_um_zarovs_nbody__DOT__k))));
}

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___nba_comb__TOP__4(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___nba_comb__TOP__4\n"); );
    // Body
    vlSelf->tt_um_zarovs_nbody__DOT__selm = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__w0)
                                              ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mass0)
                                              : ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__w1)
                                                  ? (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mass1)
                                                  : (IData)(vlSelf->tt_um_zarovs_nbody__DOT__mass2)));
}

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___nba_comb__TOP__5(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___nba_comb__TOP__5\n"); );
    // Init
    CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h43f790a7__0;
    tt_um_zarovs_nbody__DOT____VdfgTmp_h43f790a7__0 = 0;
    // Body
    if (vlSelf->tt_um_zarovs_nbody__DOT__w0) {
        vlSelf->tt_um_zarovs_nbody__DOT__selx = ((0xeU 
                                                  & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0x) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sxp)));
        vlSelf->tt_um_zarovs_nbody__DOT__sely = ((0xeU 
                                                  & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d0y) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__syp)));
    } else if (vlSelf->tt_um_zarovs_nbody__DOT__w1) {
        vlSelf->tt_um_zarovs_nbody__DOT__selx = ((0xeU 
                                                  & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1x) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sxp)));
        vlSelf->tt_um_zarovs_nbody__DOT__sely = ((0xeU 
                                                  & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d1y) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__syp)));
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__selx = ((0xeU 
                                                  & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2x) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sxp)));
        vlSelf->tt_um_zarovs_nbody__DOT__sely = ((0xeU 
                                                  & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__d2y) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__syp)));
    }
    vlSelf->tt_um_zarovs_nbody__DOT__hit = ((((IData)(vlSelf->tt_um_zarovs_nbody__DOT__w0) 
                                              | (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w1)) 
                                             | (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w2)) 
                                            & ((0xffU 
                                                & (VL_EXTEND_II(8,7, 
                                                                ([&]() {
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__v 
                                    = vlSelf->tt_um_zarovs_nbody__DOT__selx;
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
                            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__Vfuncout))) 
                                                   + 
                                                   VL_EXTEND_II(8,7, 
                                                                ([&]() {
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__v 
                                    = vlSelf->tt_um_zarovs_nbody__DOT__sely;
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__a 
                                    = (0xfU & ((8U 
                                                & (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__v))
                                                ? ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__v)))
                                                : (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__v)));
                                vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__Vfuncout 
                                    = (0x7fU & ((IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__a) 
                                                * (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__a)));
                            }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__sq4__8__Vfuncout))))) 
                                               <= VL_EXTEND_II(8,7, 
                                                               ([&]() {
                        vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__9__m 
                            = vlSelf->tt_um_zarovs_nbody__DOT__selm;
                        vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__9__Vfuncout 
                            = ((1U == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__9__m))
                                ? 0xcU : ((2U == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__9__m))
                                           ? 0x14U : 
                                          ((3U == (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__9__m))
                                            ? 0x1eU
                                            : 0x2aU)));
                    }(), (IData)(vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__rr__9__Vfuncout)))));
    vlSelf->tt_um_zarovs_nbody__DOT__on0 = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__hit) 
                                            & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w0));
    tt_um_zarovs_nbody__DOT____VdfgTmp_h43f790a7__0 
        = ((~ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w0)) 
           & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__hit));
    vlSelf->tt_um_zarovs_nbody__DOT__on1 = ((IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h43f790a7__0) 
                                            & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w1));
    vlSelf->tt_um_zarovs_nbody__DOT__on2 = ((~ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__w1)) 
                                            & (IData)(tt_um_zarovs_nbody__DOT____VdfgTmp_h43f790a7__0));
    vlSelf->tt_um_zarovs_nbody__DOT__rgb = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__on0)
                                             ? 0x3cU
                                             : ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__on1)
                                                 ? 0xfU
                                                 : 
                                                ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__on2)
                                                  ? 0x37U
                                                  : 
                                                 ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__border)
                                                   ? 1U
                                                   : 0U))));
}

VL_INLINE_OPT void Vtt_um_zarovs_nbody___024root___nba_comb__TOP__6(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___nba_comb__TOP__6\n"); );
    // Body
    vlSelf->tt_um_zarovs_nbody__DOT__a_x = 0U;
    vlSelf->tt_um_zarovs_nbody__DOT__b_x = 0U;
    vlSelf->tt_um_zarovs_nbody__DOT__a_y = 0U;
    vlSelf->tt_um_zarovs_nbody__DOT__b_y = 0U;
    vlSelf->tt_um_zarovs_nbody__DOT__c0x = 0U;
    vlSelf->tt_um_zarovs_nbody__DOT__c0y = 0U;
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
        vlSelf->tt_um_zarovs_nbody__DOT__c0x = 1U;
        vlSelf->tt_um_zarovs_nbody__DOT__c0y = 1U;
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
        vlSelf->tt_um_zarovs_nbody__DOT__c0x = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__kon) 
                                                 & VL_LTS_III(32, 0U, 
                                                              VL_EXTENDS_II(32,6, (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sh)))) 
                                                & ([&]() {
                    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__idx 
                        = vlSelf->tt_um_zarovs_nbody__DOT__qr;
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
        vlSelf->tt_um_zarovs_nbody__DOT__c0y = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__kon) 
                                                 & VL_LTS_III(32, 0U, 
                                                              VL_EXTENDS_II(32,6, (IData)(vlSelf->tt_um_zarovs_nbody__DOT__sh)))) 
                                                & ([&]() {
                    vlSelf->__Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__idx 
                        = vlSelf->tt_um_zarovs_nbody__DOT__qr;
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
        vlSelf->tt_um_zarovs_nbody__DOT__c0x = (1U 
                                                & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vxb) 
                                                   >> 6U));
        vlSelf->tt_um_zarovs_nbody__DOT__c0y = (1U 
                                                & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__vyb) 
                                                   >> 6U));
    }
    if (vlSelf->tt_um_zarovs_nbody__DOT__first) {
        vlSelf->tt_um_zarovs_nbody__DOT__cin_x = vlSelf->tt_um_zarovs_nbody__DOT__c0x;
        vlSelf->tt_um_zarovs_nbody__DOT__cin_y = vlSelf->tt_um_zarovs_nbody__DOT__c0y;
    } else {
        vlSelf->tt_um_zarovs_nbody__DOT__cin_x = vlSelf->tt_um_zarovs_nbody__DOT__cx;
        vlSelf->tt_um_zarovs_nbody__DOT__cin_y = vlSelf->tt_um_zarovs_nbody__DOT__cy;
    }
    vlSelf->tt_um_zarovs_nbody__DOT__sx = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__a_x) 
                                           ^ ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_x) 
                                              ^ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_x)));
    vlSelf->tt_um_zarovs_nbody__DOT__cox = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__a_x) 
                                             & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_x) 
                                                | (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_x))) 
                                            | ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_x) 
                                               & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_x)));
    vlSelf->tt_um_zarovs_nbody__DOT__sy = ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__a_y) 
                                           ^ ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_y) 
                                              ^ (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_y)));
    vlSelf->tt_um_zarovs_nbody__DOT__coy = (((IData)(vlSelf->tt_um_zarovs_nbody__DOT__a_y) 
                                             & ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_y) 
                                                | (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_y))) 
                                            | ((IData)(vlSelf->tt_um_zarovs_nbody__DOT__b_y) 
                                               & (IData)(vlSelf->tt_um_zarovs_nbody__DOT__cin_y)));
}

void Vtt_um_zarovs_nbody___024root___eval_nba(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x55ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((9ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0xbULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x2bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x7fULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtt_um_zarovs_nbody___024root___nba_comb__TOP__6(vlSelf);
    }
}

void Vtt_um_zarovs_nbody___024root___eval_triggers__act(Vtt_um_zarovs_nbody___024root* vlSelf);

bool Vtt_um_zarovs_nbody___024root___eval_phase__act(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<7> __VpreTriggered;
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
