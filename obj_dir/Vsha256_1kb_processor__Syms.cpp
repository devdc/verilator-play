// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsha256_1kb_processor__pch.h"
#include "Vsha256_1kb_processor.h"
#include "Vsha256_1kb_processor___024root.h"

// FUNCTIONS
Vsha256_1kb_processor__Syms::~Vsha256_1kb_processor__Syms()
{
}

Vsha256_1kb_processor__Syms::Vsha256_1kb_processor__Syms(VerilatedContext* contextp, const char* namep, Vsha256_1kb_processor* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(2408);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
