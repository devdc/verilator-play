// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsha256_core.h for the primary calling header

#include "Vsha256_core__pch.h"
#include "Vsha256_core__Syms.h"
#include "Vsha256_core___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsha256_core___024root___dump_triggers__act(Vsha256_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vsha256_core___024root___eval_triggers__act(Vsha256_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_core___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (((IData)(vlSelfRef.sha256_tb__DOT__clk) 
                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sha256_tb__DOT__clk__0))) 
                                       | ((IData)(vlSelfRef.sha256_tb__DOT__rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sha256_tb__DOT__rst__0)))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.sha256_tb__DOT__ready) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sha256_tb__DOT__ready__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__sha256_tb__DOT__clk__0 
        = vlSelfRef.sha256_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sha256_tb__DOT__rst__0 
        = vlSelfRef.sha256_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__sha256_tb__DOT__ready__0 
        = vlSelfRef.sha256_tb__DOT__ready;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsha256_core___024root___dump_triggers__act(vlSelf);
    }
#endif
}
