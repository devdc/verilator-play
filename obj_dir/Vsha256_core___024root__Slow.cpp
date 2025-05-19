// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsha256_core.h for the primary calling header

#include "Vsha256_core__pch.h"
#include "Vsha256_core__Syms.h"
#include "Vsha256_core___024root.h"

void Vsha256_core___024root___ctor_var_reset(Vsha256_core___024root* vlSelf);

Vsha256_core___024root::Vsha256_core___024root(Vsha256_core__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsha256_core___024root___ctor_var_reset(this);
}

void Vsha256_core___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsha256_core___024root::~Vsha256_core___024root() {
}
