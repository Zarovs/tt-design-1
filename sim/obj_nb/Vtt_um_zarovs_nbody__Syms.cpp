// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtt_um_zarovs_nbody__pch.h"
#include "Vtt_um_zarovs_nbody.h"
#include "Vtt_um_zarovs_nbody___024root.h"

// FUNCTIONS
Vtt_um_zarovs_nbody__Syms::~Vtt_um_zarovs_nbody__Syms()
{
}

Vtt_um_zarovs_nbody__Syms::Vtt_um_zarovs_nbody__Syms(VerilatedContext* contextp, const char* namep, Vtt_um_zarovs_nbody* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_tt_um_zarovs_nbody.configure(this, name(), "tt_um_zarovs_nbody", "tt_um_zarovs_nbody", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET__.configure(this, name(), "tt_um_zarovs_nbody.body[0]", "body[0]", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET____cg_pos.configure(this, name(), "tt_um_zarovs_nbody.body[0].cg_pos", "cg_pos", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET____cg_vel.configure(this, name(), "tt_um_zarovs_nbody.body[0].cg_vel", "cg_vel", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET__.configure(this, name(), "tt_um_zarovs_nbody.body[1]", "body[1]", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET____cg_pos.configure(this, name(), "tt_um_zarovs_nbody.body[1].cg_pos", "cg_pos", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET____cg_vel.configure(this, name(), "tt_um_zarovs_nbody.body[1].cg_vel", "cg_vel", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET__.configure(this, name(), "tt_um_zarovs_nbody.body[2]", "body[2]", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET____cg_pos.configure(this, name(), "tt_um_zarovs_nbody.body[2].cg_pos", "cg_pos", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET____cg_vel.configure(this, name(), "tt_um_zarovs_nbody.body[2].cg_vel", "cg_vel", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"ena", &(TOP.ena), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst_n", &(TOP.rst_n), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"ui_in", &(TOP.ui_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"uio_in", &(TOP.uio_in), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"uio_oe", &(TOP.uio_oe), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"uio_out", &(TOP.uio_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"uo_out", &(TOP.uo_out), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"P", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__P))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"S_A", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__S_A))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"S_D", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__S_D))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"S_IDLE", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__S_IDLE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"S_INIT", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__S_INIT))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"S_P", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__S_P))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"V", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__V))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"_unused", &(TOP.tt_um_zarovs_nbody__DOT___unused), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"a_x", &(TOP.tt_um_zarovs_nbody__DOT__a_x), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"a_y", &(TOP.tt_um_zarovs_nbody__DOT__a_y), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"ax", &(TOP.tt_um_zarovs_nbody__DOT__ax), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"ay", &(TOP.tt_um_zarovs_nbody__DOT__ay), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"b_x", &(TOP.tt_um_zarovs_nbody__DOT__b_x), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"b_y", &(TOP.tt_um_zarovs_nbody__DOT__b_y), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"bi", &(TOP.tt_um_zarovs_nbody__DOT__bi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"bj", &(TOP.tt_um_zarovs_nbody__DOT__bj), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"c0x", &(TOP.tt_um_zarovs_nbody__DOT__c0x), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"c0y", &(TOP.tt_um_zarovs_nbody__DOT__c0y), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"cin_x", &(TOP.tt_um_zarovs_nbody__DOT__cin_x), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"cin_y", &(TOP.tt_um_zarovs_nbody__DOT__cin_y), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"clk", &(TOP.tt_um_zarovs_nbody__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"cox", &(TOP.tt_um_zarovs_nbody__DOT__cox), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"coy", &(TOP.tt_um_zarovs_nbody__DOT__coy), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"cx", &(TOP.tt_um_zarovs_nbody__DOT__cx), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"cy", &(TOP.tt_um_zarovs_nbody__DOT__cy), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"d0x", &(TOP.tt_um_zarovs_nbody__DOT__d0x), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"d0y", &(TOP.tt_um_zarovs_nbody__DOT__d0y), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"d1x", &(TOP.tt_um_zarovs_nbody__DOT__d1x), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"d1y", &(TOP.tt_um_zarovs_nbody__DOT__d1y), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"d2x", &(TOP.tt_um_zarovs_nbody__DOT__d2x), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"d2y", &(TOP.tt_um_zarovs_nbody__DOT__d2y), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"dxr", &(TOP.tt_um_zarovs_nbody__DOT__dxr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"dyr", &(TOP.tt_um_zarovs_nbody__DOT__dyr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"e", &(TOP.tt_um_zarovs_nbody__DOT__e), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"e3", &(TOP.tt_um_zarovs_nbody__DOT__e3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"ena", &(TOP.tt_um_zarovs_nbody__DOT__ena), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"first", &(TOP.tt_um_zarovs_nbody__DOT__first), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"hi", &(TOP.tt_um_zarovs_nbody__DOT__hi), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"hit", &(TOP.tt_um_zarovs_nbody__DOT__hit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"hlast", &(TOP.tt_um_zarovs_nbody__DOT__hlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"hpos", &(TOP.tt_um_zarovs_nbody__DOT__hpos), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,9,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"hsync", &(TOP.tt_um_zarovs_nbody__DOT__hsync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"in_world", &(TOP.tt_um_zarovs_nbody__DOT__in_world), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"k", &(TOP.tt_um_zarovs_nbody__DOT__k), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"kon", &(TOP.tt_um_zarovs_nbody__DOT__kon), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"last_p", &(TOP.tt_um_zarovs_nbody__DOT__last_p), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"last_v", &(TOP.tt_um_zarovs_nbody__DOT__last_v), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"lo", &(TOP.tt_um_zarovs_nbody__DOT__lo), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"lut", &(TOP.tt_um_zarovs_nbody__DOT__lut), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"mant", &(TOP.tt_um_zarovs_nbody__DOT__mant), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"mexp0", &(TOP.tt_um_zarovs_nbody__DOT__mexp0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"mexp1", &(TOP.tt_um_zarovs_nbody__DOT__mexp1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"mexp2", &(TOP.tt_um_zarovs_nbody__DOT__mexp2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"mexp_j", &(TOP.tt_um_zarovs_nbody__DOT__mexp_j), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"more", &(TOP.tt_um_zarovs_nbody__DOT__more), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"o0x", &(TOP.tt_um_zarovs_nbody__DOT__o0x), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"o0y", &(TOP.tt_um_zarovs_nbody__DOT__o0y), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"o1x", &(TOP.tt_um_zarovs_nbody__DOT__o1x), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"o1y", &(TOP.tt_um_zarovs_nbody__DOT__o1y), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"o2x", &(TOP.tt_um_zarovs_nbody__DOT__o2x), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"o2y", &(TOP.tt_um_zarovs_nbody__DOT__o2y), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"oct", &(TOP.tt_um_zarovs_nbody__DOT__oct), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"on0", &(TOP.tt_um_zarovs_nbody__DOT__on0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"on1", &(TOP.tt_um_zarovs_nbody__DOT__on1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"on2", &(TOP.tt_um_zarovs_nbody__DOT__on2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"out_r", &(TOP.tt_um_zarovs_nbody__DOT__out_r), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"pair", &(TOP.tt_um_zarovs_nbody__DOT__pair), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"pause", &(TOP.tt_um_zarovs_nbody__DOT__pause), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"pb", &(TOP.tt_um_zarovs_nbody__DOT__pb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"px", &(TOP.tt_um_zarovs_nbody__DOT__px), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,10,0 ,0,2);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"py", &(TOP.tt_um_zarovs_nbody__DOT__py), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,10,0 ,0,2);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"q", &(TOP.tt_um_zarovs_nbody__DOT__q), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"rgb", &(TOP.tt_um_zarovs_nbody__DOT__rgb), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"rst_n", &(TOP.tt_um_zarovs_nbody__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"selm", &(TOP.tt_um_zarovs_nbody__DOT__selm), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"selx", &(TOP.tt_um_zarovs_nbody__DOT__selx), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"sely", &(TOP.tt_um_zarovs_nbody__DOT__sely), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"sh", &(TOP.tt_um_zarovs_nbody__DOT__sh), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"spd", &(TOP.tt_um_zarovs_nbody__DOT__spd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"start", &(TOP.tt_um_zarovs_nbody__DOT__start), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"state", &(TOP.tt_um_zarovs_nbody__DOT__state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"sx", &(TOP.tt_um_zarovs_nbody__DOT__sx), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"sxp", &(TOP.tt_um_zarovs_nbody__DOT__sxp), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"sy", &(TOP.tt_um_zarovs_nbody__DOT__sy), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"syp", &(TOP.tt_um_zarovs_nbody__DOT__syp), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"t", &(TOP.tt_um_zarovs_nbody__DOT__t), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"ui_in", &(TOP.tt_um_zarovs_nbody__DOT__ui_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"uio_in", &(TOP.tt_um_zarovs_nbody__DOT__uio_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"uio_oe", &(TOP.tt_um_zarovs_nbody__DOT__uio_oe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"uio_out", &(TOP.tt_um_zarovs_nbody__DOT__uio_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"uo_out", &(TOP.tt_um_zarovs_nbody__DOT__uo_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"visible", &(TOP.tt_um_zarovs_nbody__DOT__visible), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"vlast", &(TOP.tt_um_zarovs_nbody__DOT__vlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"vline", &(TOP.tt_um_zarovs_nbody__DOT__vline), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,5,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"vpos", &(TOP.tt_um_zarovs_nbody__DOT__vpos), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,9,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"vsx", &(TOP.tt_um_zarovs_nbody__DOT__vsx), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"vsy", &(TOP.tt_um_zarovs_nbody__DOT__vsy), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"vsync", &(TOP.tt_um_zarovs_nbody__DOT__vsync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"vx", &(TOP.tt_um_zarovs_nbody__DOT__vx), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,11,0 ,0,2);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"vxb", &(TOP.tt_um_zarovs_nbody__DOT__vxb), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"vy", &(TOP.tt_um_zarovs_nbody__DOT__vy), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,11,0 ,0,2);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"vyb", &(TOP.tt_um_zarovs_nbody__DOT__vyb), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"w0", &(TOP.tt_um_zarovs_nbody__DOT__w0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"w1", &(TOP.tt_um_zarovs_nbody__DOT__w1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"w2", &(TOP.tt_um_zarovs_nbody__DOT__w2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"wx", &(TOP.tt_um_zarovs_nbody__DOT__wx), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"wy", &(TOP.tt_um_zarovs_nbody__DOT__wy), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_tt_um_zarovs_nbody.varInsert(__Vfinal,"xbig", &(TOP.tt_um_zarovs_nbody__DOT__xbig), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET__.varInsert(__Vfinal,"VX0", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__VX0))), true, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET__.varInsert(__Vfinal,"VY0", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__VY0))), true, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET__.varInsert(__Vfinal,"X0", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__X0))), true, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET__.varInsert(__Vfinal,"Y0", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__Y0))), true, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET__.varInsert(__Vfinal,"en_pos", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__en_pos), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET__.varInsert(__Vfinal,"en_vel", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__en_vel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET__.varInsert(__Vfinal,"gclk_pos", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_pos), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET__.varInsert(__Vfinal,"gclk_vel", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__gclk_vel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET__.varInsert(__Vfinal,"init", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__init), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET__.varInsert(__Vfinal,"rvx", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rvx), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET__.varInsert(__Vfinal,"rvy", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rvy), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET__.varInsert(__Vfinal,"rx", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__rx), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET__.varInsert(__Vfinal,"ry", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__ry), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET____cg_pos.varInsert(__Vfinal,"clk", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET____cg_pos.varInsert(__Vfinal,"en", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET____cg_pos.varInsert(__Vfinal,"en_l", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__en_l), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET____cg_pos.varInsert(__Vfinal,"gclk", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_pos__DOT__gclk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET____cg_vel.varInsert(__Vfinal,"clk", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET____cg_vel.varInsert(__Vfinal,"en", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET____cg_vel.varInsert(__Vfinal,"en_l", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__en_l), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__0__KET____cg_vel.varInsert(__Vfinal,"gclk", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__0__KET____DOT__cg_vel__DOT__gclk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET__.varInsert(__Vfinal,"VX0", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__VX0))), true, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET__.varInsert(__Vfinal,"VY0", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__VY0))), true, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET__.varInsert(__Vfinal,"X0", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__X0))), true, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET__.varInsert(__Vfinal,"Y0", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__Y0))), true, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET__.varInsert(__Vfinal,"en_pos", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__en_pos), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET__.varInsert(__Vfinal,"en_vel", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__en_vel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET__.varInsert(__Vfinal,"gclk_pos", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_pos), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET__.varInsert(__Vfinal,"gclk_vel", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__gclk_vel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET__.varInsert(__Vfinal,"init", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__init), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET__.varInsert(__Vfinal,"rvx", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rvx), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET__.varInsert(__Vfinal,"rvy", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rvy), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET__.varInsert(__Vfinal,"rx", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__rx), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET__.varInsert(__Vfinal,"ry", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__ry), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET____cg_pos.varInsert(__Vfinal,"clk", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET____cg_pos.varInsert(__Vfinal,"en", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET____cg_pos.varInsert(__Vfinal,"en_l", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__en_l), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET____cg_pos.varInsert(__Vfinal,"gclk", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_pos__DOT__gclk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET____cg_vel.varInsert(__Vfinal,"clk", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET____cg_vel.varInsert(__Vfinal,"en", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET____cg_vel.varInsert(__Vfinal,"en_l", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__en_l), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__1__KET____cg_vel.varInsert(__Vfinal,"gclk", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__1__KET____DOT__cg_vel__DOT__gclk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET__.varInsert(__Vfinal,"VX0", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__VX0))), true, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET__.varInsert(__Vfinal,"VY0", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__VY0))), true, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET__.varInsert(__Vfinal,"X0", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__X0))), true, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET__.varInsert(__Vfinal,"Y0", const_cast<void*>(static_cast<const void*>(&(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__Y0))), true, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET__.varInsert(__Vfinal,"en_pos", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__en_pos), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET__.varInsert(__Vfinal,"en_vel", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__en_vel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET__.varInsert(__Vfinal,"gclk_pos", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_pos), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET__.varInsert(__Vfinal,"gclk_vel", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__gclk_vel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET__.varInsert(__Vfinal,"init", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__init), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET__.varInsert(__Vfinal,"rvx", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rvx), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET__.varInsert(__Vfinal,"rvy", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rvy), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET__.varInsert(__Vfinal,"rx", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__rx), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET__.varInsert(__Vfinal,"ry", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__ry), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET____cg_pos.varInsert(__Vfinal,"clk", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET____cg_pos.varInsert(__Vfinal,"en", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET____cg_pos.varInsert(__Vfinal,"en_l", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__en_l), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET____cg_pos.varInsert(__Vfinal,"gclk", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_pos__DOT__gclk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET____cg_vel.varInsert(__Vfinal,"clk", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET____cg_vel.varInsert(__Vfinal,"en", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET____cg_vel.varInsert(__Vfinal,"en_l", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__en_l), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_tt_um_zarovs_nbody__body__BRA__2__KET____cg_vel.varInsert(__Vfinal,"gclk", &(TOP.tt_um_zarovs_nbody__DOT__body__BRA__2__KET____DOT__cg_vel__DOT__gclk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
