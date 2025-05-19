// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsha256_core.h for the primary calling header

#include "Vsha256_core__pch.h"
#include "Vsha256_core___024root.h"

VL_ATTR_COLD void Vsha256_core___024root___eval_initial__TOP(Vsha256_core___024root* vlSelf);
VlCoroutine Vsha256_core___024root___eval_initial__TOP__Vtiming__0(Vsha256_core___024root* vlSelf);
VlCoroutine Vsha256_core___024root___eval_initial__TOP__Vtiming__1(Vsha256_core___024root* vlSelf);

void Vsha256_core___024root___eval_initial(Vsha256_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_core___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsha256_core___024root___eval_initial__TOP(vlSelf);
    Vsha256_core___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vsha256_core___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__sha256_tb__DOT__clk__0 
        = vlSelfRef.sha256_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__sha256_tb__DOT__rst__0 
        = vlSelfRef.sha256_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__sha256_tb__DOT__ready__0 
        = vlSelfRef.sha256_tb__DOT__ready;
}

VL_INLINE_OPT VlCoroutine Vsha256_core___024root___eval_initial__TOP__Vtiming__0(Vsha256_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_core___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sha256_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sha256_tb.v", 
                                             29);
        vlSelfRef.sha256_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.sha256_tb__DOT__clk)));
    }
}

extern const VlWide<16>/*511:0*/ Vsha256_core__ConstPool__CONST_h93e1b771_0;
extern const VlWide<8>/*255:0*/ Vsha256_core__ConstPool__CONST_h419c3149_0;

VL_INLINE_OPT VlCoroutine Vsha256_core___024root___eval_initial__TOP__Vtiming__1(Vsha256_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_core___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("Starting SHA-256 testbench...\n",0);
    vlSelfRef.sha256_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "sha256_tb.v", 
                                         38);
    vlSelfRef.sha256_tb__DOT__rst = 0U;
    vlSelfRef.sha256_tb__DOT__block_in[0U] = Vsha256_core__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.sha256_tb__DOT__block_in[1U] = Vsha256_core__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.sha256_tb__DOT__block_in[2U] = Vsha256_core__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.sha256_tb__DOT__block_in[3U] = Vsha256_core__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.sha256_tb__DOT__block_in[4U] = Vsha256_core__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.sha256_tb__DOT__block_in[5U] = Vsha256_core__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.sha256_tb__DOT__block_in[6U] = Vsha256_core__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.sha256_tb__DOT__block_in[7U] = Vsha256_core__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.sha256_tb__DOT__block_in[8U] = Vsha256_core__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.sha256_tb__DOT__block_in[9U] = Vsha256_core__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.sha256_tb__DOT__block_in[0xaU] = Vsha256_core__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelfRef.sha256_tb__DOT__block_in[0xbU] = Vsha256_core__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelfRef.sha256_tb__DOT__block_in[0xcU] = Vsha256_core__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelfRef.sha256_tb__DOT__block_in[0xdU] = Vsha256_core__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelfRef.sha256_tb__DOT__block_in[0xeU] = Vsha256_core__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelfRef.sha256_tb__DOT__block_in[0xfU] = Vsha256_core__ConstPool__CONST_h93e1b771_0[0xfU];
    vlSelfRef.sha256_tb__DOT__block_in[0xfU] = 0x61626380U;
    vlSelfRef.sha256_tb__DOT__block_in[0U] = 0x18U;
    vlSelfRef.sha256_tb__DOT__block_in[1U] = 0U;
    VL_WRITEF_NX("Input block set to:\nW[ 0] = %x\nW[ 1] = %x\nW[ 2] = %x\nW[ 3] = %x\nW[ 4] = %x\nW[ 5] = %x\nW[ 6] = %x\nW[ 7] = %x\nW[ 8] = %x\nW[ 9] = %x\nW[10] = %x\nW[11] = %x\nW[12] = %x\nW[13] = %x\nW[14] = %x\nW[15] = %x\n",0,
                 32,vlSelfRef.sha256_tb__DOT__block_in[0xfU],
                 32,vlSelfRef.sha256_tb__DOT__block_in[0xeU],
                 32,vlSelfRef.sha256_tb__DOT__block_in[0xdU],
                 32,vlSelfRef.sha256_tb__DOT__block_in[0xcU],
                 32,vlSelfRef.sha256_tb__DOT__block_in[0xbU],
                 32,vlSelfRef.sha256_tb__DOT__block_in[0xaU],
                 32,vlSelfRef.sha256_tb__DOT__block_in[9U],
                 32,vlSelfRef.sha256_tb__DOT__block_in[8U],
                 32,vlSelfRef.sha256_tb__DOT__block_in[7U],
                 32,vlSelfRef.sha256_tb__DOT__block_in[6U],
                 32,vlSelfRef.sha256_tb__DOT__block_in[5U],
                 32,vlSelfRef.sha256_tb__DOT__block_in[4U],
                 32,vlSelfRef.sha256_tb__DOT__block_in[3U],
                 32,vlSelfRef.sha256_tb__DOT__block_in[2U],
                 32,vlSelfRef.sha256_tb__DOT__block_in[1U],
                 32,vlSelfRef.sha256_tb__DOT__block_in[0U]);
    vlSelfRef.sha256_tb__DOT__start = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "sha256_tb.v", 
                                         63);
    vlSelfRef.sha256_tb__DOT__start = 0U;
    VL_WRITEF_NX("Waiting for ready signal\n",0);
    while ((1U & (~ (IData)(vlSelfRef.sha256_tb__DOT__ready)))) {
        co_await vlSelfRef.__VtrigSched_h50804cde__0.trigger(1U, 
                                                             nullptr, 
                                                             "@([changed] sha256_tb.ready)", 
                                                             "sha256_tb.v", 
                                                             67);
    }
    VL_WRITEF_NX("Signal received\nSHA-256 Hash Output:\n%x\n",0,
                 256,vlSelfRef.sha256_tb__DOT__hash_out.data());
    if ((0U == ((((((((Vsha256_core__ConstPool__CONST_h419c3149_0[0U] 
                       ^ vlSelfRef.sha256_tb__DOT__hash_out[0U]) 
                      | (Vsha256_core__ConstPool__CONST_h419c3149_0[1U] 
                         ^ vlSelfRef.sha256_tb__DOT__hash_out[1U])) 
                     | (Vsha256_core__ConstPool__CONST_h419c3149_0[2U] 
                        ^ vlSelfRef.sha256_tb__DOT__hash_out[2U])) 
                    | (Vsha256_core__ConstPool__CONST_h419c3149_0[3U] 
                       ^ vlSelfRef.sha256_tb__DOT__hash_out[3U])) 
                   | (Vsha256_core__ConstPool__CONST_h419c3149_0[4U] 
                      ^ vlSelfRef.sha256_tb__DOT__hash_out[4U])) 
                  | (Vsha256_core__ConstPool__CONST_h419c3149_0[5U] 
                     ^ vlSelfRef.sha256_tb__DOT__hash_out[5U])) 
                 | (Vsha256_core__ConstPool__CONST_h419c3149_0[6U] 
                    ^ vlSelfRef.sha256_tb__DOT__hash_out[6U])) 
                | (Vsha256_core__ConstPool__CONST_h419c3149_0[7U] 
                   ^ vlSelfRef.sha256_tb__DOT__hash_out[7U])))) {
        VL_WRITEF_NX("\342\234\205 Test PASSED\n",0);
    } else {
        VL_WRITEF_NX("\342\235\214 Test FAILED\nExpected: ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad\nGot:      %x\n",0,
                     256,vlSelfRef.sha256_tb__DOT__hash_out.data());
        vlSelfRef.sha256_tb__DOT__expected_byte = 0xbaU;
        vlSelfRef.sha256_tb__DOT__actual_byte = (vlSelfRef.sha256_tb__DOT__hash_out[7U] 
                                                 >> 0x18U);
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 0 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x78U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & (vlSelfRef.sha256_tb__DOT__hash_out[7U] 
                                                    >> 0x10U));
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 1 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x16U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & (vlSelfRef.sha256_tb__DOT__hash_out[7U] 
                                                    >> 8U));
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 2 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0xbfU;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & vlSelfRef.sha256_tb__DOT__hash_out[7U]);
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 3 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x8fU;
        vlSelfRef.sha256_tb__DOT__actual_byte = (vlSelfRef.sha256_tb__DOT__hash_out[6U] 
                                                 >> 0x18U);
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 4 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 1U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & (vlSelfRef.sha256_tb__DOT__hash_out[6U] 
                                                    >> 0x10U));
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 5 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0xcfU;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & (vlSelfRef.sha256_tb__DOT__hash_out[6U] 
                                                    >> 8U));
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 6 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0xeaU;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & vlSelfRef.sha256_tb__DOT__hash_out[6U]);
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 7 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x41U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (vlSelfRef.sha256_tb__DOT__hash_out[5U] 
                                                 >> 0x18U);
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 8 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x41U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & (vlSelfRef.sha256_tb__DOT__hash_out[5U] 
                                                    >> 0x10U));
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 9 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x40U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & (vlSelfRef.sha256_tb__DOT__hash_out[5U] 
                                                    >> 8U));
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 10 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0xdeU;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & vlSelfRef.sha256_tb__DOT__hash_out[5U]);
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 11 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x5dU;
        vlSelfRef.sha256_tb__DOT__actual_byte = (vlSelfRef.sha256_tb__DOT__hash_out[4U] 
                                                 >> 0x18U);
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 12 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0xaeU;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & (vlSelfRef.sha256_tb__DOT__hash_out[4U] 
                                                    >> 0x10U));
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 13 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x22U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & (vlSelfRef.sha256_tb__DOT__hash_out[4U] 
                                                    >> 8U));
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 14 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x23U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & vlSelfRef.sha256_tb__DOT__hash_out[4U]);
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 15 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0xb0U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (vlSelfRef.sha256_tb__DOT__hash_out[3U] 
                                                 >> 0x18U);
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 16 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 3U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & (vlSelfRef.sha256_tb__DOT__hash_out[3U] 
                                                    >> 0x10U));
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 17 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x61U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & (vlSelfRef.sha256_tb__DOT__hash_out[3U] 
                                                    >> 8U));
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 18 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0xa3U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & vlSelfRef.sha256_tb__DOT__hash_out[3U]);
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 19 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x96U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (vlSelfRef.sha256_tb__DOT__hash_out[2U] 
                                                 >> 0x18U);
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 20 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x17U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & (vlSelfRef.sha256_tb__DOT__hash_out[2U] 
                                                    >> 0x10U));
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 21 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x7aU;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & (vlSelfRef.sha256_tb__DOT__hash_out[2U] 
                                                    >> 8U));
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 22 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x9cU;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & vlSelfRef.sha256_tb__DOT__hash_out[2U]);
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 23 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0xb4U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (vlSelfRef.sha256_tb__DOT__hash_out[1U] 
                                                 >> 0x18U);
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 24 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x10U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & (vlSelfRef.sha256_tb__DOT__hash_out[1U] 
                                                    >> 0x10U));
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 25 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0xffU;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & (vlSelfRef.sha256_tb__DOT__hash_out[1U] 
                                                    >> 8U));
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 26 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x61U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & vlSelfRef.sha256_tb__DOT__hash_out[1U]);
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 27 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0xf2U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (vlSelfRef.sha256_tb__DOT__hash_out[0U] 
                                                 >> 0x18U);
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 28 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & (vlSelfRef.sha256_tb__DOT__hash_out[0U] 
                                                    >> 0x10U));
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 29 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0x15U;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & (vlSelfRef.sha256_tb__DOT__hash_out[0U] 
                                                    >> 8U));
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 30 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
        vlSelfRef.sha256_tb__DOT__expected_byte = 0xadU;
        vlSelfRef.sha256_tb__DOT__actual_byte = (0xffU 
                                                 & vlSelfRef.sha256_tb__DOT__hash_out[0U]);
        if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_tb__DOT__expected_byte) 
                         != (IData)(vlSelfRef.sha256_tb__DOT__actual_byte)))) {
            VL_WRITEF_NX("Byte 31 differs: expected %x, got %x\n",0,
                         8,vlSelfRef.sha256_tb__DOT__expected_byte,
                         8,(IData)(vlSelfRef.sha256_tb__DOT__actual_byte));
        }
    }
    VL_FINISH_MT("sha256_tb.v", 89, "");
}

void Vsha256_core___024root___eval_act(Vsha256_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_core___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vsha256_core___024root___nba_sequent__TOP__0(Vsha256_core___024root* vlSelf);

void Vsha256_core___024root___eval_nba(Vsha256_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_core___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsha256_core___024root___nba_sequent__TOP__0(vlSelf);
    }
}

extern const VlWide<8>/*255:0*/ Vsha256_core__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vsha256_core___024root___nba_sequent__TOP__0(Vsha256_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_core___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__sig1__10__Vfuncout;
    __Vfunc_sha256_tb__DOT__uut__DOT__sig1__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__sig1__10__x;
    __Vfunc_sha256_tb__DOT__uut__DOT__sig1__10__x = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__11__Vfuncout;
    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__11__x;
    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__11__x = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__12__Vfuncout;
    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__12__x;
    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__12__x = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__sig0__13__Vfuncout;
    __Vfunc_sha256_tb__DOT__uut__DOT__sig0__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__sig0__13__x;
    __Vfunc_sha256_tb__DOT__uut__DOT__sig0__13__x = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__14__Vfuncout;
    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__14__x;
    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__14__x = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__15__Vfuncout;
    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__15__x;
    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__15__x = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__sig1__16__Vfuncout;
    __Vfunc_sha256_tb__DOT__uut__DOT__sig1__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__sig1__16__x;
    __Vfunc_sha256_tb__DOT__uut__DOT__sig1__16__x = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__17__Vfuncout;
    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__17__x;
    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__17__x = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__18__Vfuncout;
    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__18__x;
    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__18__x = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__sig0__19__Vfuncout;
    __Vfunc_sha256_tb__DOT__uut__DOT__sig0__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__sig0__19__x;
    __Vfunc_sha256_tb__DOT__uut__DOT__sig0__19__x = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__20__Vfuncout;
    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__20__x;
    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__20__x = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__21__Vfuncout;
    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__21__x;
    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__21__x = 0;
    CData/*1:0*/ __Vdly__sha256_tb__DOT__uut__DOT__state;
    __Vdly__sha256_tb__DOT__uut__DOT__state = 0;
    CData/*6:0*/ __Vdly__sha256_tb__DOT__uut__DOT__t;
    __Vdly__sha256_tb__DOT__uut__DOT__t = 0;
    CData/*6:0*/ __Vdly__sha256_tb__DOT__uut__DOT__msg_idx;
    __Vdly__sha256_tb__DOT__uut__DOT__msg_idx = 0;
    IData/*31:0*/ __Vdly__sha256_tb__DOT__uut__DOT__h0;
    __Vdly__sha256_tb__DOT__uut__DOT__h0 = 0;
    IData/*31:0*/ __Vdly__sha256_tb__DOT__uut__DOT__h1;
    __Vdly__sha256_tb__DOT__uut__DOT__h1 = 0;
    IData/*31:0*/ __Vdly__sha256_tb__DOT__uut__DOT__h2;
    __Vdly__sha256_tb__DOT__uut__DOT__h2 = 0;
    IData/*31:0*/ __Vdly__sha256_tb__DOT__uut__DOT__h3;
    __Vdly__sha256_tb__DOT__uut__DOT__h3 = 0;
    IData/*31:0*/ __Vdly__sha256_tb__DOT__uut__DOT__h4;
    __Vdly__sha256_tb__DOT__uut__DOT__h4 = 0;
    IData/*31:0*/ __Vdly__sha256_tb__DOT__uut__DOT__h5;
    __Vdly__sha256_tb__DOT__uut__DOT__h5 = 0;
    IData/*31:0*/ __Vdly__sha256_tb__DOT__uut__DOT__h6;
    __Vdly__sha256_tb__DOT__uut__DOT__h6 = 0;
    IData/*31:0*/ __Vdly__sha256_tb__DOT__uut__DOT__h7;
    __Vdly__sha256_tb__DOT__uut__DOT__h7 = 0;
    IData/*31:0*/ __Vdly__sha256_tb__DOT__uut__DOT__h;
    __Vdly__sha256_tb__DOT__uut__DOT__h = 0;
    IData/*31:0*/ __Vdly__sha256_tb__DOT__uut__DOT__g;
    __Vdly__sha256_tb__DOT__uut__DOT__g = 0;
    IData/*31:0*/ __Vdly__sha256_tb__DOT__uut__DOT__f;
    __Vdly__sha256_tb__DOT__uut__DOT__f = 0;
    IData/*31:0*/ __Vdly__sha256_tb__DOT__uut__DOT__e;
    __Vdly__sha256_tb__DOT__uut__DOT__e = 0;
    IData/*31:0*/ __Vdly__sha256_tb__DOT__uut__DOT__d;
    __Vdly__sha256_tb__DOT__uut__DOT__d = 0;
    IData/*31:0*/ __Vdly__sha256_tb__DOT__uut__DOT__c;
    __Vdly__sha256_tb__DOT__uut__DOT__c = 0;
    IData/*31:0*/ __Vdly__sha256_tb__DOT__uut__DOT__b;
    __Vdly__sha256_tb__DOT__uut__DOT__b = 0;
    IData/*31:0*/ __Vdly__sha256_tb__DOT__uut__DOT__a;
    __Vdly__sha256_tb__DOT__uut__DOT__a = 0;
    IData/*31:0*/ __VdlyVal__sha256_tb__DOT__uut__DOT__w__v64;
    __VdlyVal__sha256_tb__DOT__uut__DOT__w__v64 = 0;
    CData/*5:0*/ __VdlyDim0__sha256_tb__DOT__uut__DOT__w__v64;
    __VdlyDim0__sha256_tb__DOT__uut__DOT__w__v64 = 0;
    IData/*31:0*/ __VdlyVal__sha256_tb__DOT__uut__DOT__w__v65;
    __VdlyVal__sha256_tb__DOT__uut__DOT__w__v65 = 0;
    CData/*5:0*/ __VdlyDim0__sha256_tb__DOT__uut__DOT__w__v65;
    __VdlyDim0__sha256_tb__DOT__uut__DOT__w__v65 = 0;
    CData/*0:0*/ __VdlySet__sha256_tb__DOT__uut__DOT__w__v0;
    __VdlySet__sha256_tb__DOT__uut__DOT__w__v0 = 0;
    CData/*0:0*/ __VdlySet__sha256_tb__DOT__uut__DOT__w__v64;
    __VdlySet__sha256_tb__DOT__uut__DOT__w__v64 = 0;
    CData/*0:0*/ __VdlySet__sha256_tb__DOT__uut__DOT__w__v65;
    __VdlySet__sha256_tb__DOT__uut__DOT__w__v65 = 0;
    // Body
    __Vdly__sha256_tb__DOT__uut__DOT__d = vlSelfRef.sha256_tb__DOT__uut__DOT__d;
    __Vdly__sha256_tb__DOT__uut__DOT__h7 = vlSelfRef.sha256_tb__DOT__uut__DOT__h7;
    __Vdly__sha256_tb__DOT__uut__DOT__h6 = vlSelfRef.sha256_tb__DOT__uut__DOT__h6;
    __Vdly__sha256_tb__DOT__uut__DOT__h5 = vlSelfRef.sha256_tb__DOT__uut__DOT__h5;
    __Vdly__sha256_tb__DOT__uut__DOT__h4 = vlSelfRef.sha256_tb__DOT__uut__DOT__h4;
    __Vdly__sha256_tb__DOT__uut__DOT__h3 = vlSelfRef.sha256_tb__DOT__uut__DOT__h3;
    __Vdly__sha256_tb__DOT__uut__DOT__h2 = vlSelfRef.sha256_tb__DOT__uut__DOT__h2;
    __Vdly__sha256_tb__DOT__uut__DOT__h1 = vlSelfRef.sha256_tb__DOT__uut__DOT__h1;
    __Vdly__sha256_tb__DOT__uut__DOT__h0 = vlSelfRef.sha256_tb__DOT__uut__DOT__h0;
    __Vdly__sha256_tb__DOT__uut__DOT__msg_idx = vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx;
    __Vdly__sha256_tb__DOT__uut__DOT__state = vlSelfRef.sha256_tb__DOT__uut__DOT__state;
    __Vdly__sha256_tb__DOT__uut__DOT__a = vlSelfRef.sha256_tb__DOT__uut__DOT__a;
    __Vdly__sha256_tb__DOT__uut__DOT__b = vlSelfRef.sha256_tb__DOT__uut__DOT__b;
    __Vdly__sha256_tb__DOT__uut__DOT__c = vlSelfRef.sha256_tb__DOT__uut__DOT__c;
    __Vdly__sha256_tb__DOT__uut__DOT__e = vlSelfRef.sha256_tb__DOT__uut__DOT__e;
    __Vdly__sha256_tb__DOT__uut__DOT__f = vlSelfRef.sha256_tb__DOT__uut__DOT__f;
    __Vdly__sha256_tb__DOT__uut__DOT__g = vlSelfRef.sha256_tb__DOT__uut__DOT__g;
    __Vdly__sha256_tb__DOT__uut__DOT__h = vlSelfRef.sha256_tb__DOT__uut__DOT__h;
    __Vdly__sha256_tb__DOT__uut__DOT__t = vlSelfRef.sha256_tb__DOT__uut__DOT__t;
    __VdlySet__sha256_tb__DOT__uut__DOT__w__v0 = 0U;
    __VdlySet__sha256_tb__DOT__uut__DOT__w__v64 = 0U;
    __VdlySet__sha256_tb__DOT__uut__DOT__w__v65 = 0U;
    if (VL_UNLIKELY(vlSelfRef.sha256_tb__DOT__rst)) {
        VL_WRITEF_NX("RESET: sha256_core reset\n",0);
        __Vdly__sha256_tb__DOT__uut__DOT__state = 0U;
        vlSelfRef.sha256_tb__DOT__ready = 0U;
        vlSelfRef.sha256_tb__DOT__hash_out[0U] = Vsha256_core__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.sha256_tb__DOT__hash_out[1U] = Vsha256_core__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.sha256_tb__DOT__hash_out[2U] = Vsha256_core__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.sha256_tb__DOT__hash_out[3U] = Vsha256_core__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.sha256_tb__DOT__hash_out[4U] = Vsha256_core__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.sha256_tb__DOT__hash_out[5U] = Vsha256_core__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.sha256_tb__DOT__hash_out[6U] = Vsha256_core__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.sha256_tb__DOT__hash_out[7U] = Vsha256_core__ConstPool__CONST_h9e67c271_0[7U];
        __Vdly__sha256_tb__DOT__uut__DOT__t = 0U;
        __Vdly__sha256_tb__DOT__uut__DOT__msg_idx = 0U;
        __Vdly__sha256_tb__DOT__uut__DOT__h0 = 0x6a09e667U;
        __Vdly__sha256_tb__DOT__uut__DOT__h1 = 0xbb67ae85U;
        __Vdly__sha256_tb__DOT__uut__DOT__h2 = 0x3c6ef372U;
        __Vdly__sha256_tb__DOT__uut__DOT__h3 = 0xa54ff53aU;
        __Vdly__sha256_tb__DOT__uut__DOT__h4 = 0x510e527fU;
        __Vdly__sha256_tb__DOT__uut__DOT__h5 = 0x9b05688cU;
        __Vdly__sha256_tb__DOT__uut__DOT__h6 = 0x1f83d9abU;
        __Vdly__sha256_tb__DOT__uut__DOT__h7 = 0x5be0cd19U;
        __VdlySet__sha256_tb__DOT__uut__DOT__w__v0 = 1U;
    } else if ((2U & (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__state))) {
        if (VL_UNLIKELY((1U & (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__state)))) {
            vlSelfRef.sha256_tb__DOT__hash_out[0U] 
                = vlSelfRef.sha256_tb__DOT__uut__DOT__h7;
            vlSelfRef.sha256_tb__DOT__hash_out[1U] 
                = vlSelfRef.sha256_tb__DOT__uut__DOT__h6;
            vlSelfRef.sha256_tb__DOT__hash_out[2U] 
                = vlSelfRef.sha256_tb__DOT__uut__DOT__h5;
            vlSelfRef.sha256_tb__DOT__hash_out[3U] 
                = vlSelfRef.sha256_tb__DOT__uut__DOT__h4;
            vlSelfRef.sha256_tb__DOT__hash_out[4U] 
                = vlSelfRef.sha256_tb__DOT__uut__DOT__h3;
            vlSelfRef.sha256_tb__DOT__hash_out[5U] 
                = vlSelfRef.sha256_tb__DOT__uut__DOT__h2;
            vlSelfRef.sha256_tb__DOT__hash_out[6U] 
                = (IData)((((QData)((IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__h0)) 
                            << 0x20U) | (QData)((IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__h1))));
            vlSelfRef.sha256_tb__DOT__hash_out[7U] 
                = (IData)(((((QData)((IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__h0)) 
                             << 0x20U) | (QData)((IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__h1))) 
                           >> 0x20U));
            vlSelfRef.sha256_tb__DOT__ready = 1U;
            if ((1U & (~ (IData)(vlSelfRef.sha256_tb__DOT__start)))) {
                __Vdly__sha256_tb__DOT__uut__DOT__state = 0U;
            }
            VL_WRITEF_NX("DONE: Final hash = %x%x%x%x%x%x%x%x\n",0,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h0,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h1,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h2,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h3,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h4,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h5,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h6,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h7);
        } else if (VL_LIKELY((0x40U > (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__t)))) {
            VL_WRITEF_NX("COMP: Round t=%2#\nRound %2#: a=%x b=%x c=%x d=%x e=%x f=%x g=%x h=%x\nT1=%x T2=%x w[t]=%x\n",0,
                         7,vlSelfRef.sha256_tb__DOT__uut__DOT__t,
                         7,(IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__t),
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__a,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__b,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__c,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__d,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__e,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__f,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__g,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__T1,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__T2,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__w
                         [(0x3fU & (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__t))]);
            __Vdly__sha256_tb__DOT__uut__DOT__h = vlSelfRef.sha256_tb__DOT__uut__DOT__g;
            __Vdly__sha256_tb__DOT__uut__DOT__g = vlSelfRef.sha256_tb__DOT__uut__DOT__f;
            __Vdly__sha256_tb__DOT__uut__DOT__f = vlSelfRef.sha256_tb__DOT__uut__DOT__e;
            __Vdly__sha256_tb__DOT__uut__DOT__e = (vlSelfRef.sha256_tb__DOT__uut__DOT__d 
                                                   + vlSelfRef.sha256_tb__DOT__uut__DOT__T1);
            __Vdly__sha256_tb__DOT__uut__DOT__d = vlSelfRef.sha256_tb__DOT__uut__DOT__c;
            __Vdly__sha256_tb__DOT__uut__DOT__c = vlSelfRef.sha256_tb__DOT__uut__DOT__b;
            __Vdly__sha256_tb__DOT__uut__DOT__b = vlSelfRef.sha256_tb__DOT__uut__DOT__a;
            __Vdly__sha256_tb__DOT__uut__DOT__t = (0x7fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__t)));
            __Vdly__sha256_tb__DOT__uut__DOT__a = (vlSelfRef.sha256_tb__DOT__uut__DOT__T1 
                                                   + vlSelfRef.sha256_tb__DOT__uut__DOT__T2);
        } else {
            VL_WRITEF_NX("COMP -> DONE: All 64 rounds completed\n",0);
            __Vdly__sha256_tb__DOT__uut__DOT__h0 = 
                (vlSelfRef.sha256_tb__DOT__uut__DOT__h0 
                 + vlSelfRef.sha256_tb__DOT__uut__DOT__a);
            __Vdly__sha256_tb__DOT__uut__DOT__state = 3U;
            __Vdly__sha256_tb__DOT__uut__DOT__h1 = 
                (vlSelfRef.sha256_tb__DOT__uut__DOT__h1 
                 + vlSelfRef.sha256_tb__DOT__uut__DOT__b);
            __Vdly__sha256_tb__DOT__uut__DOT__h2 = 
                (vlSelfRef.sha256_tb__DOT__uut__DOT__h2 
                 + vlSelfRef.sha256_tb__DOT__uut__DOT__c);
            __Vdly__sha256_tb__DOT__uut__DOT__h3 = 
                (vlSelfRef.sha256_tb__DOT__uut__DOT__h3 
                 + vlSelfRef.sha256_tb__DOT__uut__DOT__d);
            __Vdly__sha256_tb__DOT__uut__DOT__h4 = 
                (vlSelfRef.sha256_tb__DOT__uut__DOT__h4 
                 + vlSelfRef.sha256_tb__DOT__uut__DOT__e);
            __Vdly__sha256_tb__DOT__uut__DOT__h5 = 
                (vlSelfRef.sha256_tb__DOT__uut__DOT__h5 
                 + vlSelfRef.sha256_tb__DOT__uut__DOT__f);
            __Vdly__sha256_tb__DOT__uut__DOT__h6 = 
                (vlSelfRef.sha256_tb__DOT__uut__DOT__h6 
                 + vlSelfRef.sha256_tb__DOT__uut__DOT__g);
            __Vdly__sha256_tb__DOT__uut__DOT__h7 = 
                (vlSelfRef.sha256_tb__DOT__uut__DOT__h7 
                 + vlSelfRef.sha256_tb__DOT__uut__DOT__h);
            VL_WRITEF_NX("Final hash values: h0=%x+%x h1=%x+%x h2=%x+%x h3=%x+%x\n                   h4=%x+%x h5=%x+%x h6=%x+%x h7=%x+%x\n",0,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h0,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__a,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h1,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__b,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h2,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__c,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h3,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__d,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h4,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__e,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h5,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__f,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h6,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__g,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h7,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h);
        }
    } else if ((1U & (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__state))) {
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx)))) {
            VL_WRITEF_NX("PREP: Preparing message schedule\n",0);
        }
        if (VL_UNLIKELY((0x10U > (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx)))) {
            __VdlyVal__sha256_tb__DOT__uut__DOT__w__v64 
                = (((0U == (0x1fU & (((IData)(0x1ffU) 
                                      - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx), 5U)) 
                                     - (IData)(0x1fU))))
                     ? 0U : (vlSelfRef.sha256_tb__DOT__block_in[
                             (((IData)(0x1fU) + (0x1ffU 
                                                 & (((IData)(0x1ffU) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx), 5U)) 
                                                    - (IData)(0x1fU)))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & (((IData)(0x1ffU) 
                                                 - 
                                                 VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx), 5U)) 
                                                - (IData)(0x1fU)))))) 
                   | (vlSelfRef.sha256_tb__DOT__block_in[
                      (0xfU & ((((IData)(0x1ffU) - 
                                 VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx), 5U)) 
                                - (IData)(0x1fU)) >> 5U))] 
                      >> (0x1fU & (((IData)(0x1ffU) 
                                    - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx), 5U)) 
                                   - (IData)(0x1fU)))));
            __VdlyDim0__sha256_tb__DOT__uut__DOT__w__v64 
                = (0x3fU & (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx));
            __VdlySet__sha256_tb__DOT__uut__DOT__w__v64 = 1U;
            VL_WRITEF_NX("w[%2#] = %x\n",0,7,vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx,
                         32,(((0U == (0x1fU & (((IData)(0x1ffU) 
                                                - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx), 5U)) 
                                               - (IData)(0x1fU))))
                               ? 0U : (vlSelfRef.sha256_tb__DOT__block_in[
                                       (((IData)(0x1fU) 
                                         + (0x1ffU 
                                            & (((IData)(0x1ffU) 
                                                - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx), 5U)) 
                                               - (IData)(0x1fU)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           (((IData)(0x1ffU) 
                                             - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx), 5U)) 
                                            - (IData)(0x1fU)))))) 
                             | (vlSelfRef.sha256_tb__DOT__block_in[
                                (0xfU & ((((IData)(0x1ffU) 
                                           - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx), 5U)) 
                                          - (IData)(0x1fU)) 
                                         >> 5U))] >> 
                                (0x1fU & (((IData)(0x1ffU) 
                                           - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx), 5U)) 
                                          - (IData)(0x1fU))))));
            __Vdly__sha256_tb__DOT__uut__DOT__msg_idx 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx)));
        } else if ((0x40U > (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx))) {
            __VdlyVal__sha256_tb__DOT__uut__DOT__w__v65 
                = (((([&]() {
                                __Vfunc_sha256_tb__DOT__uut__DOT__sig1__10__x 
                                    = vlSelfRef.sha256_tb__DOT__uut__DOT__w
                                    [(0x3fU & ((IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx) 
                                               - (IData)(2U)))];
                                __Vfunc_sha256_tb__DOT__uut__DOT__sig1__10__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__11__x 
                                                    = __Vfunc_sha256_tb__DOT__uut__DOT__sig1__10__x;
                                                __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__11__Vfuncout 
                                                    = 
                                                    (VL_SHIFTR_III(32,32,8, __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__11__x, 0x11U) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__11__x, 0xfU));
                                            }(), __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__11__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__12__x 
                                                    = __Vfunc_sha256_tb__DOT__uut__DOT__sig1__10__x;
                                                __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__12__Vfuncout 
                                                    = 
                                                    (VL_SHIFTR_III(32,32,8, __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__12__x, 0x13U) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__12__x, 0xdU));
                                            }(), __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__12__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sha256_tb__DOT__uut__DOT__sig1__10__x, 0xaU));
                            }(), __Vfunc_sha256_tb__DOT__uut__DOT__sig1__10__Vfuncout) 
                     + vlSelfRef.sha256_tb__DOT__uut__DOT__w
                     [(0x3fU & ((IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx) 
                                - (IData)(7U)))]) + 
                    ([&]() {
                            __Vfunc_sha256_tb__DOT__uut__DOT__sig0__13__x 
                                = vlSelfRef.sha256_tb__DOT__uut__DOT__w
                                [(0x3fU & ((IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx) 
                                           - (IData)(0xfU)))];
                            __Vfunc_sha256_tb__DOT__uut__DOT__sig0__13__Vfuncout 
                                = ((([&]() {
                                            __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__14__x 
                                                = __Vfunc_sha256_tb__DOT__uut__DOT__sig0__13__x;
                                            __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__14__Vfuncout 
                                                = (
                                                   VL_SHIFTR_III(32,32,8, __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__14__x, 7U) 
                                                   | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__14__x, 0x19U));
                                        }(), __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__14__Vfuncout) 
                                    ^ ([&]() {
                                            __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__15__x 
                                                = __Vfunc_sha256_tb__DOT__uut__DOT__sig0__13__x;
                                            __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__15__Vfuncout 
                                                = (
                                                   VL_SHIFTR_III(32,32,8, __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__15__x, 0x12U) 
                                                   | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__15__x, 0xeU));
                                        }(), __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__15__Vfuncout)) 
                                   ^ VL_SHIFTR_III(32,32,32, __Vfunc_sha256_tb__DOT__uut__DOT__sig0__13__x, 3U));
                        }(), __Vfunc_sha256_tb__DOT__uut__DOT__sig0__13__Vfuncout)) 
                   + vlSelfRef.sha256_tb__DOT__uut__DOT__w
                   [(0x3fU & ((IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx) 
                              - (IData)(0x10U)))]);
            __VdlyDim0__sha256_tb__DOT__uut__DOT__w__v65 
                = (0x3fU & (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx));
            __VdlySet__sha256_tb__DOT__uut__DOT__w__v65 = 1U;
            VL_WRITEF_NX("w[%2#] = %x (extended)\n",0,
                         7,vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx,
                         32,(((([&]() {
                                        __Vfunc_sha256_tb__DOT__uut__DOT__sig1__16__x 
                                            = vlSelfRef.sha256_tb__DOT__uut__DOT__w
                                            [(0x3fU 
                                              & ((IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx) 
                                                 - (IData)(2U)))];
                                        __Vfunc_sha256_tb__DOT__uut__DOT__sig1__16__Vfuncout 
                                            = ((([&]() {
                                                        __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__17__x 
                                                            = __Vfunc_sha256_tb__DOT__uut__DOT__sig1__16__x;
                                                        __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__17__Vfuncout 
                                                            = 
                                                            (VL_SHIFTR_III(32,32,8, __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__17__x, 0x11U) 
                                                             | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__17__x, 0xfU));
                                                    }(), __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__17__Vfuncout) 
                                                ^ ([&]() {
                                                        __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__18__x 
                                                            = __Vfunc_sha256_tb__DOT__uut__DOT__sig1__16__x;
                                                        __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__18__Vfuncout 
                                                            = 
                                                            (VL_SHIFTR_III(32,32,8, __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__18__x, 0x13U) 
                                                             | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__18__x, 0xdU));
                                                    }(), __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__18__Vfuncout)) 
                                               ^ VL_SHIFTR_III(32,32,32, __Vfunc_sha256_tb__DOT__uut__DOT__sig1__16__x, 0xaU));
                                    }(), __Vfunc_sha256_tb__DOT__uut__DOT__sig1__16__Vfuncout) 
                               + vlSelfRef.sha256_tb__DOT__uut__DOT__w
                               [(0x3fU & ((IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx) 
                                          - (IData)(7U)))]) 
                              + ([&]() {
                                    __Vfunc_sha256_tb__DOT__uut__DOT__sig0__19__x 
                                        = vlSelfRef.sha256_tb__DOT__uut__DOT__w
                                        [(0x3fU & ((IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx) 
                                                   - (IData)(0xfU)))];
                                    __Vfunc_sha256_tb__DOT__uut__DOT__sig0__19__Vfuncout 
                                        = ((([&]() {
                                                    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__20__x 
                                                        = __Vfunc_sha256_tb__DOT__uut__DOT__sig0__19__x;
                                                    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__20__Vfuncout 
                                                        = 
                                                        (VL_SHIFTR_III(32,32,8, __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__20__x, 7U) 
                                                         | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__20__x, 0x19U));
                                                }(), __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__20__Vfuncout) 
                                            ^ ([&]() {
                                                    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__21__x 
                                                        = __Vfunc_sha256_tb__DOT__uut__DOT__sig0__19__x;
                                                    __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__21__Vfuncout 
                                                        = 
                                                        (VL_SHIFTR_III(32,32,8, __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__21__x, 0x12U) 
                                                         | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__21__x, 0xeU));
                                                }(), __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__21__Vfuncout)) 
                                           ^ VL_SHIFTR_III(32,32,32, __Vfunc_sha256_tb__DOT__uut__DOT__sig0__19__x, 3U));
                                }(), __Vfunc_sha256_tb__DOT__uut__DOT__sig0__19__Vfuncout)) 
                             + vlSelfRef.sha256_tb__DOT__uut__DOT__w
                             [(0x3fU & ((IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx) 
                                        - (IData)(0x10U)))]));
            __Vdly__sha256_tb__DOT__uut__DOT__msg_idx 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx)));
        } else {
            __Vdly__sha256_tb__DOT__uut__DOT__a = vlSelfRef.sha256_tb__DOT__uut__DOT__h0;
            __Vdly__sha256_tb__DOT__uut__DOT__t = 0U;
            __Vdly__sha256_tb__DOT__uut__DOT__state = 2U;
            __Vdly__sha256_tb__DOT__uut__DOT__b = vlSelfRef.sha256_tb__DOT__uut__DOT__h1;
            __Vdly__sha256_tb__DOT__uut__DOT__c = vlSelfRef.sha256_tb__DOT__uut__DOT__h2;
            __Vdly__sha256_tb__DOT__uut__DOT__d = vlSelfRef.sha256_tb__DOT__uut__DOT__h3;
            __Vdly__sha256_tb__DOT__uut__DOT__e = vlSelfRef.sha256_tb__DOT__uut__DOT__h4;
            __Vdly__sha256_tb__DOT__uut__DOT__f = vlSelfRef.sha256_tb__DOT__uut__DOT__h5;
            __Vdly__sha256_tb__DOT__uut__DOT__g = vlSelfRef.sha256_tb__DOT__uut__DOT__h6;
            __Vdly__sha256_tb__DOT__uut__DOT__h = vlSelfRef.sha256_tb__DOT__uut__DOT__h7;
            VL_WRITEF_NX("Working vars initialized to: a=%x b=%x c=%x d=%x e=%x f=%x g=%x h=%x\n",0,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h0,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h1,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h2,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h3,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h4,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h5,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h6,
                         32,vlSelfRef.sha256_tb__DOT__uut__DOT__h7);
        }
    } else if (VL_UNLIKELY(vlSelfRef.sha256_tb__DOT__start)) {
        VL_WRITEF_NX("IDLE -> PREP: Starting SHA-256 computation\n",0);
        vlSelfRef.sha256_tb__DOT__ready = 0U;
        __Vdly__sha256_tb__DOT__uut__DOT__h0 = 0x6a09e667U;
        __Vdly__sha256_tb__DOT__uut__DOT__h1 = 0xbb67ae85U;
        __Vdly__sha256_tb__DOT__uut__DOT__h2 = 0x3c6ef372U;
        __Vdly__sha256_tb__DOT__uut__DOT__h3 = 0xa54ff53aU;
        __Vdly__sha256_tb__DOT__uut__DOT__h4 = 0x510e527fU;
        __Vdly__sha256_tb__DOT__uut__DOT__h5 = 0x9b05688cU;
        __Vdly__sha256_tb__DOT__uut__DOT__h6 = 0x1f83d9abU;
        __Vdly__sha256_tb__DOT__uut__DOT__h7 = 0x5be0cd19U;
        __Vdly__sha256_tb__DOT__uut__DOT__msg_idx = 0U;
        __Vdly__sha256_tb__DOT__uut__DOT__state = 1U;
    }
    vlSelfRef.sha256_tb__DOT__uut__DOT__state = __Vdly__sha256_tb__DOT__uut__DOT__state;
    vlSelfRef.sha256_tb__DOT__uut__DOT__msg_idx = __Vdly__sha256_tb__DOT__uut__DOT__msg_idx;
    vlSelfRef.sha256_tb__DOT__uut__DOT__h0 = __Vdly__sha256_tb__DOT__uut__DOT__h0;
    vlSelfRef.sha256_tb__DOT__uut__DOT__h1 = __Vdly__sha256_tb__DOT__uut__DOT__h1;
    vlSelfRef.sha256_tb__DOT__uut__DOT__h2 = __Vdly__sha256_tb__DOT__uut__DOT__h2;
    vlSelfRef.sha256_tb__DOT__uut__DOT__h3 = __Vdly__sha256_tb__DOT__uut__DOT__h3;
    vlSelfRef.sha256_tb__DOT__uut__DOT__h4 = __Vdly__sha256_tb__DOT__uut__DOT__h4;
    vlSelfRef.sha256_tb__DOT__uut__DOT__h5 = __Vdly__sha256_tb__DOT__uut__DOT__h5;
    vlSelfRef.sha256_tb__DOT__uut__DOT__h6 = __Vdly__sha256_tb__DOT__uut__DOT__h6;
    vlSelfRef.sha256_tb__DOT__uut__DOT__h7 = __Vdly__sha256_tb__DOT__uut__DOT__h7;
    vlSelfRef.sha256_tb__DOT__uut__DOT__d = __Vdly__sha256_tb__DOT__uut__DOT__d;
    vlSelfRef.sha256_tb__DOT__uut__DOT__c = __Vdly__sha256_tb__DOT__uut__DOT__c;
    vlSelfRef.sha256_tb__DOT__uut__DOT__b = __Vdly__sha256_tb__DOT__uut__DOT__b;
    vlSelfRef.sha256_tb__DOT__uut__DOT__a = __Vdly__sha256_tb__DOT__uut__DOT__a;
    vlSelfRef.sha256_tb__DOT__uut__DOT__t = __Vdly__sha256_tb__DOT__uut__DOT__t;
    vlSelfRef.sha256_tb__DOT__uut__DOT__h = __Vdly__sha256_tb__DOT__uut__DOT__h;
    vlSelfRef.sha256_tb__DOT__uut__DOT__g = __Vdly__sha256_tb__DOT__uut__DOT__g;
    vlSelfRef.sha256_tb__DOT__uut__DOT__f = __Vdly__sha256_tb__DOT__uut__DOT__f;
    vlSelfRef.sha256_tb__DOT__uut__DOT__e = __Vdly__sha256_tb__DOT__uut__DOT__e;
    if (__VdlySet__sha256_tb__DOT__uut__DOT__w__v0) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.sha256_tb__DOT__uut__DOT__w[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__sha256_tb__DOT__uut__DOT__w__v64) {
        vlSelfRef.sha256_tb__DOT__uut__DOT__w[__VdlyDim0__sha256_tb__DOT__uut__DOT__w__v64] 
            = __VdlyVal__sha256_tb__DOT__uut__DOT__w__v64;
    }
    if (__VdlySet__sha256_tb__DOT__uut__DOT__w__v65) {
        vlSelfRef.sha256_tb__DOT__uut__DOT__w[__VdlyDim0__sha256_tb__DOT__uut__DOT__w__v65] 
            = __VdlyVal__sha256_tb__DOT__uut__DOT__w__v65;
    }
    vlSelfRef.sha256_tb__DOT__uut__DOT__T2 = (([&]() {
                vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__sigma0__5__x 
                    = vlSelfRef.sha256_tb__DOT__uut__DOT__a;
                vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__sigma0__5__Vfuncout 
                    = ((([&]() {
                                vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__6__x 
                                    = vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__sigma0__5__x;
                                vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__6__Vfuncout 
                                    = (VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__6__x, 2U) 
                                       | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__6__x, 0x1eU));
                            }(), vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__6__Vfuncout) 
                        ^ ([&]() {
                                vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__7__x 
                                    = vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__sigma0__5__x;
                                vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__7__Vfuncout 
                                    = (VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__7__x, 0xdU) 
                                       | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__7__x, 0x13U));
                            }(), vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__7__Vfuncout)) 
                       ^ ([&]() {
                            vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__8__x 
                                = vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__sigma0__5__x;
                            vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__8__Vfuncout 
                                = (VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__8__x, 0x16U) 
                                   | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__8__x, 0xaU));
                        }(), vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__8__Vfuncout));
            }(), vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__sigma0__5__Vfuncout) 
                                              + ([&]() {
                vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__maj__9__z 
                    = vlSelfRef.sha256_tb__DOT__uut__DOT__c;
                vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__maj__9__y 
                    = vlSelfRef.sha256_tb__DOT__uut__DOT__b;
                vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__maj__9__x 
                    = vlSelfRef.sha256_tb__DOT__uut__DOT__a;
                vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__maj__9__Vfuncout 
                    = (((vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__maj__9__x 
                         & vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__maj__9__y) 
                        ^ (vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__maj__9__x 
                           & vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__maj__9__z)) 
                       ^ (vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__maj__9__y 
                          & vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__maj__9__z));
            }(), vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__maj__9__Vfuncout));
    vlSelfRef.sha256_tb__DOT__uut__DOT__T1 = ((((vlSelfRef.sha256_tb__DOT__uut__DOT__h 
                                                 + 
                                                 ([&]() {
                            vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__sigma1__0__x 
                                = vlSelfRef.sha256_tb__DOT__uut__DOT__e;
                            vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__sigma1__0__Vfuncout 
                                = ((([&]() {
                                            vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__1__x 
                                                = vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__sigma1__0__x;
                                            vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__1__Vfuncout 
                                                = (
                                                   VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__1__x, 6U) 
                                                   | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__1__x, 0x1aU));
                                        }(), vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__1__Vfuncout) 
                                    ^ ([&]() {
                                            vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__2__x 
                                                = vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__sigma1__0__x;
                                            vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__2__Vfuncout 
                                                = (
                                                   VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__2__x, 0xbU) 
                                                   | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__2__x, 0x15U));
                                        }(), vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__2__Vfuncout)) 
                                   ^ ([&]() {
                                        vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__3__x 
                                            = vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__sigma1__0__x;
                                        vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__3__Vfuncout 
                                            = (VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__3__x, 0x19U) 
                                               | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__3__x, 7U));
                                    }(), vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__3__Vfuncout));
                        }(), vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__sigma1__0__Vfuncout)) 
                                                + ([&]() {
                        vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__ch__4__z 
                            = vlSelfRef.sha256_tb__DOT__uut__DOT__g;
                        vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__ch__4__y 
                            = vlSelfRef.sha256_tb__DOT__uut__DOT__f;
                        vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__ch__4__x 
                            = vlSelfRef.sha256_tb__DOT__uut__DOT__e;
                        vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__ch__4__Vfuncout 
                            = ((vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__ch__4__x 
                                & vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__ch__4__y) 
                               ^ ((~ vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__ch__4__x) 
                                  & vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__ch__4__z));
                    }(), vlSelfRef.__Vfunc_sha256_tb__DOT__uut__DOT__ch__4__Vfuncout)) 
                                               + vlSelfRef.sha256_tb__DOT__uut__DOT__K
                                               [(0x3fU 
                                                 & (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__t))]) 
                                              + vlSelfRef.sha256_tb__DOT__uut__DOT__w
                                              [(0x3fU 
                                                & (IData)(vlSelfRef.sha256_tb__DOT__uut__DOT__t))]);
}

void Vsha256_core___024root___timing_commit(Vsha256_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_core___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h50804cde__0.commit(
                                                   "@([changed] sha256_tb.ready)");
    }
}

void Vsha256_core___024root___timing_resume(Vsha256_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_core___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h50804cde__0.resume(
                                                   "@([changed] sha256_tb.ready)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vsha256_core___024root___eval_triggers__act(Vsha256_core___024root* vlSelf);

bool Vsha256_core___024root___eval_phase__act(Vsha256_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_core___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsha256_core___024root___eval_triggers__act(vlSelf);
    Vsha256_core___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsha256_core___024root___timing_resume(vlSelf);
        Vsha256_core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsha256_core___024root___eval_phase__nba(Vsha256_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_core___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsha256_core___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsha256_core___024root___dump_triggers__nba(Vsha256_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsha256_core___024root___dump_triggers__act(Vsha256_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vsha256_core___024root___eval(Vsha256_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_core___024root___eval\n"); );
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
            Vsha256_core___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sha256_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vsha256_core___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sha256_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsha256_core___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsha256_core___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsha256_core___024root___eval_debug_assertions(Vsha256_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_core___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
