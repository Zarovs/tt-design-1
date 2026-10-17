// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTT_UM_ZAROVS_NBODY__SYMS_H_
#define VERILATED_VTT_UM_ZAROVS_NBODY__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtt_um_zarovs_nbody.h"

// INCLUDE MODULE CLASSES
#include "Vtt_um_zarovs_nbody___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtt_um_zarovs_nbody__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtt_um_zarovs_nbody* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtt_um_zarovs_nbody___024root  TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_tt_um_zarovs_nbody;

    // CONSTRUCTORS
    Vtt_um_zarovs_nbody__Syms(VerilatedContext* contextp, const char* namep, Vtt_um_zarovs_nbody* modelp);
    ~Vtt_um_zarovs_nbody__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
