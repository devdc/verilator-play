// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsha256_processor_tb.h for the primary calling header

#include "Vsha256_processor_tb__pch.h"
#include "Vsha256_processor_tb___024root.h"

VL_ATTR_COLD void Vsha256_processor_tb___024root___eval_static__TOP(Vsha256_processor_tb___024root* vlSelf);

VL_ATTR_COLD void Vsha256_processor_tb___024root___eval_static(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsha256_processor_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vsha256_processor_tb___024root___eval_static__TOP(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sha256_processor_tb__DOT__rst = 0U;
    vlSelfRef.sha256_processor_tb__DOT__start = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_valid = 0U;
    vlSelfRef.sha256_processor_tb__DOT__data_last = 0U;
}

VL_ATTR_COLD void Vsha256_processor_tb___024root___eval_initial__TOP(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0U] = 0x428a2f98U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[1U] = 0x71374491U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[2U] = 0xb5c0fbcfU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[3U] = 0xe9b5dba5U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[4U] = 0x3956c25bU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[5U] = 0x59f111f1U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[6U] = 0x923f82a4U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[7U] = 0xab1c5ed5U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[8U] = 0xd807aa98U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[9U] = 0x12835b01U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0xaU] = 0x243185beU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0xbU] = 0x550c7dc3U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0xcU] = 0x72be5d74U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0xdU] = 0x80deb1feU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0xeU] = 0x9bdc06a7U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0xfU] = 0xc19bf174U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x10U] = 0xe49b69c1U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x11U] = 0xefbe4786U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x12U] = 0xfc19dc6U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x13U] = 0x240ca1ccU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x14U] = 0x2de92c6fU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x15U] = 0x4a7484aaU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x16U] = 0x5cb0a9dcU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x17U] = 0x76f988daU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x18U] = 0x983e5152U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x19U] = 0xa831c66dU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x1aU] = 0xb00327c8U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x1bU] = 0xbf597fc7U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x1cU] = 0xc6e00bf3U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x1dU] = 0xd5a79147U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x1eU] = 0x6ca6351U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x1fU] = 0x14292967U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x20U] = 0x27b70a85U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x21U] = 0x2e1b2138U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x22U] = 0x4d2c6dfcU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x23U] = 0x53380d13U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x24U] = 0x650a7354U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x25U] = 0x766a0abbU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x26U] = 0x81c2c92eU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x27U] = 0x92722c85U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x28U] = 0xa2bfe8a1U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x29U] = 0xa81a664bU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x2aU] = 0xc24b8b70U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x2bU] = 0xc76c51a3U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x2cU] = 0xd192e819U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x2dU] = 0xd6990624U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x2eU] = 0xf40e3585U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x2fU] = 0x106aa070U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x30U] = 0x19a4c116U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x31U] = 0x1e376c08U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x32U] = 0x2748774cU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x33U] = 0x34b0bcb5U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x34U] = 0x391c0cb3U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x35U] = 0x4ed8aa4aU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x36U] = 0x5b9cca4fU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x37U] = 0x682e6ff3U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x38U] = 0x748f82eeU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x39U] = 0x78a5636fU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x3aU] = 0x84c87814U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x3bU] = 0x8cc70208U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x3cU] = 0x90befffaU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x3dU] = 0xa4506cebU;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x3eU] = 0xbef9a3f7U;
    vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[0x3fU] = 0xc67178f2U;
}

VL_ATTR_COLD void Vsha256_processor_tb___024root___eval_final(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsha256_processor_tb___024root___dump_triggers__stl(Vsha256_processor_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsha256_processor_tb___024root___eval_phase__stl(Vsha256_processor_tb___024root* vlSelf);

VL_ATTR_COLD void Vsha256_processor_tb___024root___eval_settle(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vsha256_processor_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sha256_processor_tb.v", 11, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsha256_processor_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsha256_processor_tb___024root___dump_triggers__stl(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsha256_processor_tb___024root___stl_sequent__TOP__0(Vsha256_processor_tb___024root* vlSelf);

VL_ATTR_COLD void Vsha256_processor_tb___024root___eval_stl(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsha256_processor_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vsha256_processor_tb___024root___stl_sequent__TOP__0(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_ATTR_COLD void Vsha256_processor_tb___024root___eval_triggers__stl(Vsha256_processor_tb___024root* vlSelf);

VL_ATTR_COLD bool Vsha256_processor_tb___024root___eval_phase__stl(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsha256_processor_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsha256_processor_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsha256_processor_tb___024root___dump_triggers__act(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge ext_clk or posedge sha256_processor_tb.rst)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge ext_clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge ext_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] (3'h4 == sha256_processor_tb.uut.state))\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsha256_processor_tb___024root___dump_triggers__nba(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge ext_clk or posedge sha256_processor_tb.rst)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge ext_clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge ext_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] (3'h4 == sha256_processor_tb.uut.state))\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsha256_processor_tb___024root___ctor_var_reset(Vsha256_processor_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->ext_clk = VL_RAND_RESET_I(1);
    vlSelf->test_complete = VL_RAND_RESET_I(1);
    vlSelf->test_passed = VL_RAND_RESET_I(1);
    vlSelf->sha256_processor_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->sha256_processor_tb__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->sha256_processor_tb__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->sha256_processor_tb__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->sha256_processor_tb__DOT__data_last = VL_RAND_RESET_I(1);
    vlSelf->sha256_processor_tb__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->sha256_processor_tb__DOT__uut__DOT__block_buffer);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__byte_index = VL_RAND_RESET_I(6);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__block_ready = VL_RAND_RESET_I(1);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(256, vlSelf->sha256_processor_tb__DOT__uut__DOT__core_hash_out);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__core_ready = VL_RAND_RESET_I(1);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__core_start = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->sha256_processor_tb__DOT__uut__DOT__core_block);
    VL_RAND_RESET_W(256, vlSelf->sha256_processor_tb__DOT__uut__DOT__core_hash_init);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__core_use_init = VL_RAND_RESET_I(1);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__core_busy = VL_RAND_RESET_I(1);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__core_ready_prev = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->sha256_processor_tb__DOT__uut__DOT__hash_state);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__total_bits = VL_RAND_RESET_Q(64);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__seen_last = VL_RAND_RESET_I(1);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__need_length_block = VL_RAND_RESET_I(1);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__pad_index = VL_RAND_RESET_I(6);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__d = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0 = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2 = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3 = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4 = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5 = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6 = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t = VL_RAND_RESET_I(7);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx = VL_RAND_RESET_I(7);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__T1 = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__T2 = VL_RAND_RESET_I(32);
    vlSelf->sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sigma1__0__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sigma1__0__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__1__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__1__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__2__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__2__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__3__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__3__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ch__4__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ch__4__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ch__4__y = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ch__4__z = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sigma0__5__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__sigma0__5__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__6__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__6__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__7__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__7__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__8__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__rightrotate__8__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__maj__9__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__maj__9__x = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__maj__9__y = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__maj__9__z = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__ext_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__sha256_processor_tb__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_hbe8e34d3__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
