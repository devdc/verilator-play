// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsha256_core__pch.h"

//============================================================
// Constructors

Vsha256_core::Vsha256_core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsha256_core__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsha256_core::Vsha256_core(const char* _vcname__)
    : Vsha256_core(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsha256_core::~Vsha256_core() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsha256_core___024root___eval_debug_assertions(Vsha256_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vsha256_core___024root___eval_static(Vsha256_core___024root* vlSelf);
void Vsha256_core___024root___eval_initial(Vsha256_core___024root* vlSelf);
void Vsha256_core___024root___eval_settle(Vsha256_core___024root* vlSelf);
void Vsha256_core___024root___eval(Vsha256_core___024root* vlSelf);

void Vsha256_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsha256_core::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsha256_core___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsha256_core___024root___eval_static(&(vlSymsp->TOP));
        Vsha256_core___024root___eval_initial(&(vlSymsp->TOP));
        Vsha256_core___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsha256_core___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsha256_core::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsha256_core::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsha256_core::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsha256_core___024root___eval_final(Vsha256_core___024root* vlSelf);

VL_ATTR_COLD void Vsha256_core::final() {
    Vsha256_core___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsha256_core::hierName() const { return vlSymsp->name(); }
const char* Vsha256_core::modelName() const { return "Vsha256_core"; }
unsigned Vsha256_core::threads() const { return 1; }
void Vsha256_core::prepareClone() const { contextp()->prepareClone(); }
void Vsha256_core::atClone() const {
    contextp()->threadPoolpOnClone();
}
