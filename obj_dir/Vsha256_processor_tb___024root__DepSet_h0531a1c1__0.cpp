// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsha256_processor_tb.h for the primary calling header

#include "Vsha256_processor_tb__pch.h"
#include "Vsha256_processor_tb__Syms.h"
#include "Vsha256_processor_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsha256_processor_tb___024root___dump_triggers__act(Vsha256_processor_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsha256_processor_tb___024root___eval_triggers__act(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_hbe8e34d3__0;
    __Vtrigcurrexpr_hbe8e34d3__0 = 0;
    __Vtrigcurrexpr_hbe8e34d3__0 = (4U == (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__state));
    vlSelfRef.__VactTriggered.set(0U, (((IData)(vlSelfRef.ext_clk) 
                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ext_clk__0))) 
                                       | ((IData)(vlSelfRef.sha256_processor_tb__DOT__rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__sha256_processor_tb__DOT__rst__0)))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.ext_clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ext_clk__0))));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.ext_clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ext_clk__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(__Vtrigcurrexpr_hbe8e34d3__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr_hbe8e34d3__0)));
    vlSelfRef.__VactTriggered.set(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__ext_clk__0 = vlSelfRef.ext_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sha256_processor_tb__DOT__rst__0 
        = vlSelfRef.sha256_processor_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr_hbe8e34d3__0 = __Vtrigcurrexpr_hbe8e34d3__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsha256_processor_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
