// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtt_um_zarovs_nbody.h for the primary calling header

#ifndef VERILATED_VTT_UM_ZAROVS_NBODY___024ROOT_H_
#define VERILATED_VTT_UM_ZAROVS_NBODY___024ROOT_H_  // guard

#include "verilated.h"


class Vtt_um_zarovs_nbody__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtt_um_zarovs_nbody___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_pos;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_vel;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_pos;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_vel;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_pos;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_vel;
        VL_IN8(ui_in,7,0);
        VL_OUT8(uo_out,7,0);
        VL_IN8(uio_in,7,0);
        VL_OUT8(uio_out,7,0);
        VL_OUT8(uio_oe,7,0);
        VL_IN8(ena,0,0);
        VL_IN8(rst_n,0,0);
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__hlast;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__vlast;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__hsync;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__vsync;
        CData/*2:0*/ tt_um_zarovs_nbody__DOT__state;
        CData/*3:0*/ tt_um_zarovs_nbody__DOT__t;
        CData/*2:0*/ tt_um_zarovs_nbody__DOT__pair;
        CData/*2:0*/ tt_um_zarovs_nbody__DOT__k;
        CData/*1:0*/ tt_um_zarovs_nbody__DOT__pb;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__cx;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__cy;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__dxr;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__dyr;
        CData/*1:0*/ tt_um_zarovs_nbody__DOT__bi;
        CData/*1:0*/ tt_um_zarovs_nbody__DOT__bj;
        CData/*2:0*/ tt_um_zarovs_nbody__DOT__e;
        CData/*5:0*/ tt_um_zarovs_nbody__DOT__sh;
        CData/*5:0*/ tt_um_zarovs_nbody__DOT__q;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__kon;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__vsx;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__vsy;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__a_x;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__b_x;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__a_y;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__b_y;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__first;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__cin_x;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__cin_y;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__sx;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__sy;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__last_p;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__last_v;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__d0x;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__d0y;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__d1x;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__d1y;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__d2x;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__d2y;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__in_world;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__w0;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__w1;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__w2;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h8c12093b__0;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h5fbf8a1c__0;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h7d63c64c__0;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h7d34167f__0;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h7d3827b6__0;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__en_l;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__en_l;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__en_l;
    };
    struct {
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__en_l;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__en_l;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__en_l;
        CData/*0:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__Vfuncout;
        CData/*7:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__d;
        CData/*5:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__idx;
        CData/*0:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__Vfuncout;
        CData/*7:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__d;
        CData/*5:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__idx;
        CData/*0:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__inwin__2__Vfuncout;
        CData/*7:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__inwin__2__ox;
        CData/*7:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__inwin__2__oy;
        CData/*0:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__inwin__3__Vfuncout;
        CData/*7:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__inwin__3__ox;
        CData/*7:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__inwin__3__oy;
        CData/*0:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__Vfuncout;
        CData/*7:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__ox;
        CData/*7:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__inwin__4__oy;
        CData/*6:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__5__Vfuncout;
        CData/*3:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__5__v;
        CData/*3:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__5__a;
        CData/*6:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__Vfuncout;
        CData/*3:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__v;
        CData/*3:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__a;
        CData/*6:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__rr__7__Vfuncout;
        CData/*1:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__rr__7__m;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_pos__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_vel__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_pos__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_vel__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_pos__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_vel__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ tt_um_zarovs_nbody__DOT__hpos;
        SData/*9:0*/ tt_um_zarovs_nbody__DOT__vpos;
        SData/*11:0*/ tt_um_zarovs_nbody__DOT__vxb;
        SData/*11:0*/ tt_um_zarovs_nbody__DOT__vyb;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rx;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__ry;
        SData/*11:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rvx;
        SData/*11:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rvy;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rx;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__ry;
        SData/*11:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rvx;
        SData/*11:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rvy;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rx;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__ry;
        SData/*11:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rvx;
        SData/*11:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rvy;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*10:0*/, 3> tt_um_zarovs_nbody__DOT__px;
        VlUnpacked<SData/*10:0*/, 3> tt_um_zarovs_nbody__DOT__py;
        VlUnpacked<SData/*11:0*/, 3> tt_um_zarovs_nbody__DOT__vx;
        VlUnpacked<SData/*11:0*/, 3> tt_um_zarovs_nbody__DOT__vy;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtt_um_zarovs_nbody__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtt_um_zarovs_nbody___024root(Vtt_um_zarovs_nbody__Syms* symsp, const char* v__name);
    ~Vtt_um_zarovs_nbody___024root();
    VL_UNCOPYABLE(Vtt_um_zarovs_nbody___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
