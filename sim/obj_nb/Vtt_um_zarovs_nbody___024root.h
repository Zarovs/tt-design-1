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
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__en_pos;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__en_vel;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_pos;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_vel;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__en_pos;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__en_vel;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_pos;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_vel;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__en_pos;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__en_vel;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_pos;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_vel;
        VL_IN8(ui_in,7,0);
        VL_OUT8(uo_out,7,0);
        VL_IN8(uio_in,7,0);
        VL_OUT8(uio_out,7,0);
        VL_OUT8(uio_oe,7,0);
        VL_IN8(ena,0,0);
        VL_IN8(rst_n,0,0);
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__ui_in;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__uo_out;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__uio_in;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__uio_out;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__uio_oe;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__ena;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__clk;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__rst_n;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__hlast;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__vlast;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__visible;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__hsync;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__vsync;
        CData/*1:0*/ tt_um_zarovs_nbody__DOT__mexp0;
        CData/*1:0*/ tt_um_zarovs_nbody__DOT__mexp1;
        CData/*1:0*/ tt_um_zarovs_nbody__DOT__mexp2;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__pause;
        CData/*2:0*/ tt_um_zarovs_nbody__DOT__spd;
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
        CData/*1:0*/ tt_um_zarovs_nbody__DOT__mexp_j;
        CData/*6:0*/ tt_um_zarovs_nbody__DOT__ax;
        CData/*6:0*/ tt_um_zarovs_nbody__DOT__ay;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__xbig;
        CData/*6:0*/ tt_um_zarovs_nbody__DOT__hi;
        CData/*6:0*/ tt_um_zarovs_nbody__DOT__lo;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__oct;
        CData/*2:0*/ tt_um_zarovs_nbody__DOT__e;
        CData/*1:0*/ tt_um_zarovs_nbody__DOT__mant;
        CData/*2:0*/ tt_um_zarovs_nbody__DOT__lut;
        CData/*5:0*/ tt_um_zarovs_nbody__DOT__e3;
        CData/*5:0*/ tt_um_zarovs_nbody__DOT__sh;
        CData/*5:0*/ tt_um_zarovs_nbody__DOT__q;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__kon;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__vsx;
    };
    struct {
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__vsy;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__a_x;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__b_x;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__a_y;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__b_y;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__c0x;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__c0y;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__first;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__cin_x;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__cin_y;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__sx;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__sy;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__cox;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__coy;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__last_p;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__last_v;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__start;
        CData/*5:0*/ tt_um_zarovs_nbody__DOT__vline;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__more;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__wx;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__wy;
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
        CData/*3:0*/ tt_um_zarovs_nbody__DOT__selx;
        CData/*3:0*/ tt_um_zarovs_nbody__DOT__sely;
        CData/*1:0*/ tt_um_zarovs_nbody__DOT__selm;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__hit;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__on0;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__on1;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__on2;
        CData/*5:0*/ tt_um_zarovs_nbody__DOT__rgb;
        CData/*7:0*/ tt_um_zarovs_nbody__DOT__out_r;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT___unused;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__init;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__init;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT____VdfgTmp_h8c12093b__0;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__clk;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__en;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__gclk;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__en_l;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__clk;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__en;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__gclk;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__en_l;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__clk;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__en;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__gclk;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__en_l;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__clk;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__en;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__gclk;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__en_l;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__clk;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__en;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__gclk;
    };
    struct {
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__en_l;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__clk;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__en;
        CData/*0:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__gclk;
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
        SData/*10:0*/ tt_um_zarovs_nbody__DOT__sxp;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT__syp;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT__o0x;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT__o0y;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT__o1x;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT__o1y;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT__o2x;
        SData/*10:0*/ tt_um_zarovs_nbody__DOT__o2y;
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
    };
    struct {
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

    // PARAMETERS
    static constexpr CData/*2:0*/ tt_um_zarovs_nbody__DOT__S_IDLE = 0U;
    static constexpr CData/*2:0*/ tt_um_zarovs_nbody__DOT__S_D = 1U;
    static constexpr CData/*2:0*/ tt_um_zarovs_nbody__DOT__S_A = 2U;
    static constexpr CData/*2:0*/ tt_um_zarovs_nbody__DOT__S_P = 3U;
    static constexpr CData/*2:0*/ tt_um_zarovs_nbody__DOT__S_INIT = 4U;
    static constexpr SData/*10:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__X0 = 0x0738U;
    static constexpr SData/*10:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__Y0 = 0U;
    static constexpr SData/*11:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__VX0 = 0x0f2eU;
    static constexpr SData/*11:0*/ tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__VY0 = 0x0edeU;
    static constexpr SData/*10:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__X0 = 0x00c8U;
    static constexpr SData/*10:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__Y0 = 0U;
    static constexpr SData/*11:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__VX0 = 0x0f2eU;
    static constexpr SData/*11:0*/ tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__VY0 = 0x0122U;
    static constexpr SData/*10:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__X0 = 0U;
    static constexpr SData/*10:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__Y0 = 0x0508U;
    static constexpr SData/*11:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__VX0 = 0x01a4U;
    static constexpr SData/*11:0*/ tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__VY0 = 0U;
    static constexpr IData/*31:0*/ tt_um_zarovs_nbody__DOT__P = 0x0000000bU;
    static constexpr IData/*31:0*/ tt_um_zarovs_nbody__DOT__V = 0x0000000cU;

    // CONSTRUCTORS
    Vtt_um_zarovs_nbody___024root(Vtt_um_zarovs_nbody__Syms* symsp, const char* v__name);
    ~Vtt_um_zarovs_nbody___024root();
    VL_UNCOPYABLE(Vtt_um_zarovs_nbody___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
