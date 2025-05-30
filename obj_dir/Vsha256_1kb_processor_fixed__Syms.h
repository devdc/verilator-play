// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSHA256_1KB_PROCESSOR_FIXED__SYMS_H_
#define VERILATED_VSHA256_1KB_PROCESSOR_FIXED__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsha256_1kb_processor_fixed.h"

// INCLUDE MODULE CLASSES
#include "Vsha256_1kb_processor_fixed___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsha256_1kb_processor_fixed__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsha256_1kb_processor_fixed* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsha256_1kb_processor_fixed___024root TOP;

    // CONSTRUCTORS
    Vsha256_1kb_processor_fixed__Syms(VerilatedContext* contextp, const char* namep, Vsha256_1kb_processor_fixed* modelp);
    ~Vsha256_1kb_processor_fixed__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
