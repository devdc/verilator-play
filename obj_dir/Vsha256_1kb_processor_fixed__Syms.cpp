// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsha256_1kb_processor_fixed__pch.h"
#include "Vsha256_1kb_processor_fixed.h"
#include "Vsha256_1kb_processor_fixed___024root.h"

// FUNCTIONS
Vsha256_1kb_processor_fixed__Syms::~Vsha256_1kb_processor_fixed__Syms()
{
}

Vsha256_1kb_processor_fixed__Syms::Vsha256_1kb_processor_fixed__Syms(VerilatedContext* contextp, const char* namep, Vsha256_1kb_processor_fixed* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(2472);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
