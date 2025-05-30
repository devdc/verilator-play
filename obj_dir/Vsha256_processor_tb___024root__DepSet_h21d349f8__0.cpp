// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsha256_processor_tb.h for the primary calling header

#include "Vsha256_processor_tb__pch.h"
#include "Vsha256_processor_tb___024root.h"

VL_ATTR_COLD void Vsha256_processor_tb___024root___eval_initial__TOP(Vsha256_processor_tb___024root* vlSelf);
VlCoroutine Vsha256_processor_tb___024root___eval_initial__TOP__Vtiming__0(Vsha256_processor_tb___024root* vlSelf);
VlCoroutine Vsha256_processor_tb___024root___eval_initial__TOP__Vtiming__1(Vsha256_processor_tb___024root* vlSelf);

void Vsha256_processor_tb___024root___eval_initial(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsha256_processor_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vsha256_processor_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsha256_processor_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__ext_clk__0 = vlSelfRef.ext_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sha256_processor_tb__DOT__rst__0 
        = vlSelfRef.sha256_processor_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr_hbe8e34d3__0 = (4U == (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__state));
}

extern const VlWide<8>/*255:0*/ Vsha256_processor_tb__ConstPool__CONST_h7044a45f_0;

VL_INLINE_OPT VlCoroutine Vsha256_processor_tb___024root___eval_initial__TOP__Vtiming__0(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.test_complete = 0U;
    vlSelfRef.test_passed = 0U;
    vlSelfRef.sha256_processor_tb__DOT__rst = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__start = 0U;
    VL_WRITEF_NX("Starting SHA-256 processor testbench\nWaiting for clock to start...\n",0);
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Clock detected, starting reset sequence...\n",0);
    vlSelfRef.sha256_processor_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__start = 0U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Reset sequence complete, starting to feed data...\nFeeding 64 bytes of 'a' characters...\n",0);
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    VL_WRITEF_NX("Progress: 0/64 bytes processed\n",0);
    vlSelfRef.sha256_processor_tb__DOT__i = 1U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 2U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 3U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 4U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 5U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 6U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 7U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 8U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 9U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0xaU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0xbU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0xcU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0xdU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0xeU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0xfU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x10U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    VL_WRITEF_NX("Progress: 16/64 bytes processed\n",0);
    vlSelfRef.sha256_processor_tb__DOT__i = 0x11U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x12U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x13U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x14U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x15U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x16U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x17U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x18U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x19U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x1aU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x1bU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x1cU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x1dU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x1eU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x1fU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x20U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    VL_WRITEF_NX("Progress: 32/64 bytes processed\n",0);
    vlSelfRef.sha256_processor_tb__DOT__i = 0x21U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x22U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x23U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x24U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x25U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x26U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x27U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x28U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x29U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x2aU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x2bU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x2cU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x2dU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x2eU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x2fU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x30U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    VL_WRITEF_NX("Progress: 48/64 bytes processed\n",0);
    vlSelfRef.sha256_processor_tb__DOT__i = 0x31U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x32U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x33U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x34U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x35U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x36U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x37U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x38U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x39U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x3aU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x3bU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x3cU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x3dU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x3eU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x3fU;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_in = 0x61U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 1U;
    co_await vlSelfRef.__VtrigSched_h924037d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         91);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
    vlSelfRef.sha256_processor_tb__DOT__i = 0x40U;
    VL_WRITEF_NX("Data input complete, waiting for processing...\n",0);
    while ((4U != (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__state))) {
        co_await vlSelfRef.__VtrigSched_h2a3a6b26__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] (3'h4 == sha256_processor_tb.uut.state))", 
                                                             "sha256_processor_tb.v", 
                                                             104);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("Processing complete!\n",0);
    if ((0U == ((((((((Vsha256_processor_tb__ConstPool__CONST_h7044a45f_0[0U] 
                       ^ vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[0U]) 
                      | (Vsha256_processor_tb__ConstPool__CONST_h7044a45f_0[1U] 
                         ^ vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[1U])) 
                     | (Vsha256_processor_tb__ConstPool__CONST_h7044a45f_0[2U] 
                        ^ vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[2U])) 
                    | (Vsha256_processor_tb__ConstPool__CONST_h7044a45f_0[3U] 
                       ^ vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[3U])) 
                   | (Vsha256_processor_tb__ConstPool__CONST_h7044a45f_0[4U] 
                      ^ vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[4U])) 
                  | (Vsha256_processor_tb__ConstPool__CONST_h7044a45f_0[5U] 
                     ^ vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[5U])) 
                 | (Vsha256_processor_tb__ConstPool__CONST_h7044a45f_0[6U] 
                    ^ vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[6U])) 
                | (Vsha256_processor_tb__ConstPool__CONST_h7044a45f_0[7U] 
                   ^ vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[7U])))) {
        VL_WRITEF_NX("\342\234\223 Test PASSED: Hash output matches expected value\nHash: %x\n",0,
                     256,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state.data());
        vlSelfRef.test_passed = 1U;
    } else {
        VL_WRITEF_NX("\342\234\227 Test FAILED\nExpected: ffe054fe7ae0cb6dc65c3af9b61d5209f439851db43d0ba5997337df154668eb\nGot     : %x\n",0,
                     256,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state.data());
        vlSelfRef.test_passed = 0U;
    }
    vlSelfRef.test_complete = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h92403816__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge ext_clk)", 
                                                         "sha256_processor_tb.v", 
                                                         121);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("sha256_processor_tb.v", 122, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vsha256_processor_tb___024root___eval_initial__TOP__Vtiming__1(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x3b9aca00ULL, 
                                         nullptr, "sha256_processor_tb.v", 
                                         127);
    VL_WRITEF_NX("Simulation timeout - test did not complete in time!\n",0);
    vlSelfRef.test_complete = 1U;
    vlSelfRef.test_passed = 0U;
    VL_FINISH_MT("sha256_processor_tb.v", 131, "");
}

void Vsha256_processor_tb___024root___eval_act(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vsha256_processor_tb___024root___nba_sequent__TOP__0(Vsha256_processor_tb___024root* vlSelf);

void Vsha256_processor_tb___024root___eval_nba(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsha256_processor_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlWide<8>/*255:0*/ Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0;
extern const VlWide<16>/*511:0*/ Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0;
extern const VlWide<8>/*255:0*/ Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0;

VL_INLINE_OPT void Vsha256_processor_tb___024root___nba_sequent__TOP__0(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__10__Vfuncout;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__10__x;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__10__x = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__11__Vfuncout;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__11__x;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__11__x = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__12__Vfuncout;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__12__x;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__12__x = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__13__Vfuncout;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__13__x;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__13__x = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__14__Vfuncout;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__14__x;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__14__x = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__15__Vfuncout;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__15__x;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__15__x = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__16__Vfuncout;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__16__x;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__16__x = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__17__Vfuncout;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__17__x;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__17__x = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__18__Vfuncout;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__18__x;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__18__x = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__19__Vfuncout;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__19__x;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__19__x = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__20__Vfuncout;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__20__x;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__20__x = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__21__Vfuncout;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__21__x;
    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__21__x = 0;
    CData/*2:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__state;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__state = 0;
    CData/*5:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__byte_index;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__byte_index = 0;
    CData/*0:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__block_ready;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_ready = 0;
    CData/*0:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__core_busy;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__core_busy = 0;
    VlWide<8>/*255:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state;
    VL_ZERO_W(256, __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state);
    QData/*63:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__total_bits;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__total_bits = 0;
    CData/*0:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__seen_last;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__seen_last = 0;
    CData/*0:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__need_length_block;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__need_length_block = 0;
    CData/*5:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__pad_index;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__pad_index = 0;
    VlWide<16>/*511:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer;
    VL_ZERO_W(512, __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer);
    CData/*1:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state = 0;
    CData/*0:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__core_ready;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__core_ready = 0;
    VlWide<8>/*255:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out;
    VL_ZERO_W(256, __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out);
    CData/*6:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t = 0;
    CData/*6:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx = 0;
    IData/*31:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0 = 0;
    IData/*31:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1 = 0;
    IData/*31:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2 = 0;
    IData/*31:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3 = 0;
    IData/*31:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4 = 0;
    IData/*31:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5 = 0;
    IData/*31:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6 = 0;
    IData/*31:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7 = 0;
    IData/*31:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h = 0;
    IData/*31:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g = 0;
    IData/*31:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f = 0;
    IData/*31:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e = 0;
    IData/*31:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__d;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__d = 0;
    IData/*31:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c = 0;
    IData/*31:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b = 0;
    IData/*31:0*/ __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a = 0;
    IData/*31:0*/ __VdlyVal__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v64;
    __VdlyVal__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v64 = 0;
    CData/*5:0*/ __VdlyDim0__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v64;
    __VdlyDim0__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v64 = 0;
    IData/*31:0*/ __VdlyVal__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v65;
    __VdlyVal__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v65 = 0;
    CData/*5:0*/ __VdlyDim0__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v65;
    __VdlyDim0__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v65 = 0;
    CData/*0:0*/ __VdlySet__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v0;
    __VdlySet__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v0 = 0;
    CData/*0:0*/ __VdlySet__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v64;
    __VdlySet__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v64 = 0;
    CData/*0:0*/ __VdlySet__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v65;
    __VdlySet__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v65 = 0;
    // Body
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[1U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[1U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[2U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[2U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[3U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[3U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[4U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[4U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[5U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[5U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[6U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[6U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[7U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[7U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[8U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[8U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[9U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[9U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xaU] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xaU];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xbU] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xbU];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xcU] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xcU];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xdU] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xdU];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xeU] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xeU];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xfU] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xfU];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__pad_index 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__pad_index;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__need_length_block 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__need_length_block;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__seen_last 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__seen_last;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__total_bits 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__total_bits;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[0U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[0U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[1U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[1U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[2U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[2U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[3U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[3U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[4U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[4U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[5U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[5U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[6U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[6U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[7U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[7U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__core_busy 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_busy;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_ready 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_ready;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__byte_index 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__byte_index;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__state 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__state;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__d 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__d;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[0U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[0U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[1U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[1U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[2U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[2U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[3U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[3U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[4U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[4U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[5U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[5U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[6U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[6U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[7U] 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[7U];
    __Vdly__sha256_processor_tb__DOT__uut__DOT__core_ready 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_ready;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h;
    __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t 
        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t;
    __VdlySet__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v0 = 0U;
    __VdlySet__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v64 = 0U;
    __VdlySet__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v65 = 0U;
    if (VL_UNLIKELY(vlSelfRef.sha256_processor_tb__DOT__rst)) {
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__i = 0x40U;
        VL_WRITEF_NX("RESET: sha256_core reset\n",0);
        __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state = 0U;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__core_ready = 0U;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[0U] 
            = Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0[0U];
        __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[1U] 
            = Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0[1U];
        __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[2U] 
            = Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0[2U];
        __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[3U] 
            = Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0[3U];
        __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[4U] 
            = Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0[4U];
        __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[5U] 
            = Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0[5U];
        __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[6U] 
            = Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0[6U];
        __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[7U] 
            = Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0[7U];
        __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t = 0U;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx = 0U;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0 = 0x6a09e667U;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1 = 0xbb67ae85U;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2 = 0x3c6ef372U;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3 = 0xa54ff53aU;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4 = 0x510e527fU;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5 = 0x9b05688cU;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6 = 0x1f83d9abU;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7 = 0x5be0cd19U;
        __VdlySet__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v0 = 1U;
    } else if ((2U & (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state))) {
        if (VL_UNLIKELY((1U & (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state)))) {
            __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[0U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[1U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[2U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[3U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[4U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[5U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[6U] 
                = (IData)((((QData)((IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0)) 
                            << 0x20U) | (QData)((IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1))));
            __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[7U] 
                = (IData)(((((QData)((IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0)) 
                             << 0x20U) | (QData)((IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1))) 
                           >> 0x20U));
            __Vdly__sha256_processor_tb__DOT__uut__DOT__core_ready = 1U;
            if ((1U & (~ (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_start)))) {
                __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state = 0U;
            }
            VL_WRITEF_NX("DONE: Final hash = %x%x%x%x%x%x%x%x\n",0,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7);
        } else if (VL_LIKELY((0x40U > (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t)))) {
            VL_WRITEF_NX("COMP: Round t=%2#\nRound %2#: a=%x b=%x c=%x d=%x e=%x f=%x g=%x h=%x\nT1=%x T2=%x w[t]=%x\n",0,
                         7,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t,
                         7,(IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t),
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__d,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__T1,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__T2,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w
                         [(0x3fU & (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t))]);
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e 
                = (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__d 
                   + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__T1);
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__d 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t)));
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a 
                = (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__T1 
                   + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__T2);
        } else {
            VL_WRITEF_NX("COMP -> DONE: All 64 rounds completed\n",0);
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0 
                = (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0 
                   + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a);
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state = 3U;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1 
                = (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1 
                   + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b);
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2 
                = (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2 
                   + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c);
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3 
                = (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3 
                   + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__d);
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4 
                = (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4 
                   + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e);
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5 
                = (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5 
                   + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f);
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6 
                = (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6 
                   + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g);
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7 
                = (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7 
                   + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h);
            VL_WRITEF_NX("Final hash values: h0=%x+%x h1=%x+%x h2=%x+%x h3=%x+%x\n                   h4=%x+%x h5=%x+%x h6=%x+%x h7=%x+%x\n",0,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__d,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h);
        }
    } else if ((1U & (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state))) {
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx)))) {
            VL_WRITEF_NX("PREP: Preparing message schedule\n",0);
        }
        if (VL_UNLIKELY((0x10U > (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx)))) {
            __VdlyVal__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v64 
                = (((0U == (0x1fU & (((IData)(0x1ffU) 
                                      - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx), 5U)) 
                                     - (IData)(0x1fU))))
                     ? 0U : (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[
                             (((IData)(0x1fU) + (0x1ffU 
                                                 & (((IData)(0x1ffU) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx), 5U)) 
                                                    - (IData)(0x1fU)))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & (((IData)(0x1ffU) 
                                                 - 
                                                 VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx), 5U)) 
                                                - (IData)(0x1fU)))))) 
                   | (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[
                      (0xfU & ((((IData)(0x1ffU) - 
                                 VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx), 5U)) 
                                - (IData)(0x1fU)) >> 5U))] 
                      >> (0x1fU & (((IData)(0x1ffU) 
                                    - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx), 5U)) 
                                   - (IData)(0x1fU)))));
            __VdlyDim0__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v64 
                = (0x3fU & (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx));
            __VdlySet__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v64 = 1U;
            VL_WRITEF_NX("w[%2#] = %x\n",0,7,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx,
                         32,(((0U == (0x1fU & (((IData)(0x1ffU) 
                                                - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx), 5U)) 
                                               - (IData)(0x1fU))))
                               ? 0U : (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[
                                       (((IData)(0x1fU) 
                                         + (0x1ffU 
                                            & (((IData)(0x1ffU) 
                                                - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx), 5U)) 
                                               - (IData)(0x1fU)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           (((IData)(0x1ffU) 
                                             - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx), 5U)) 
                                            - (IData)(0x1fU)))))) 
                             | (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[
                                (0xfU & ((((IData)(0x1ffU) 
                                           - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx), 5U)) 
                                          - (IData)(0x1fU)) 
                                         >> 5U))] >> 
                                (0x1fU & (((IData)(0x1ffU) 
                                           - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx), 5U)) 
                                          - (IData)(0x1fU))))));
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx)));
        } else if ((0x40U > (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx))) {
            __VdlyVal__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v65 
                = (((([&]() {
                                __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__10__x 
                                    = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w
                                    [(0x3fU & ((IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx) 
                                               - (IData)(2U)))];
                                __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__10__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__11__x 
                                                    = __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__10__x;
                                                __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__11__Vfuncout 
                                                    = 
                                                    (VL_SHIFTR_III(32,32,8, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__11__x, 0x11U) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__11__x, 0xfU));
                                            }(), __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__11__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__12__x 
                                                    = __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__10__x;
                                                __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__12__Vfuncout 
                                                    = 
                                                    (VL_SHIFTR_III(32,32,8, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__12__x, 0x13U) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__12__x, 0xdU));
                                            }(), __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__12__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__10__x, 0xaU));
                            }(), __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__10__Vfuncout) 
                     + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w
                     [(0x3fU & ((IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx) 
                                - (IData)(7U)))]) + 
                    ([&]() {
                            __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__13__x 
                                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w
                                [(0x3fU & ((IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx) 
                                           - (IData)(0xfU)))];
                            __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__13__Vfuncout 
                                = ((([&]() {
                                            __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__14__x 
                                                = __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__13__x;
                                            __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__14__Vfuncout 
                                                = (
                                                   VL_SHIFTR_III(32,32,8, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__14__x, 7U) 
                                                   | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__14__x, 0x19U));
                                        }(), __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__14__Vfuncout) 
                                    ^ ([&]() {
                                            __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__15__x 
                                                = __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__13__x;
                                            __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__15__Vfuncout 
                                                = (
                                                   VL_SHIFTR_III(32,32,8, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__15__x, 0x12U) 
                                                   | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__15__x, 0xeU));
                                        }(), __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__15__Vfuncout)) 
                                   ^ VL_SHIFTR_III(32,32,32, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__13__x, 3U));
                        }(), __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__13__Vfuncout)) 
                   + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w
                   [(0x3fU & ((IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx) 
                              - (IData)(0x10U)))]);
            __VdlyDim0__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v65 
                = (0x3fU & (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx));
            __VdlySet__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v65 = 1U;
            VL_WRITEF_NX("w[%2#] = %x (extended)\n",0,
                         7,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx,
                         32,(((([&]() {
                                        __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__16__x 
                                            = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w
                                            [(0x3fU 
                                              & ((IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx) 
                                                 - (IData)(2U)))];
                                        __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__16__Vfuncout 
                                            = ((([&]() {
                                                        __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__17__x 
                                                            = __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__16__x;
                                                        __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__17__Vfuncout 
                                                            = 
                                                            (VL_SHIFTR_III(32,32,8, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__17__x, 0x11U) 
                                                             | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__17__x, 0xfU));
                                                    }(), __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__17__Vfuncout) 
                                                ^ ([&]() {
                                                        __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__18__x 
                                                            = __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__16__x;
                                                        __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__18__Vfuncout 
                                                            = 
                                                            (VL_SHIFTR_III(32,32,8, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__18__x, 0x13U) 
                                                             | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__18__x, 0xdU));
                                                    }(), __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__18__Vfuncout)) 
                                               ^ VL_SHIFTR_III(32,32,32, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__16__x, 0xaU));
                                    }(), __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig1__16__Vfuncout) 
                               + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w
                               [(0x3fU & ((IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx) 
                                          - (IData)(7U)))]) 
                              + ([&]() {
                                    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__19__x 
                                        = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w
                                        [(0x3fU & ((IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx) 
                                                   - (IData)(0xfU)))];
                                    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__19__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__20__x 
                                                        = __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__19__x;
                                                    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__20__Vfuncout 
                                                        = 
                                                        (VL_SHIFTR_III(32,32,8, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__20__x, 7U) 
                                                         | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__20__x, 0x19U));
                                                }(), __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__20__Vfuncout) 
                                            ^ ([&]() {
                                                    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__21__x 
                                                        = __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__19__x;
                                                    __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__21__Vfuncout 
                                                        = 
                                                        (VL_SHIFTR_III(32,32,8, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__21__x, 0x12U) 
                                                         | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__21__x, 0xeU));
                                                }(), __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__21__Vfuncout)) 
                                           ^ VL_SHIFTR_III(32,32,32, __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__19__x, 3U));
                                }(), __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sig0__19__Vfuncout)) 
                             + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w
                             [(0x3fU & ((IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx) 
                                        - (IData)(0x10U)))]));
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx)));
        } else {
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t = 0U;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state = 2U;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__d 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7;
            VL_WRITEF_NX("Working vars initialized to: a=%x b=%x c=%x d=%x e=%x f=%x g=%x h=%x\n",0,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6,
                         32,vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7);
        }
    } else if (VL_UNLIKELY(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_start)) {
        VL_WRITEF_NX("IDLE -> PREP: Starting SHA-256 computation\n",0);
        __Vdly__sha256_processor_tb__DOT__uut__DOT__core_ready = 0U;
        if (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_use_init) {
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[7U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[6U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[5U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[4U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[3U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[2U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[1U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[0U];
        } else {
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0 = 0x6a09e667U;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1 = 0xbb67ae85U;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2 = 0x3c6ef372U;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3 = 0xa54ff53aU;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4 = 0x510e527fU;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5 = 0x9b05688cU;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6 = 0x1f83d9abU;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7 = 0x5be0cd19U;
        }
        __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx = 0U;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state = 1U;
    }
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__d 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__d;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e;
    if (__VdlySet__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v0) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v64) {
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w[__VdlyDim0__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v64] 
            = __VdlyVal__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v64;
    }
    if (__VdlySet__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v65) {
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w[__VdlyDim0__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v65] 
            = __VdlyVal__sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w__v65;
    }
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__T2 
        = (([&]() {
                vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sigma0__5__x 
                    = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a;
                vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sigma0__5__Vfuncout 
                    = ((([&]() {
                                vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__6__x 
                                    = vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sigma0__5__x;
                                vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__6__Vfuncout 
                                    = (VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__6__x, 2U) 
                                       | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__6__x, 0x1eU));
                            }(), vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__6__Vfuncout) 
                        ^ ([&]() {
                                vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__7__x 
                                    = vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sigma0__5__x;
                                vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__7__Vfuncout 
                                    = (VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__7__x, 0xdU) 
                                       | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__7__x, 0x13U));
                            }(), vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__7__Vfuncout)) 
                       ^ ([&]() {
                            vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__8__x 
                                = vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sigma0__5__x;
                            vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__8__Vfuncout 
                                = (VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__8__x, 0x16U) 
                                   | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__8__x, 0xaU));
                        }(), vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__8__Vfuncout));
            }(), vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sigma0__5__Vfuncout) 
           + ([&]() {
                vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__maj__9__z 
                    = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c;
                vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__maj__9__y 
                    = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b;
                vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__maj__9__x 
                    = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a;
                vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__maj__9__Vfuncout 
                    = (((vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__maj__9__x 
                         & vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__maj__9__y) 
                        ^ (vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__maj__9__x 
                           & vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__maj__9__z)) 
                       ^ (vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__maj__9__y 
                          & vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__maj__9__z));
            }(), vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__maj__9__Vfuncout));
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__T1 
        = ((((vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h 
              + ([&]() {
                            vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sigma1__0__x 
                                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e;
                            vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sigma1__0__Vfuncout 
                                = ((([&]() {
                                            vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__1__x 
                                                = vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sigma1__0__x;
                                            vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__1__Vfuncout 
                                                = (
                                                   VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__1__x, 6U) 
                                                   | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__1__x, 0x1aU));
                                        }(), vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__1__Vfuncout) 
                                    ^ ([&]() {
                                            vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__2__x 
                                                = vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sigma1__0__x;
                                            vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__2__Vfuncout 
                                                = (
                                                   VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__2__x, 0xbU) 
                                                   | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__2__x, 0x15U));
                                        }(), vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__2__Vfuncout)) 
                                   ^ ([&]() {
                                        vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__3__x 
                                            = vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sigma1__0__x;
                                        vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__3__Vfuncout 
                                            = (VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__3__x, 0x19U) 
                                               | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__3__x, 7U));
                                    }(), vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__3__Vfuncout));
                        }(), vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sigma1__0__Vfuncout)) 
             + ([&]() {
                        vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ch__4__z 
                            = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g;
                        vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ch__4__y 
                            = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f;
                        vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ch__4__x 
                            = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e;
                        vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ch__4__Vfuncout 
                            = ((vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ch__4__x 
                                & vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ch__4__y) 
                               ^ ((~ vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ch__4__x) 
                                  & vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ch__4__z));
                    }(), vlSelfRef.__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ch__4__Vfuncout)) 
            + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K
            [(0x3fU & (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t))]) 
           + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w
           [(0x3fU & (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t))]);
    if (vlSelfRef.sha256_processor_tb__DOT__rst) {
        __Vdly__sha256_processor_tb__DOT__uut__DOT__state = 0U;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__byte_index = 0U;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__block_ready = 0U;
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_start = 0U;
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[0U] 
            = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[0U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[1U] 
            = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[1U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[2U] 
            = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[2U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[3U] 
            = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[3U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[4U] 
            = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[4U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[5U] 
            = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[5U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[6U] 
            = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[6U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[7U] 
            = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[7U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[8U] 
            = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[8U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[9U] 
            = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[9U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[0xaU] 
            = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[0xbU] 
            = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[0xcU] 
            = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[0xdU] 
            = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[0xeU] 
            = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[0xfU] 
            = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[0U] 
            = Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[1U] 
            = Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[2U] 
            = Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[3U] 
            = Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[4U] 
            = Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[5U] 
            = Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[6U] 
            = Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[7U] 
            = Vsha256_processor_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_use_init = 0U;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__core_busy = 0U;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[0U] 
            = Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0[0U];
        __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[1U] 
            = Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0[1U];
        __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[2U] 
            = Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0[2U];
        __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[3U] 
            = Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0[3U];
        __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[4U] 
            = Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0[4U];
        __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[5U] 
            = Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0[5U];
        __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[6U] 
            = Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0[6U];
        __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[7U] 
            = Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0[7U];
        __Vdly__sha256_processor_tb__DOT__uut__DOT__total_bits = 0ULL;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__seen_last = 0U;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__need_length_block = 0U;
        __Vdly__sha256_processor_tb__DOT__uut__DOT__pad_index = 0U;
    } else if ((0U == (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__state))) {
        if (vlSelfRef.sha256_processor_tb__DOT__start) {
            __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[0U] 
                = Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0[0U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[1U] 
                = Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0[1U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[2U] 
                = Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0[2U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[3U] 
                = Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0[3U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[4U] 
                = Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0[4U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[5U] 
                = Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0[5U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[6U] 
                = Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0[6U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[7U] 
                = Vsha256_processor_tb__ConstPool__CONST_ha51a22ca_0[7U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__state = 1U;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__byte_index = 0U;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__total_bits = 0ULL;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__seen_last = 0U;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__need_length_block = 0U;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__pad_index = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__state))) {
        if (vlSelfRef.sha256_processor_tb__DOT__data_valid) {
            __Vdly__sha256_processor_tb__DOT__uut__DOT__total_bits 
                = (8ULL + vlSelfRef.sha256_processor_tb__DOT__uut__DOT__total_bits);
            VL_ASSIGNSEL_WI(512,8,(0x1ffU & (((IData)(0x1ffU) 
                                              - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__byte_index), 3U)) 
                                             - (IData)(7U))), __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer, vlSelfRef.sha256_processor_tb__DOT__data_in);
            if (vlSelfRef.sha256_processor_tb__DOT__data_last) {
                __Vdly__sha256_processor_tb__DOT__uut__DOT__seen_last = 1U;
                if ((0x40U == ((IData)(1U) + (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__byte_index)))) {
                    __Vdly__sha256_processor_tb__DOT__uut__DOT__byte_index 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__byte_index)));
                    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_ready = 1U;
                    __Vdly__sha256_processor_tb__DOT__uut__DOT__state = 3U;
                    __Vdly__sha256_processor_tb__DOT__uut__DOT__need_length_block = 1U;
                } else {
                    __Vdly__sha256_processor_tb__DOT__uut__DOT__byte_index 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__byte_index)));
                    __Vdly__sha256_processor_tb__DOT__uut__DOT__state = 2U;
                }
            } else {
                __Vdly__sha256_processor_tb__DOT__uut__DOT__byte_index 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__byte_index)));
                if ((0x40U == ((IData)(1U) + (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__byte_index)))) {
                    __Vdly__sha256_processor_tb__DOT__uut__DOT__block_ready = 1U;
                    __Vdly__sha256_processor_tb__DOT__uut__DOT__state = 3U;
                }
            }
        } else if (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__seen_last) {
            __Vdly__sha256_processor_tb__DOT__uut__DOT__state = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__state))) {
        if ((0U == (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__pad_index))) {
            VL_ASSIGNSEL_WI(512,8,(0x1ffU & (((IData)(0x1ffU) 
                                              - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__byte_index), 3U)) 
                                             - (IData)(7U))), __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer, 0x80U);
            __Vdly__sha256_processor_tb__DOT__uut__DOT__pad_index 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__byte_index)));
            __Vdly__sha256_processor_tb__DOT__uut__DOT__need_length_block 
                = (0x38U <= (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__byte_index));
        } else if (((0x38U > (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__pad_index)) 
                    | (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__need_length_block))) {
            VL_ASSIGNSEL_WI(512,8,(0x1ffU & (((IData)(0x1ffU) 
                                              - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__pad_index), 3U)) 
                                             - (IData)(7U))), __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer, 0U);
            __Vdly__sha256_processor_tb__DOT__uut__DOT__pad_index 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__pad_index)));
        } else {
            if ((1U & (~ (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__need_length_block)))) {
                vlSelfRef.sha256_processor_tb__DOT__uut__DOT__i = 8U;
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0U] 
                    = (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__total_bits);
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[1U] 
                    = (IData)((vlSelfRef.sha256_processor_tb__DOT__uut__DOT__total_bits 
                               >> 0x20U));
            }
            __Vdly__sha256_processor_tb__DOT__uut__DOT__block_ready = 1U;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__state = 3U;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__pad_index = 0U;
        }
    } else if ((3U == (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__state))) {
        if (((IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_ready) 
             & (~ (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_busy)))) {
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[0U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[1U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[1U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[2U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[2U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[3U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[3U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[4U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[4U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[5U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[5U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[6U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[6U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[7U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[7U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[8U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[8U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[9U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[9U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[0xaU] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xaU];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[0xbU] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xbU];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[0xcU] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xcU];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[0xdU] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xdU];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[0xeU] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xeU];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block[0xfU] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xfU];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[0U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[0U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[1U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[1U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[2U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[2U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[3U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[3U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[4U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[4U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[5U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[5U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[6U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[6U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init[7U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[7U];
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_use_init = 1U;
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_start = 1U;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__block_ready = 0U;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__core_busy = 1U;
        } else {
            vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_start = 0U;
        }
        if (vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_ready) {
            __Vdly__sha256_processor_tb__DOT__uut__DOT__core_busy = 0U;
            __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[0U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[0U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[1U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[1U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[2U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[2U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[3U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[3U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[4U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[4U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[5U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[5U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[6U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[6U];
            __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[7U] 
                = vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[7U];
            if (((IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__seen_last) 
                 & (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__need_length_block))) {
                vlSelfRef.sha256_processor_tb__DOT__uut__DOT__i = 8U;
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0U] 
                    = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[0U];
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[1U] 
                    = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[1U];
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[2U] 
                    = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[2U];
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[3U] 
                    = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[3U];
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[4U] 
                    = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[4U];
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[5U] 
                    = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[5U];
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[6U] 
                    = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[6U];
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[7U] 
                    = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[7U];
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[8U] 
                    = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[8U];
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[9U] 
                    = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[9U];
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xaU] 
                    = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[0xaU];
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xbU] 
                    = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[0xbU];
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xcU] 
                    = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[0xcU];
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xdU] 
                    = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[0xdU];
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xeU] 
                    = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[0xeU];
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xfU] 
                    = Vsha256_processor_tb__ConstPool__CONST_h93e1b771_0[0xfU];
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_ready = 1U;
                __Vdly__sha256_processor_tb__DOT__uut__DOT__need_length_block = 0U;
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xfU] 
                    = (0x80000000U | (0xffffffU & __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xfU]));
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0U] 
                    = (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__total_bits);
                __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[1U] 
                    = (IData)((vlSelfRef.sha256_processor_tb__DOT__uut__DOT__total_bits 
                               >> 0x20U));
            } else if (((IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__seen_last) 
                        & (~ (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__need_length_block)))) {
                __Vdly__sha256_processor_tb__DOT__uut__DOT__state = 4U;
            } else {
                __Vdly__sha256_processor_tb__DOT__uut__DOT__byte_index = 0U;
                __Vdly__sha256_processor_tb__DOT__uut__DOT__state = 1U;
            }
        }
    } else if ((4U == (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__state))) {
        vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_start = 0U;
    }
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_ready 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__core_ready;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[0U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[0U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[1U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[1U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[2U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[2U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[3U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[3U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[4U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[4U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[5U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[5U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[6U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[6U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out[7U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__core_hash_out[7U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__state 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__state;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__byte_index 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__byte_index;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_ready 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_ready;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_busy 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__core_busy;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[0U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[0U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[1U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[1U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[2U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[2U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[3U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[3U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[4U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[4U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[5U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[5U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[6U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[6U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state[7U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__hash_state[7U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__total_bits 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__total_bits;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__seen_last 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__seen_last;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__need_length_block 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__need_length_block;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__pad_index 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__pad_index;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[1U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[1U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[2U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[2U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[3U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[3U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[4U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[4U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[5U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[5U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[6U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[6U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[7U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[7U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[8U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[8U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[9U] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[9U];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xaU] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xaU];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xbU] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xbU];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xcU] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xcU];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xdU] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xdU];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xeU] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xeU];
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer[0xfU] 
        = __Vdly__sha256_processor_tb__DOT__uut__DOT__block_buffer[0xfU];
}

void Vsha256_processor_tb___024root___timing_commit(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h92403816__0.commit(
                                                   "@(posedge ext_clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h924037d5__0.commit(
                                                   "@(negedge ext_clk)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h2a3a6b26__0.commit(
                                                   "@([changed] (3'h4 == sha256_processor_tb.uut.state))");
    }
}

void Vsha256_processor_tb___024root___timing_resume(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h92403816__0.resume(
                                                   "@(posedge ext_clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h924037d5__0.resume(
                                                   "@(negedge ext_clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h2a3a6b26__0.resume(
                                                   "@([changed] (3'h4 == sha256_processor_tb.uut.state))");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsha256_processor_tb___024root___eval_triggers__act(Vsha256_processor_tb___024root* vlSelf);

bool Vsha256_processor_tb___024root___eval_phase__act(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsha256_processor_tb___024root___eval_triggers__act(vlSelf);
    Vsha256_processor_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsha256_processor_tb___024root___timing_resume(vlSelf);
        Vsha256_processor_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsha256_processor_tb___024root___eval_phase__nba(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsha256_processor_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsha256_processor_tb___024root___dump_triggers__nba(Vsha256_processor_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsha256_processor_tb___024root___dump_triggers__act(Vsha256_processor_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vsha256_processor_tb___024root___eval(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsha256_processor_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sha256_processor_tb.v", 11, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vsha256_processor_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sha256_processor_tb.v", 11, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsha256_processor_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsha256_processor_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsha256_processor_tb___024root___eval_debug_assertions(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.ext_clk & 0xfeU))) {
        Verilated::overWidthError("ext_clk");}
}
#endif  // VL_DEBUG
