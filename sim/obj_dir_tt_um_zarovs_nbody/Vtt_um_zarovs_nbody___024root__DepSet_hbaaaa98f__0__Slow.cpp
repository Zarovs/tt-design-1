// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtt_um_zarovs_nbody.h for the primary calling header

#include "Vtt_um_zarovs_nbody__pch.h"
#include "Vtt_um_zarovs_nbody__Syms.h"
#include "Vtt_um_zarovs_nbody___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___dump_triggers__stl(Vtt_um_zarovs_nbody___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtt_um_zarovs_nbody___024root___eval_triggers__stl(Vtt_um_zarovs_nbody___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtt_um_zarovs_nbody__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtt_um_zarovs_nbody___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtt_um_zarovs_nbody___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
