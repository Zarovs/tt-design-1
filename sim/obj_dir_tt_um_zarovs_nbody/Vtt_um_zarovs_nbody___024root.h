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
        VL_IN8(ui_in,7,0);
        VL_OUT8(uo_out,7,0);
        VL_IN8(uio_in,7,0);
        VL_OUT8(uio_out,7,0);
        VL_OUT8(uio_oe,7,0);
        VL_IN8(ena,0,0);
        VL_IN8(rst_n,0,0);
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__hlast;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__vlast;
        CData/*1:0*/ tt_um_zarovs_nbody__DOT__state;
        CData/*3:0*/ tt_um_zarovs_nbody__DOT__t;
        CData/*2:0*/ tt_um_zarovs_nbody__DOT__pair;
        CData/*2:0*/ tt_um_zarovs_nbody__DOT__k;
        CData/*1:0*/ tt_um_zarovs_nbody__DOT__pb;
        CData/*6:0*/ tt_um_zarovs_nbody__DOT__steps_left;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__cx;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__cy;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__dxr;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__dyr;
        CData/*1:0*/ tt_um_zarovs_nbody__DOT__bi;
        CData/*1:0*/ tt_um_zarovs_nbody__DOT__bj;
        CData/*1:0*/ tt_um_zarovs_nbody__DOT__mant;
        CData/*5:0*/ tt_um_zarovs_nbody__DOT__sh;
        CData/*5:0*/ tt_um_zarovs_nbody__DOT__q;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__a_x;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__b_x;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__a_y;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__b_y;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__cin_x;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__cin_y;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__sx;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__sy;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__last_p;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__last_v;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__on0;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__on1;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__on2;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__out_r;
        CData/*0:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__Vfuncout;
        CData/*7:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__d;
        CData/*5:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__0__idx;
        CData/*0:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__Vfuncout;
        CData/*7:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__d;
        CData/*5:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__1__idx;
        CData/*0:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__Vfuncout;
        CData/*7:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__d;
        CData/*5:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__2__idx;
        CData/*0:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__Vfuncout;
        CData/*7:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__d;
        CData/*5:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__tapd__3__idx;
        CData/*6:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__Vfuncout;
        CData/*3:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__v;
        CData/*3:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__6__a;
        CData/*6:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__Vfuncout;
        CData/*3:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__v;
        CData/*3:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__7__a;
        CData/*6:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__10__Vfuncout;
        CData/*3:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__10__v;
        CData/*3:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__10__a;
        CData/*6:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__11__Vfuncout;
        CData/*3:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__11__v;
        CData/*3:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__11__a;
        CData/*6:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__14__Vfuncout;
    };
    struct {
        CData/*3:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__14__v;
        CData/*3:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__14__a;
        CData/*6:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__15__Vfuncout;
        CData/*3:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__15__v;
        CData/*3:0*/ __Vfunc_tt_um_zarovs_nbody__DOT__sq4__15__a;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ tt_um_zarovs_nbody__DOT__hpos;
        SData/*9:0*/ tt_um_zarovs_nbody__DOT__vpos;
        SData/*11:0*/ tt_um_zarovs_nbody__DOT__vxb;
        SData/*11:0*/ tt_um_zarovs_nbody__DOT__vyb;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT____Vlvbound_h99d9bc9b__0;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT____Vlvbound_h3c9df23b__0;
        SData/*11:0*/ tt_um_zarovs_nbody__DOT____Vlvbound_hc1565f32__0;
        SData/*11:0*/ tt_um_zarovs_nbody__DOT____Vlvbound_h6c7d9e9f__0;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT____Vlvbound_h99d9bc9b__1;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT____Vlvbound_h3c9df23b__1;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*10:0*/, 3> tt_um_zarovs_nbody__DOT__px;
        VlUnpacked<SData/*10:0*/, 3> tt_um_zarovs_nbody__DOT__py;
        VlUnpacked<SData/*11:0*/, 3> tt_um_zarovs_nbody__DOT__vx;
        VlUnpacked<SData/*11:0*/, 3> tt_um_zarovs_nbody__DOT__vy;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

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
