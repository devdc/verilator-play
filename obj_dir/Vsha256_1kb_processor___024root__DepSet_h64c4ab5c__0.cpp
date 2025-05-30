// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsha256_1kb_processor.h for the primary calling header

#include "Vsha256_1kb_processor__pch.h"
#include "Vsha256_1kb_processor___024root.h"

void Vsha256_1kb_processor___024root___eval_act(Vsha256_1kb_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_1kb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vsha256_1kb_processor___024root___nba_sequent__TOP__0(Vsha256_1kb_processor___024root* vlSelf);

void Vsha256_1kb_processor___024root___eval_nba(Vsha256_1kb_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_1kb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsha256_1kb_processor___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlWide<8>/*255:0*/ Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0;
extern const VlWide<16>/*511:0*/ Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0;
extern const VlWide<272>/*8703:0*/ Vsha256_1kb_processor__ConstPool__CONST_h8fb7f46e_0;

VL_INLINE_OPT void Vsha256_1kb_processor___024root___nba_sequent__TOP__0(Vsha256_1kb_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_1kb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig1__10__Vfuncout;
    __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig1__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig1__10__x;
    __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig1__10__x = 0;
    IData/*31:0*/ __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__11__Vfuncout;
    __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__11__x;
    __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__11__x = 0;
    IData/*31:0*/ __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__12__Vfuncout;
    __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__12__x;
    __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__12__x = 0;
    IData/*31:0*/ __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig0__13__Vfuncout;
    __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig0__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig0__13__x;
    __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig0__13__x = 0;
    IData/*31:0*/ __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__14__Vfuncout;
    __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__14__x;
    __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__14__x = 0;
    IData/*31:0*/ __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__15__Vfuncout;
    __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__15__x;
    __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__15__x = 0;
    CData/*2:0*/ __Vdly__sha256_1kb_processor__DOT__state;
    __Vdly__sha256_1kb_processor__DOT__state = 0;
    CData/*4:0*/ __Vdly__sha256_1kb_processor__DOT__block_count;
    __Vdly__sha256_1kb_processor__DOT__block_count = 0;
    CData/*0:0*/ __Vdly__sha256_1kb_processor__DOT__core_start;
    __Vdly__sha256_1kb_processor__DOT__core_start = 0;
    VlWide<16>/*511:0*/ __Vdly__sha256_1kb_processor__DOT__core_block_in;
    VL_ZERO_W(512, __Vdly__sha256_1kb_processor__DOT__core_block_in);
    CData/*1:0*/ __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__state;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__state = 0;
    CData/*5:0*/ __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__t;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__t = 0;
    CData/*5:0*/ __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__msg_idx;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__msg_idx = 0;
    IData/*31:0*/ __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h0;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h0 = 0;
    IData/*31:0*/ __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h1;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h1 = 0;
    IData/*31:0*/ __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h2;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h2 = 0;
    IData/*31:0*/ __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h3;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h3 = 0;
    IData/*31:0*/ __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h4;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h4 = 0;
    IData/*31:0*/ __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h5;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h5 = 0;
    IData/*31:0*/ __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h6;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h6 = 0;
    IData/*31:0*/ __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h7;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h7 = 0;
    IData/*31:0*/ __VdlyVal__sha256_1kb_processor__DOT__core_inst__DOT__w__v64;
    __VdlyVal__sha256_1kb_processor__DOT__core_inst__DOT__w__v64 = 0;
    CData/*5:0*/ __VdlyDim0__sha256_1kb_processor__DOT__core_inst__DOT__w__v64;
    __VdlyDim0__sha256_1kb_processor__DOT__core_inst__DOT__w__v64 = 0;
    IData/*31:0*/ __VdlyVal__sha256_1kb_processor__DOT__core_inst__DOT__w__v65;
    __VdlyVal__sha256_1kb_processor__DOT__core_inst__DOT__w__v65 = 0;
    CData/*5:0*/ __VdlyDim0__sha256_1kb_processor__DOT__core_inst__DOT__w__v65;
    __VdlyDim0__sha256_1kb_processor__DOT__core_inst__DOT__w__v65 = 0;
    CData/*0:0*/ __VdlySet__sha256_1kb_processor__DOT__core_inst__DOT__w__v0;
    __VdlySet__sha256_1kb_processor__DOT__core_inst__DOT__w__v0 = 0;
    CData/*0:0*/ __VdlySet__sha256_1kb_processor__DOT__core_inst__DOT__w__v64;
    __VdlySet__sha256_1kb_processor__DOT__core_inst__DOT__w__v64 = 0;
    CData/*0:0*/ __VdlySet__sha256_1kb_processor__DOT__core_inst__DOT__w__v65;
    __VdlySet__sha256_1kb_processor__DOT__core_inst__DOT__w__v65 = 0;
    VlWide<257>/*8223:0*/ __Vtemp_3;
    // Body
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h7 
        = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h7;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h6 
        = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h6;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h5 
        = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h5;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h4 
        = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h4;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h3 
        = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h3;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h2 
        = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h2;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h1 
        = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h1;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h0 
        = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h0;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__msg_idx 
        = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__state 
        = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__state;
    __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__t 
        = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__t;
    __VdlySet__sha256_1kb_processor__DOT__core_inst__DOT__w__v0 = 0U;
    __VdlySet__sha256_1kb_processor__DOT__core_inst__DOT__w__v64 = 0U;
    __VdlySet__sha256_1kb_processor__DOT__core_inst__DOT__w__v65 = 0U;
    VL_ASSIGN_W(8704,vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data, vlSelfRef.sha256_1kb_processor__DOT__padded_data);
    __Vdly__sha256_1kb_processor__DOT__core_block_in[0U] 
        = vlSelfRef.sha256_1kb_processor__DOT__core_block_in[0U];
    __Vdly__sha256_1kb_processor__DOT__core_block_in[1U] 
        = vlSelfRef.sha256_1kb_processor__DOT__core_block_in[1U];
    __Vdly__sha256_1kb_processor__DOT__core_block_in[2U] 
        = vlSelfRef.sha256_1kb_processor__DOT__core_block_in[2U];
    __Vdly__sha256_1kb_processor__DOT__core_block_in[3U] 
        = vlSelfRef.sha256_1kb_processor__DOT__core_block_in[3U];
    __Vdly__sha256_1kb_processor__DOT__core_block_in[4U] 
        = vlSelfRef.sha256_1kb_processor__DOT__core_block_in[4U];
    __Vdly__sha256_1kb_processor__DOT__core_block_in[5U] 
        = vlSelfRef.sha256_1kb_processor__DOT__core_block_in[5U];
    __Vdly__sha256_1kb_processor__DOT__core_block_in[6U] 
        = vlSelfRef.sha256_1kb_processor__DOT__core_block_in[6U];
    __Vdly__sha256_1kb_processor__DOT__core_block_in[7U] 
        = vlSelfRef.sha256_1kb_processor__DOT__core_block_in[7U];
    __Vdly__sha256_1kb_processor__DOT__core_block_in[8U] 
        = vlSelfRef.sha256_1kb_processor__DOT__core_block_in[8U];
    __Vdly__sha256_1kb_processor__DOT__core_block_in[9U] 
        = vlSelfRef.sha256_1kb_processor__DOT__core_block_in[9U];
    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xaU] 
        = vlSelfRef.sha256_1kb_processor__DOT__core_block_in[0xaU];
    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xbU] 
        = vlSelfRef.sha256_1kb_processor__DOT__core_block_in[0xbU];
    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xcU] 
        = vlSelfRef.sha256_1kb_processor__DOT__core_block_in[0xcU];
    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xdU] 
        = vlSelfRef.sha256_1kb_processor__DOT__core_block_in[0xdU];
    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xeU] 
        = vlSelfRef.sha256_1kb_processor__DOT__core_block_in[0xeU];
    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xfU] 
        = vlSelfRef.sha256_1kb_processor__DOT__core_block_in[0xfU];
    __Vdly__sha256_1kb_processor__DOT__core_start = vlSelfRef.sha256_1kb_processor__DOT__core_start;
    __Vdly__sha256_1kb_processor__DOT__block_count 
        = vlSelfRef.sha256_1kb_processor__DOT__block_count;
    __Vdly__sha256_1kb_processor__DOT__state = vlSelfRef.sha256_1kb_processor__DOT__state;
    if (VL_UNLIKELY(vlSelfRef.rst)) {
        VL_WRITEF_NX("SHA256_1KB_PROCESSOR: Reset\n",0);
        __Vdly__sha256_1kb_processor__DOT__state = 0U;
        vlSelfRef.done = 0U;
        vlSelfRef.hash_out[0U] = Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.hash_out[1U] = Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.hash_out[2U] = Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.hash_out[3U] = Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.hash_out[4U] = Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.hash_out[5U] = Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.hash_out[6U] = Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.hash_out[7U] = Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0[7U];
        __Vdly__sha256_1kb_processor__DOT__block_count = 0U;
        __Vdly__sha256_1kb_processor__DOT__core_start = 0U;
        __Vdly__sha256_1kb_processor__DOT__core_block_in[0U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[0U];
        __Vdly__sha256_1kb_processor__DOT__core_block_in[1U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[1U];
        __Vdly__sha256_1kb_processor__DOT__core_block_in[2U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[2U];
        __Vdly__sha256_1kb_processor__DOT__core_block_in[3U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[3U];
        __Vdly__sha256_1kb_processor__DOT__core_block_in[4U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[4U];
        __Vdly__sha256_1kb_processor__DOT__core_block_in[5U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[5U];
        __Vdly__sha256_1kb_processor__DOT__core_block_in[6U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[6U];
        __Vdly__sha256_1kb_processor__DOT__core_block_in[7U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[7U];
        __Vdly__sha256_1kb_processor__DOT__core_block_in[8U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[8U];
        __Vdly__sha256_1kb_processor__DOT__core_block_in[9U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[9U];
        __Vdly__sha256_1kb_processor__DOT__core_block_in[0xaU] 
            = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vdly__sha256_1kb_processor__DOT__core_block_in[0xbU] 
            = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vdly__sha256_1kb_processor__DOT__core_block_in[0xcU] 
            = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vdly__sha256_1kb_processor__DOT__core_block_in[0xdU] 
            = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vdly__sha256_1kb_processor__DOT__core_block_in[0xeU] 
            = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vdly__sha256_1kb_processor__DOT__core_block_in[0xfU] 
            = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[0xfU];
        VL_ASSIGN_W(8704,vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data, Vsha256_1kb_processor__ConstPool__CONST_h8fb7f46e_0);
    } else if ((4U & (IData)(vlSelfRef.sha256_1kb_processor__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.sha256_1kb_processor__DOT__state))) {
            __Vdly__sha256_1kb_processor__DOT__state = 0U;
        } else if ((1U & (IData)(vlSelfRef.sha256_1kb_processor__DOT__state))) {
            __Vdly__sha256_1kb_processor__DOT__state = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.start)))) {
            __Vdly__sha256_1kb_processor__DOT__state = 0U;
            vlSelfRef.done = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.sha256_1kb_processor__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.sha256_1kb_processor__DOT__state))) {
            if (vlSelfRef.sha256_1kb_processor__DOT__core_start) {
                __Vdly__sha256_1kb_processor__DOT__core_start = 0U;
            }
            if (VL_UNLIKELY(((IData)(vlSelfRef.sha256_1kb_processor__DOT__core_ready) 
                             & (~ (IData)(vlSelfRef.sha256_1kb_processor__DOT__core_start))))) {
                __Vdly__sha256_1kb_processor__DOT__block_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count)));
                VL_WRITEF_NX("SHA256_1KB_PROCESSOR: Block %10# completed\n",0,
                             32,((IData)(1U) + (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count)));
                __Vdly__sha256_1kb_processor__DOT__state = 2U;
            }
        } else if (((IData)(vlSelfRef.sha256_1kb_processor__DOT__core_ready) 
                    & (~ (IData)(vlSelfRef.sha256_1kb_processor__DOT__core_start)))) {
            if (VL_LIKELY((0x11U > (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count)))) {
                if ((0x21ffU >= (0x3fffU & (((IData)(0x21ffU) 
                                             - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                            - (IData)(0x1ffU))))) {
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[0U] 
                        = (((0U == (0x1fU & (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU))))
                             ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                                     ((IData)(1U) + 
                                      (0x1ffU & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU)))))) 
                           | (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                              (0x1ffU & ((((IData)(0x21ffU) 
                                           - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                          - (IData)(0x1ffU)) 
                                         >> 5U))] >> 
                              (0x1fU & (((IData)(0x21ffU) 
                                         - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                        - (IData)(0x1ffU)))));
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[1U] 
                        = (((0U == (0x1fU & (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU))))
                             ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                                     ((IData)(2U) + 
                                      (0x1ffU & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU)))))) 
                           | (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                              ((IData)(1U) + (0x1ffU 
                                              & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                              >> (0x1fU & (((IData)(0x21ffU) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                           - (IData)(0x1ffU)))));
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[2U] 
                        = (((0U == (0x1fU & (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU))))
                             ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                                     ((IData)(3U) + 
                                      (0x1ffU & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU)))))) 
                           | (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                              ((IData)(2U) + (0x1ffU 
                                              & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                              >> (0x1fU & (((IData)(0x21ffU) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                           - (IData)(0x1ffU)))));
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[3U] 
                        = (((0U == (0x1fU & (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU))))
                             ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                                     ((IData)(4U) + 
                                      (0x1ffU & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU)))))) 
                           | (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                              ((IData)(3U) + (0x1ffU 
                                              & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                              >> (0x1fU & (((IData)(0x21ffU) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                           - (IData)(0x1ffU)))));
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[4U] 
                        = (((0U == (0x1fU & (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU))))
                             ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                                     ((IData)(5U) + 
                                      (0x1ffU & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU)))))) 
                           | (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                              ((IData)(4U) + (0x1ffU 
                                              & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                              >> (0x1fU & (((IData)(0x21ffU) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                           - (IData)(0x1ffU)))));
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[5U] 
                        = (((0U == (0x1fU & (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU))))
                             ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                                     ((IData)(6U) + 
                                      (0x1ffU & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU)))))) 
                           | (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                              ((IData)(5U) + (0x1ffU 
                                              & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                              >> (0x1fU & (((IData)(0x21ffU) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                           - (IData)(0x1ffU)))));
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[6U] 
                        = (((0U == (0x1fU & (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU))))
                             ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                                     ((IData)(7U) + 
                                      (0x1ffU & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU)))))) 
                           | (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                              ((IData)(6U) + (0x1ffU 
                                              & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                              >> (0x1fU & (((IData)(0x21ffU) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                           - (IData)(0x1ffU)))));
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[7U] 
                        = (((0U == (0x1fU & (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU))))
                             ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                                     ((IData)(8U) + 
                                      (0x1ffU & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU)))))) 
                           | (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                              ((IData)(7U) + (0x1ffU 
                                              & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                              >> (0x1fU & (((IData)(0x21ffU) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                           - (IData)(0x1ffU)))));
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[8U] 
                        = (((0U == (0x1fU & (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU))))
                             ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                                     ((IData)(9U) + 
                                      (0x1ffU & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU)))))) 
                           | (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                              ((IData)(8U) + (0x1ffU 
                                              & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                              >> (0x1fU & (((IData)(0x21ffU) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                           - (IData)(0x1ffU)))));
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[9U] 
                        = (((0U == (0x1fU & (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU))))
                             ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                                     ((IData)(0xaU) 
                                      + (0x1ffU & (
                                                   (((IData)(0x21ffU) 
                                                     - 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                    - (IData)(0x1ffU)) 
                                                   >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU)))))) 
                           | (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                              ((IData)(9U) + (0x1ffU 
                                              & ((((IData)(0x21ffU) 
                                                   - 
                                                   VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                  - (IData)(0x1ffU)) 
                                                 >> 5U)))] 
                              >> (0x1fU & (((IData)(0x21ffU) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                           - (IData)(0x1ffU)))));
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xaU] 
                        = (((0U == (0x1fU & (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU))))
                             ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                                     ((IData)(0xbU) 
                                      + (0x1ffU & (
                                                   (((IData)(0x21ffU) 
                                                     - 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                    - (IData)(0x1ffU)) 
                                                   >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU)))))) 
                           | (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                              ((IData)(0xaU) + (0x1ffU 
                                                & ((((IData)(0x21ffU) 
                                                     - 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                    - (IData)(0x1ffU)) 
                                                   >> 5U)))] 
                              >> (0x1fU & (((IData)(0x21ffU) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                           - (IData)(0x1ffU)))));
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xbU] 
                        = (((0U == (0x1fU & (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU))))
                             ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                                     ((IData)(0xcU) 
                                      + (0x1ffU & (
                                                   (((IData)(0x21ffU) 
                                                     - 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                    - (IData)(0x1ffU)) 
                                                   >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU)))))) 
                           | (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                              ((IData)(0xbU) + (0x1ffU 
                                                & ((((IData)(0x21ffU) 
                                                     - 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                    - (IData)(0x1ffU)) 
                                                   >> 5U)))] 
                              >> (0x1fU & (((IData)(0x21ffU) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                           - (IData)(0x1ffU)))));
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xcU] 
                        = (((0U == (0x1fU & (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU))))
                             ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                                     ((IData)(0xdU) 
                                      + (0x1ffU & (
                                                   (((IData)(0x21ffU) 
                                                     - 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                    - (IData)(0x1ffU)) 
                                                   >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU)))))) 
                           | (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                              ((IData)(0xcU) + (0x1ffU 
                                                & ((((IData)(0x21ffU) 
                                                     - 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                    - (IData)(0x1ffU)) 
                                                   >> 5U)))] 
                              >> (0x1fU & (((IData)(0x21ffU) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                           - (IData)(0x1ffU)))));
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xdU] 
                        = (((0U == (0x1fU & (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU))))
                             ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                                     ((IData)(0xeU) 
                                      + (0x1ffU & (
                                                   (((IData)(0x21ffU) 
                                                     - 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                    - (IData)(0x1ffU)) 
                                                   >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU)))))) 
                           | (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                              ((IData)(0xdU) + (0x1ffU 
                                                & ((((IData)(0x21ffU) 
                                                     - 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                    - (IData)(0x1ffU)) 
                                                   >> 5U)))] 
                              >> (0x1fU & (((IData)(0x21ffU) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                           - (IData)(0x1ffU)))));
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xeU] 
                        = (((0U == (0x1fU & (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU))))
                             ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                                     ((IData)(0xfU) 
                                      + (0x1ffU & (
                                                   (((IData)(0x21ffU) 
                                                     - 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                    - (IData)(0x1ffU)) 
                                                   >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU)))))) 
                           | (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                              ((IData)(0xeU) + (0x1ffU 
                                                & ((((IData)(0x21ffU) 
                                                     - 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                    - (IData)(0x1ffU)) 
                                                   >> 5U)))] 
                              >> (0x1fU & (((IData)(0x21ffU) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                           - (IData)(0x1ffU)))));
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xfU] 
                        = (((0U == (0x1fU & (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU))))
                             ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                                     ((IData)(0x10U) 
                                      + (0x1ffU & (
                                                   (((IData)(0x21ffU) 
                                                     - 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                    - (IData)(0x1ffU)) 
                                                   >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (((IData)(0x21ffU) 
                                              - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                             - (IData)(0x1ffU)))))) 
                           | (vlSelfRef.sha256_1kb_processor__DOT__padded_data[
                              ((IData)(0xfU) + (0x1ffU 
                                                & ((((IData)(0x21ffU) 
                                                     - 
                                                     VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                                    - (IData)(0x1ffU)) 
                                                   >> 5U)))] 
                              >> (0x1fU & (((IData)(0x21ffU) 
                                            - VL_SHIFTL_III(14,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count), 9U)) 
                                           - (IData)(0x1ffU)))));
                } else {
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[0U] 
                        = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[0U];
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[1U] 
                        = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[1U];
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[2U] 
                        = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[2U];
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[3U] 
                        = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[3U];
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[4U] 
                        = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[4U];
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[5U] 
                        = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[5U];
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[6U] 
                        = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[6U];
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[7U] 
                        = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[7U];
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[8U] 
                        = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[8U];
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[9U] 
                        = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[9U];
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xaU] 
                        = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[0xaU];
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xbU] 
                        = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[0xbU];
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xcU] 
                        = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[0xcU];
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xdU] 
                        = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[0xdU];
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xeU] 
                        = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[0xeU];
                    __Vdly__sha256_1kb_processor__DOT__core_block_in[0xfU] 
                        = Vsha256_1kb_processor__ConstPool__CONST_h93e1b771_0[0xfU];
                }
                __Vdly__sha256_1kb_processor__DOT__core_start = 1U;
                __Vdly__sha256_1kb_processor__DOT__state = 3U;
                VL_WRITEF_NX("SHA256_1KB_PROCESSOR: Processing block %10#/17\n",0,
                             32,((IData)(1U) + (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count)));
            } else {
                VL_WRITEF_NX("SHA256_1KB_PROCESSOR: All blocks processed\n",0);
                vlSelfRef.hash_out[0U] = vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[0U];
                vlSelfRef.hash_out[1U] = vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[1U];
                vlSelfRef.hash_out[2U] = vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[2U];
                vlSelfRef.hash_out[3U] = vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[3U];
                vlSelfRef.hash_out[4U] = vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[4U];
                vlSelfRef.hash_out[5U] = vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[5U];
                vlSelfRef.hash_out[6U] = vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[6U];
                vlSelfRef.hash_out[7U] = vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[7U];
                vlSelfRef.done = 1U;
                __Vdly__sha256_1kb_processor__DOT__state = 4U;
                VL_WRITEF_NX("Final SHA256 hash: %064x\n",0,
                             256,vlSelfRef.sha256_1kb_processor__DOT__core_hash_out.data());
            }
        }
    } else if ((1U & (IData)(vlSelfRef.sha256_1kb_processor__DOT__state))) {
        __Vdly__sha256_1kb_processor__DOT__state = 0U;
    } else if (VL_UNLIKELY(vlSelfRef.start)) {
        VL_WRITEF_NX("SHA256_1KB_PROCESSOR: Starting processing of 1KB data\n",0);
        vlSelfRef.done = 0U;
        __Vdly__sha256_1kb_processor__DOT__block_count = 0U;
        VL_CONCAT_WWI(8193,8192,1, __Vtemp_3, vlSelfRef.data_in, 1U);
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xfU] 
            = ((0x7fffffffU & vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xfU]) 
               | (__Vtemp_3[0U] << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x10U] 
            = ((__Vtemp_3[0U] >> 1U) | (__Vtemp_3[1U] 
                                        << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x11U] 
            = ((__Vtemp_3[1U] >> 1U) | (__Vtemp_3[2U] 
                                        << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x12U] 
            = ((__Vtemp_3[2U] >> 1U) | (__Vtemp_3[3U] 
                                        << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x13U] 
            = ((__Vtemp_3[3U] >> 1U) | (__Vtemp_3[4U] 
                                        << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x14U] 
            = ((__Vtemp_3[4U] >> 1U) | (__Vtemp_3[5U] 
                                        << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x15U] 
            = ((__Vtemp_3[5U] >> 1U) | (__Vtemp_3[6U] 
                                        << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x16U] 
            = ((__Vtemp_3[6U] >> 1U) | (__Vtemp_3[7U] 
                                        << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x17U] 
            = ((__Vtemp_3[7U] >> 1U) | (__Vtemp_3[8U] 
                                        << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x18U] 
            = ((__Vtemp_3[8U] >> 1U) | (__Vtemp_3[9U] 
                                        << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x19U] 
            = ((__Vtemp_3[9U] >> 1U) | (__Vtemp_3[0xaU] 
                                        << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x1aU] 
            = ((__Vtemp_3[0xaU] >> 1U) | (__Vtemp_3[0xbU] 
                                          << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x1bU] 
            = ((__Vtemp_3[0xbU] >> 1U) | (__Vtemp_3[0xcU] 
                                          << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x1cU] 
            = ((__Vtemp_3[0xcU] >> 1U) | (__Vtemp_3[0xdU] 
                                          << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x1dU] 
            = ((__Vtemp_3[0xdU] >> 1U) | (__Vtemp_3[0xeU] 
                                          << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x1eU] 
            = ((__Vtemp_3[0xeU] >> 1U) | (__Vtemp_3[0xfU] 
                                          << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x1fU] 
            = ((__Vtemp_3[0xfU] >> 1U) | (__Vtemp_3[0x10U] 
                                          << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x20U] 
            = ((__Vtemp_3[0x10U] >> 1U) | (__Vtemp_3[0x11U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x21U] 
            = ((__Vtemp_3[0x11U] >> 1U) | (__Vtemp_3[0x12U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x22U] 
            = ((__Vtemp_3[0x12U] >> 1U) | (__Vtemp_3[0x13U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x23U] 
            = ((__Vtemp_3[0x13U] >> 1U) | (__Vtemp_3[0x14U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x24U] 
            = ((__Vtemp_3[0x14U] >> 1U) | (__Vtemp_3[0x15U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x25U] 
            = ((__Vtemp_3[0x15U] >> 1U) | (__Vtemp_3[0x16U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x26U] 
            = ((__Vtemp_3[0x16U] >> 1U) | (__Vtemp_3[0x17U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x27U] 
            = ((__Vtemp_3[0x17U] >> 1U) | (__Vtemp_3[0x18U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x28U] 
            = ((__Vtemp_3[0x18U] >> 1U) | (__Vtemp_3[0x19U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x29U] 
            = ((__Vtemp_3[0x19U] >> 1U) | (__Vtemp_3[0x1aU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x2aU] 
            = ((__Vtemp_3[0x1aU] >> 1U) | (__Vtemp_3[0x1bU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x2bU] 
            = ((__Vtemp_3[0x1bU] >> 1U) | (__Vtemp_3[0x1cU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x2cU] 
            = ((__Vtemp_3[0x1cU] >> 1U) | (__Vtemp_3[0x1dU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x2dU] 
            = ((__Vtemp_3[0x1dU] >> 1U) | (__Vtemp_3[0x1eU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x2eU] 
            = ((__Vtemp_3[0x1eU] >> 1U) | (__Vtemp_3[0x1fU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x2fU] 
            = ((__Vtemp_3[0x1fU] >> 1U) | (__Vtemp_3[0x20U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x30U] 
            = ((__Vtemp_3[0x20U] >> 1U) | (__Vtemp_3[0x21U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x31U] 
            = ((__Vtemp_3[0x21U] >> 1U) | (__Vtemp_3[0x22U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x32U] 
            = ((__Vtemp_3[0x22U] >> 1U) | (__Vtemp_3[0x23U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x33U] 
            = ((__Vtemp_3[0x23U] >> 1U) | (__Vtemp_3[0x24U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x34U] 
            = ((__Vtemp_3[0x24U] >> 1U) | (__Vtemp_3[0x25U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x35U] 
            = ((__Vtemp_3[0x25U] >> 1U) | (__Vtemp_3[0x26U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x36U] 
            = ((__Vtemp_3[0x26U] >> 1U) | (__Vtemp_3[0x27U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x37U] 
            = ((__Vtemp_3[0x27U] >> 1U) | (__Vtemp_3[0x28U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x38U] 
            = ((__Vtemp_3[0x28U] >> 1U) | (__Vtemp_3[0x29U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x39U] 
            = ((__Vtemp_3[0x29U] >> 1U) | (__Vtemp_3[0x2aU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x3aU] 
            = ((__Vtemp_3[0x2aU] >> 1U) | (__Vtemp_3[0x2bU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x3bU] 
            = ((__Vtemp_3[0x2bU] >> 1U) | (__Vtemp_3[0x2cU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x3cU] 
            = ((__Vtemp_3[0x2cU] >> 1U) | (__Vtemp_3[0x2dU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x3dU] 
            = ((__Vtemp_3[0x2dU] >> 1U) | (__Vtemp_3[0x2eU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x3eU] 
            = ((__Vtemp_3[0x2eU] >> 1U) | (__Vtemp_3[0x2fU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x3fU] 
            = ((__Vtemp_3[0x2fU] >> 1U) | (__Vtemp_3[0x30U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x40U] 
            = ((__Vtemp_3[0x30U] >> 1U) | (__Vtemp_3[0x31U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x41U] 
            = ((__Vtemp_3[0x31U] >> 1U) | (__Vtemp_3[0x32U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x42U] 
            = ((__Vtemp_3[0x32U] >> 1U) | (__Vtemp_3[0x33U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x43U] 
            = ((__Vtemp_3[0x33U] >> 1U) | (__Vtemp_3[0x34U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x44U] 
            = ((__Vtemp_3[0x34U] >> 1U) | (__Vtemp_3[0x35U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x45U] 
            = ((__Vtemp_3[0x35U] >> 1U) | (__Vtemp_3[0x36U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x46U] 
            = ((__Vtemp_3[0x36U] >> 1U) | (__Vtemp_3[0x37U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x47U] 
            = ((__Vtemp_3[0x37U] >> 1U) | (__Vtemp_3[0x38U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x48U] 
            = ((__Vtemp_3[0x38U] >> 1U) | (__Vtemp_3[0x39U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x49U] 
            = ((__Vtemp_3[0x39U] >> 1U) | (__Vtemp_3[0x3aU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x4aU] 
            = ((__Vtemp_3[0x3aU] >> 1U) | (__Vtemp_3[0x3bU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x4bU] 
            = ((__Vtemp_3[0x3bU] >> 1U) | (__Vtemp_3[0x3cU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x4cU] 
            = ((__Vtemp_3[0x3cU] >> 1U) | (__Vtemp_3[0x3dU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x4dU] 
            = ((__Vtemp_3[0x3dU] >> 1U) | (__Vtemp_3[0x3eU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x4eU] 
            = ((__Vtemp_3[0x3eU] >> 1U) | (__Vtemp_3[0x3fU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x4fU] 
            = ((__Vtemp_3[0x3fU] >> 1U) | (__Vtemp_3[0x40U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x50U] 
            = ((__Vtemp_3[0x40U] >> 1U) | (__Vtemp_3[0x41U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x51U] 
            = ((__Vtemp_3[0x41U] >> 1U) | (__Vtemp_3[0x42U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x52U] 
            = ((__Vtemp_3[0x42U] >> 1U) | (__Vtemp_3[0x43U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x53U] 
            = ((__Vtemp_3[0x43U] >> 1U) | (__Vtemp_3[0x44U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x54U] 
            = ((__Vtemp_3[0x44U] >> 1U) | (__Vtemp_3[0x45U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x55U] 
            = ((__Vtemp_3[0x45U] >> 1U) | (__Vtemp_3[0x46U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x56U] 
            = ((__Vtemp_3[0x46U] >> 1U) | (__Vtemp_3[0x47U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x57U] 
            = ((__Vtemp_3[0x47U] >> 1U) | (__Vtemp_3[0x48U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x58U] 
            = ((__Vtemp_3[0x48U] >> 1U) | (__Vtemp_3[0x49U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x59U] 
            = ((__Vtemp_3[0x49U] >> 1U) | (__Vtemp_3[0x4aU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x5aU] 
            = ((__Vtemp_3[0x4aU] >> 1U) | (__Vtemp_3[0x4bU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x5bU] 
            = ((__Vtemp_3[0x4bU] >> 1U) | (__Vtemp_3[0x4cU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x5cU] 
            = ((__Vtemp_3[0x4cU] >> 1U) | (__Vtemp_3[0x4dU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x5dU] 
            = ((__Vtemp_3[0x4dU] >> 1U) | (__Vtemp_3[0x4eU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x5eU] 
            = ((__Vtemp_3[0x4eU] >> 1U) | (__Vtemp_3[0x4fU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x5fU] 
            = ((__Vtemp_3[0x4fU] >> 1U) | (__Vtemp_3[0x50U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x60U] 
            = ((__Vtemp_3[0x50U] >> 1U) | (__Vtemp_3[0x51U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x61U] 
            = ((__Vtemp_3[0x51U] >> 1U) | (__Vtemp_3[0x52U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x62U] 
            = ((__Vtemp_3[0x52U] >> 1U) | (__Vtemp_3[0x53U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x63U] 
            = ((__Vtemp_3[0x53U] >> 1U) | (__Vtemp_3[0x54U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x64U] 
            = ((__Vtemp_3[0x54U] >> 1U) | (__Vtemp_3[0x55U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x65U] 
            = ((__Vtemp_3[0x55U] >> 1U) | (__Vtemp_3[0x56U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x66U] 
            = ((__Vtemp_3[0x56U] >> 1U) | (__Vtemp_3[0x57U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x67U] 
            = ((__Vtemp_3[0x57U] >> 1U) | (__Vtemp_3[0x58U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x68U] 
            = ((__Vtemp_3[0x58U] >> 1U) | (__Vtemp_3[0x59U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x69U] 
            = ((__Vtemp_3[0x59U] >> 1U) | (__Vtemp_3[0x5aU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x6aU] 
            = ((__Vtemp_3[0x5aU] >> 1U) | (__Vtemp_3[0x5bU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x6bU] 
            = ((__Vtemp_3[0x5bU] >> 1U) | (__Vtemp_3[0x5cU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x6cU] 
            = ((__Vtemp_3[0x5cU] >> 1U) | (__Vtemp_3[0x5dU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x6dU] 
            = ((__Vtemp_3[0x5dU] >> 1U) | (__Vtemp_3[0x5eU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x6eU] 
            = ((__Vtemp_3[0x5eU] >> 1U) | (__Vtemp_3[0x5fU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x6fU] 
            = ((__Vtemp_3[0x5fU] >> 1U) | (__Vtemp_3[0x60U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x70U] 
            = ((__Vtemp_3[0x60U] >> 1U) | (__Vtemp_3[0x61U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x71U] 
            = ((__Vtemp_3[0x61U] >> 1U) | (__Vtemp_3[0x62U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x72U] 
            = ((__Vtemp_3[0x62U] >> 1U) | (__Vtemp_3[0x63U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x73U] 
            = ((__Vtemp_3[0x63U] >> 1U) | (__Vtemp_3[0x64U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x74U] 
            = ((__Vtemp_3[0x64U] >> 1U) | (__Vtemp_3[0x65U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x75U] 
            = ((__Vtemp_3[0x65U] >> 1U) | (__Vtemp_3[0x66U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x76U] 
            = ((__Vtemp_3[0x66U] >> 1U) | (__Vtemp_3[0x67U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x77U] 
            = ((__Vtemp_3[0x67U] >> 1U) | (__Vtemp_3[0x68U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x78U] 
            = ((__Vtemp_3[0x68U] >> 1U) | (__Vtemp_3[0x69U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x79U] 
            = ((__Vtemp_3[0x69U] >> 1U) | (__Vtemp_3[0x6aU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x7aU] 
            = ((__Vtemp_3[0x6aU] >> 1U) | (__Vtemp_3[0x6bU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x7bU] 
            = ((__Vtemp_3[0x6bU] >> 1U) | (__Vtemp_3[0x6cU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x7cU] 
            = ((__Vtemp_3[0x6cU] >> 1U) | (__Vtemp_3[0x6dU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x7dU] 
            = ((__Vtemp_3[0x6dU] >> 1U) | (__Vtemp_3[0x6eU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x7eU] 
            = ((__Vtemp_3[0x6eU] >> 1U) | (__Vtemp_3[0x6fU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x7fU] 
            = ((__Vtemp_3[0x6fU] >> 1U) | (__Vtemp_3[0x70U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x80U] 
            = ((__Vtemp_3[0x70U] >> 1U) | (__Vtemp_3[0x71U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x81U] 
            = ((__Vtemp_3[0x71U] >> 1U) | (__Vtemp_3[0x72U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x82U] 
            = ((__Vtemp_3[0x72U] >> 1U) | (__Vtemp_3[0x73U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x83U] 
            = ((__Vtemp_3[0x73U] >> 1U) | (__Vtemp_3[0x74U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x84U] 
            = ((__Vtemp_3[0x74U] >> 1U) | (__Vtemp_3[0x75U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x85U] 
            = ((__Vtemp_3[0x75U] >> 1U) | (__Vtemp_3[0x76U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x86U] 
            = ((__Vtemp_3[0x76U] >> 1U) | (__Vtemp_3[0x77U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x87U] 
            = ((__Vtemp_3[0x77U] >> 1U) | (__Vtemp_3[0x78U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x88U] 
            = ((__Vtemp_3[0x78U] >> 1U) | (__Vtemp_3[0x79U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x89U] 
            = ((__Vtemp_3[0x79U] >> 1U) | (__Vtemp_3[0x7aU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x8aU] 
            = ((__Vtemp_3[0x7aU] >> 1U) | (__Vtemp_3[0x7bU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x8bU] 
            = ((__Vtemp_3[0x7bU] >> 1U) | (__Vtemp_3[0x7cU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x8cU] 
            = ((__Vtemp_3[0x7cU] >> 1U) | (__Vtemp_3[0x7dU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x8dU] 
            = ((__Vtemp_3[0x7dU] >> 1U) | (__Vtemp_3[0x7eU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x8eU] 
            = ((__Vtemp_3[0x7eU] >> 1U) | (__Vtemp_3[0x7fU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x8fU] 
            = ((__Vtemp_3[0x7fU] >> 1U) | (__Vtemp_3[0x80U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x90U] 
            = ((__Vtemp_3[0x80U] >> 1U) | (__Vtemp_3[0x81U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x91U] 
            = ((__Vtemp_3[0x81U] >> 1U) | (__Vtemp_3[0x82U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x92U] 
            = ((__Vtemp_3[0x82U] >> 1U) | (__Vtemp_3[0x83U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x93U] 
            = ((__Vtemp_3[0x83U] >> 1U) | (__Vtemp_3[0x84U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x94U] 
            = ((__Vtemp_3[0x84U] >> 1U) | (__Vtemp_3[0x85U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x95U] 
            = ((__Vtemp_3[0x85U] >> 1U) | (__Vtemp_3[0x86U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x96U] 
            = ((__Vtemp_3[0x86U] >> 1U) | (__Vtemp_3[0x87U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x97U] 
            = ((__Vtemp_3[0x87U] >> 1U) | (__Vtemp_3[0x88U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x98U] 
            = ((__Vtemp_3[0x88U] >> 1U) | (__Vtemp_3[0x89U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x99U] 
            = ((__Vtemp_3[0x89U] >> 1U) | (__Vtemp_3[0x8aU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x9aU] 
            = ((__Vtemp_3[0x8aU] >> 1U) | (__Vtemp_3[0x8bU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x9bU] 
            = ((__Vtemp_3[0x8bU] >> 1U) | (__Vtemp_3[0x8cU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x9cU] 
            = ((__Vtemp_3[0x8cU] >> 1U) | (__Vtemp_3[0x8dU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x9dU] 
            = ((__Vtemp_3[0x8dU] >> 1U) | (__Vtemp_3[0x8eU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x9eU] 
            = ((__Vtemp_3[0x8eU] >> 1U) | (__Vtemp_3[0x8fU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x9fU] 
            = ((__Vtemp_3[0x8fU] >> 1U) | (__Vtemp_3[0x90U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xa0U] 
            = ((__Vtemp_3[0x90U] >> 1U) | (__Vtemp_3[0x91U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xa1U] 
            = ((__Vtemp_3[0x91U] >> 1U) | (__Vtemp_3[0x92U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xa2U] 
            = ((__Vtemp_3[0x92U] >> 1U) | (__Vtemp_3[0x93U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xa3U] 
            = ((__Vtemp_3[0x93U] >> 1U) | (__Vtemp_3[0x94U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xa4U] 
            = ((__Vtemp_3[0x94U] >> 1U) | (__Vtemp_3[0x95U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xa5U] 
            = ((__Vtemp_3[0x95U] >> 1U) | (__Vtemp_3[0x96U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xa6U] 
            = ((__Vtemp_3[0x96U] >> 1U) | (__Vtemp_3[0x97U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xa7U] 
            = ((__Vtemp_3[0x97U] >> 1U) | (__Vtemp_3[0x98U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xa8U] 
            = ((__Vtemp_3[0x98U] >> 1U) | (__Vtemp_3[0x99U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xa9U] 
            = ((__Vtemp_3[0x99U] >> 1U) | (__Vtemp_3[0x9aU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xaaU] 
            = ((__Vtemp_3[0x9aU] >> 1U) | (__Vtemp_3[0x9bU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xabU] 
            = ((__Vtemp_3[0x9bU] >> 1U) | (__Vtemp_3[0x9cU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xacU] 
            = ((__Vtemp_3[0x9cU] >> 1U) | (__Vtemp_3[0x9dU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xadU] 
            = ((__Vtemp_3[0x9dU] >> 1U) | (__Vtemp_3[0x9eU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xaeU] 
            = ((__Vtemp_3[0x9eU] >> 1U) | (__Vtemp_3[0x9fU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xafU] 
            = ((__Vtemp_3[0x9fU] >> 1U) | (__Vtemp_3[0xa0U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xb0U] 
            = ((__Vtemp_3[0xa0U] >> 1U) | (__Vtemp_3[0xa1U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xb1U] 
            = ((__Vtemp_3[0xa1U] >> 1U) | (__Vtemp_3[0xa2U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xb2U] 
            = ((__Vtemp_3[0xa2U] >> 1U) | (__Vtemp_3[0xa3U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xb3U] 
            = ((__Vtemp_3[0xa3U] >> 1U) | (__Vtemp_3[0xa4U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xb4U] 
            = ((__Vtemp_3[0xa4U] >> 1U) | (__Vtemp_3[0xa5U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xb5U] 
            = ((__Vtemp_3[0xa5U] >> 1U) | (__Vtemp_3[0xa6U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xb6U] 
            = ((__Vtemp_3[0xa6U] >> 1U) | (__Vtemp_3[0xa7U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xb7U] 
            = ((__Vtemp_3[0xa7U] >> 1U) | (__Vtemp_3[0xa8U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xb8U] 
            = ((__Vtemp_3[0xa8U] >> 1U) | (__Vtemp_3[0xa9U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xb9U] 
            = ((__Vtemp_3[0xa9U] >> 1U) | (__Vtemp_3[0xaaU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xbaU] 
            = ((__Vtemp_3[0xaaU] >> 1U) | (__Vtemp_3[0xabU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xbbU] 
            = ((__Vtemp_3[0xabU] >> 1U) | (__Vtemp_3[0xacU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xbcU] 
            = ((__Vtemp_3[0xacU] >> 1U) | (__Vtemp_3[0xadU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xbdU] 
            = ((__Vtemp_3[0xadU] >> 1U) | (__Vtemp_3[0xaeU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xbeU] 
            = ((__Vtemp_3[0xaeU] >> 1U) | (__Vtemp_3[0xafU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xbfU] 
            = ((__Vtemp_3[0xafU] >> 1U) | (__Vtemp_3[0xb0U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xc0U] 
            = ((__Vtemp_3[0xb0U] >> 1U) | (__Vtemp_3[0xb1U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xc1U] 
            = ((__Vtemp_3[0xb1U] >> 1U) | (__Vtemp_3[0xb2U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xc2U] 
            = ((__Vtemp_3[0xb2U] >> 1U) | (__Vtemp_3[0xb3U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xc3U] 
            = ((__Vtemp_3[0xb3U] >> 1U) | (__Vtemp_3[0xb4U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xc4U] 
            = ((__Vtemp_3[0xb4U] >> 1U) | (__Vtemp_3[0xb5U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xc5U] 
            = ((__Vtemp_3[0xb5U] >> 1U) | (__Vtemp_3[0xb6U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xc6U] 
            = ((__Vtemp_3[0xb6U] >> 1U) | (__Vtemp_3[0xb7U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xc7U] 
            = ((__Vtemp_3[0xb7U] >> 1U) | (__Vtemp_3[0xb8U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xc8U] 
            = ((__Vtemp_3[0xb8U] >> 1U) | (__Vtemp_3[0xb9U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xc9U] 
            = ((__Vtemp_3[0xb9U] >> 1U) | (__Vtemp_3[0xbaU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xcaU] 
            = ((__Vtemp_3[0xbaU] >> 1U) | (__Vtemp_3[0xbbU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xcbU] 
            = ((__Vtemp_3[0xbbU] >> 1U) | (__Vtemp_3[0xbcU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xccU] 
            = ((__Vtemp_3[0xbcU] >> 1U) | (__Vtemp_3[0xbdU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xcdU] 
            = ((__Vtemp_3[0xbdU] >> 1U) | (__Vtemp_3[0xbeU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xceU] 
            = ((__Vtemp_3[0xbeU] >> 1U) | (__Vtemp_3[0xbfU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xcfU] 
            = ((__Vtemp_3[0xbfU] >> 1U) | (__Vtemp_3[0xc0U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xd0U] 
            = ((__Vtemp_3[0xc0U] >> 1U) | (__Vtemp_3[0xc1U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xd1U] 
            = ((__Vtemp_3[0xc1U] >> 1U) | (__Vtemp_3[0xc2U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xd2U] 
            = ((__Vtemp_3[0xc2U] >> 1U) | (__Vtemp_3[0xc3U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xd3U] 
            = ((__Vtemp_3[0xc3U] >> 1U) | (__Vtemp_3[0xc4U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xd4U] 
            = ((__Vtemp_3[0xc4U] >> 1U) | (__Vtemp_3[0xc5U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xd5U] 
            = ((__Vtemp_3[0xc5U] >> 1U) | (__Vtemp_3[0xc6U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xd6U] 
            = ((__Vtemp_3[0xc6U] >> 1U) | (__Vtemp_3[0xc7U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xd7U] 
            = ((__Vtemp_3[0xc7U] >> 1U) | (__Vtemp_3[0xc8U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xd8U] 
            = ((__Vtemp_3[0xc8U] >> 1U) | (__Vtemp_3[0xc9U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xd9U] 
            = ((__Vtemp_3[0xc9U] >> 1U) | (__Vtemp_3[0xcaU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xdaU] 
            = ((__Vtemp_3[0xcaU] >> 1U) | (__Vtemp_3[0xcbU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xdbU] 
            = ((__Vtemp_3[0xcbU] >> 1U) | (__Vtemp_3[0xccU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xdcU] 
            = ((__Vtemp_3[0xccU] >> 1U) | (__Vtemp_3[0xcdU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xddU] 
            = ((__Vtemp_3[0xcdU] >> 1U) | (__Vtemp_3[0xceU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xdeU] 
            = ((__Vtemp_3[0xceU] >> 1U) | (__Vtemp_3[0xcfU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xdfU] 
            = ((__Vtemp_3[0xcfU] >> 1U) | (__Vtemp_3[0xd0U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xe0U] 
            = ((__Vtemp_3[0xd0U] >> 1U) | (__Vtemp_3[0xd1U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xe1U] 
            = ((__Vtemp_3[0xd1U] >> 1U) | (__Vtemp_3[0xd2U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xe2U] 
            = ((__Vtemp_3[0xd2U] >> 1U) | (__Vtemp_3[0xd3U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xe3U] 
            = ((__Vtemp_3[0xd3U] >> 1U) | (__Vtemp_3[0xd4U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xe4U] 
            = ((__Vtemp_3[0xd4U] >> 1U) | (__Vtemp_3[0xd5U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xe5U] 
            = ((__Vtemp_3[0xd5U] >> 1U) | (__Vtemp_3[0xd6U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xe6U] 
            = ((__Vtemp_3[0xd6U] >> 1U) | (__Vtemp_3[0xd7U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xe7U] 
            = ((__Vtemp_3[0xd7U] >> 1U) | (__Vtemp_3[0xd8U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xe8U] 
            = ((__Vtemp_3[0xd8U] >> 1U) | (__Vtemp_3[0xd9U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xe9U] 
            = ((__Vtemp_3[0xd9U] >> 1U) | (__Vtemp_3[0xdaU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xeaU] 
            = ((__Vtemp_3[0xdaU] >> 1U) | (__Vtemp_3[0xdbU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xebU] 
            = ((__Vtemp_3[0xdbU] >> 1U) | (__Vtemp_3[0xdcU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xecU] 
            = ((__Vtemp_3[0xdcU] >> 1U) | (__Vtemp_3[0xddU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xedU] 
            = ((__Vtemp_3[0xddU] >> 1U) | (__Vtemp_3[0xdeU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xeeU] 
            = ((__Vtemp_3[0xdeU] >> 1U) | (__Vtemp_3[0xdfU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xefU] 
            = ((__Vtemp_3[0xdfU] >> 1U) | (__Vtemp_3[0xe0U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xf0U] 
            = ((__Vtemp_3[0xe0U] >> 1U) | (__Vtemp_3[0xe1U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xf1U] 
            = ((__Vtemp_3[0xe1U] >> 1U) | (__Vtemp_3[0xe2U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xf2U] 
            = ((__Vtemp_3[0xe2U] >> 1U) | (__Vtemp_3[0xe3U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xf3U] 
            = ((__Vtemp_3[0xe3U] >> 1U) | (__Vtemp_3[0xe4U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xf4U] 
            = ((__Vtemp_3[0xe4U] >> 1U) | (__Vtemp_3[0xe5U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xf5U] 
            = ((__Vtemp_3[0xe5U] >> 1U) | (__Vtemp_3[0xe6U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xf6U] 
            = ((__Vtemp_3[0xe6U] >> 1U) | (__Vtemp_3[0xe7U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xf7U] 
            = ((__Vtemp_3[0xe7U] >> 1U) | (__Vtemp_3[0xe8U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xf8U] 
            = ((__Vtemp_3[0xe8U] >> 1U) | (__Vtemp_3[0xe9U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xf9U] 
            = ((__Vtemp_3[0xe9U] >> 1U) | (__Vtemp_3[0xeaU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xfaU] 
            = ((__Vtemp_3[0xeaU] >> 1U) | (__Vtemp_3[0xebU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xfbU] 
            = ((__Vtemp_3[0xebU] >> 1U) | (__Vtemp_3[0xecU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xfcU] 
            = ((__Vtemp_3[0xecU] >> 1U) | (__Vtemp_3[0xedU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xfdU] 
            = ((__Vtemp_3[0xedU] >> 1U) | (__Vtemp_3[0xeeU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xfeU] 
            = ((__Vtemp_3[0xeeU] >> 1U) | (__Vtemp_3[0xefU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0xffU] 
            = ((__Vtemp_3[0xefU] >> 1U) | (__Vtemp_3[0xf0U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x100U] 
            = ((__Vtemp_3[0xf0U] >> 1U) | (__Vtemp_3[0xf1U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x101U] 
            = ((__Vtemp_3[0xf1U] >> 1U) | (__Vtemp_3[0xf2U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x102U] 
            = ((__Vtemp_3[0xf2U] >> 1U) | (__Vtemp_3[0xf3U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x103U] 
            = ((__Vtemp_3[0xf3U] >> 1U) | (__Vtemp_3[0xf4U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x104U] 
            = ((__Vtemp_3[0xf4U] >> 1U) | (__Vtemp_3[0xf5U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x105U] 
            = ((__Vtemp_3[0xf5U] >> 1U) | (__Vtemp_3[0xf6U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x106U] 
            = ((__Vtemp_3[0xf6U] >> 1U) | (__Vtemp_3[0xf7U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x107U] 
            = ((__Vtemp_3[0xf7U] >> 1U) | (__Vtemp_3[0xf8U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x108U] 
            = ((__Vtemp_3[0xf8U] >> 1U) | (__Vtemp_3[0xf9U] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x109U] 
            = ((__Vtemp_3[0xf9U] >> 1U) | (__Vtemp_3[0xfaU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x10aU] 
            = ((__Vtemp_3[0xfaU] >> 1U) | (__Vtemp_3[0xfbU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x10bU] 
            = ((__Vtemp_3[0xfbU] >> 1U) | (__Vtemp_3[0xfcU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x10cU] 
            = ((__Vtemp_3[0xfcU] >> 1U) | (__Vtemp_3[0xfdU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x10dU] 
            = ((__Vtemp_3[0xfdU] >> 1U) | (__Vtemp_3[0xfeU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x10eU] 
            = ((__Vtemp_3[0xfeU] >> 1U) | (__Vtemp_3[0xffU] 
                                           << 0x1fU));
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0x10fU] 
            = ((__Vtemp_3[0xffU] >> 1U) | (__Vtemp_3[0x100U] 
                                           << 0x1fU));
        VL_WRITEF_NX("SHA256_1KB_PROCESSOR: Data padded, total blocks: 17\n",0);
        __Vdly__sha256_1kb_processor__DOT__state = 2U;
        vlSelfRef.sha256_1kb_processor__DOT__i = 0U;
        while (VL_GTS_III(32, 0x1bfU, vlSelfRef.sha256_1kb_processor__DOT__i)) {
            vlSelfRef.sha256_1kb_processor__DOT____Vlvbound_hd962f325__0 = 0U;
            if (VL_LIKELY((0x21ffU >= (0x3fffU & ((IData)(0x1feU) 
                                                  - vlSelfRef.sha256_1kb_processor__DOT__i))))) {
                vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[(0x1ffU 
                                                                          & (((IData)(0x1feU) 
                                                                              - vlSelfRef.sha256_1kb_processor__DOT__i) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1feU) 
                                             - vlSelfRef.sha256_1kb_processor__DOT__i)))) 
                        & vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[
                        (0x1ffU & (((IData)(0x1feU) 
                                    - vlSelfRef.sha256_1kb_processor__DOT__i) 
                                   >> 5U))]) | ((IData)(vlSelfRef.sha256_1kb_processor__DOT____Vlvbound_hd962f325__0) 
                                                << 
                                                (0x1fU 
                                                 & ((IData)(0x1feU) 
                                                    - vlSelfRef.sha256_1kb_processor__DOT__i))));
            }
            vlSelfRef.sha256_1kb_processor__DOT__i 
                = ((IData)(1U) + vlSelfRef.sha256_1kb_processor__DOT__i);
        }
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[0U] = 0x2000U;
        vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data[1U] = 0U;
    }
    vlSelfRef.sha256_1kb_processor__DOT__state = __Vdly__sha256_1kb_processor__DOT__state;
    VL_ASSIGN_W(8704,vlSelfRef.sha256_1kb_processor__DOT__padded_data, vlSelfRef.__Vdly__sha256_1kb_processor__DOT__padded_data);
    if (vlSelfRef.rst) {
        vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__i = 0x40U;
        __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__state = 0U;
        vlSelfRef.sha256_1kb_processor__DOT__core_ready = 1U;
        vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[0U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[1U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[2U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[3U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[4U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[5U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[6U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[7U] 
            = Vsha256_1kb_processor__ConstPool__CONST_h9e67c271_0[7U];
        __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__t = 0U;
        __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__msg_idx = 0U;
        __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h0 = 0x6a09e667U;
        __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h1 = 0xbb67ae85U;
        __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h2 = 0x3c6ef372U;
        __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h3 = 0xa54ff53aU;
        __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h4 = 0x510e527fU;
        __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h5 = 0x9b05688cU;
        __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h6 = 0x1f83d9abU;
        __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h7 = 0x5be0cd19U;
        __VdlySet__sha256_1kb_processor__DOT__core_inst__DOT__w__v0 = 1U;
    } else if ((2U & (IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__state))) {
            vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[0U] 
                = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h7;
            vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[1U] 
                = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h6;
            vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[2U] 
                = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h5;
            vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[3U] 
                = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h4;
            vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[4U] 
                = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h3;
            vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[5U] 
                = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h2;
            vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[6U] 
                = (IData)((((QData)((IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h0)) 
                            << 0x20U) | (QData)((IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h1))));
            vlSelfRef.sha256_1kb_processor__DOT__core_hash_out[7U] 
                = (IData)(((((QData)((IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h0)) 
                             << 0x20U) | (QData)((IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h1))) 
                           >> 0x20U));
            vlSelfRef.sha256_1kb_processor__DOT__core_ready = 1U;
            if ((1U & (~ (IData)(vlSelfRef.sha256_1kb_processor__DOT__core_start)))) {
                __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__state = 0U;
            }
        } else {
            __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__t 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__t)));
            vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h 
                = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__g;
            vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__g 
                = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__f;
            vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__f 
                = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__e;
            vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__e 
                = (vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__d 
                   + vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__T1);
            vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__d 
                = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__c;
            vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__c 
                = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__b;
            vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__b 
                = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__a;
            vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__a 
                = (vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__T1 
                   + vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__T2);
        }
    } else if ((1U & (IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__state))) {
        if ((0x10U > (IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx))) {
            __VdlyVal__sha256_1kb_processor__DOT__core_inst__DOT__w__v64 
                = (((0U == (0x1fU & (((IData)(0x1ffU) 
                                      - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx), 5U)) 
                                     - (IData)(0x1fU))))
                     ? 0U : (vlSelfRef.sha256_1kb_processor__DOT__core_block_in[
                             (((IData)(0x1fU) + (0x1ffU 
                                                 & (((IData)(0x1ffU) 
                                                     - 
                                                     VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx), 5U)) 
                                                    - (IData)(0x1fU)))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & (((IData)(0x1ffU) 
                                                 - 
                                                 VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx), 5U)) 
                                                - (IData)(0x1fU)))))) 
                   | (vlSelfRef.sha256_1kb_processor__DOT__core_block_in[
                      (0xfU & ((((IData)(0x1ffU) - 
                                 VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx), 5U)) 
                                - (IData)(0x1fU)) >> 5U))] 
                      >> (0x1fU & (((IData)(0x1ffU) 
                                    - VL_SHIFTL_III(9,32,32, (IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx), 5U)) 
                                   - (IData)(0x1fU)))));
            __VdlyDim0__sha256_1kb_processor__DOT__core_inst__DOT__w__v64 
                = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx;
            __VdlySet__sha256_1kb_processor__DOT__core_inst__DOT__w__v64 = 1U;
            __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__msg_idx 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx)));
        } else {
            __VdlyVal__sha256_1kb_processor__DOT__core_inst__DOT__w__v65 
                = (((([&]() {
                                __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig1__10__x 
                                    = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__w
                                    [(0x3fU & ((IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx) 
                                               - (IData)(2U)))];
                                __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig1__10__Vfuncout 
                                    = ((([&]() {
                                                __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__11__x 
                                                    = __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig1__10__x;
                                                __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__11__Vfuncout 
                                                    = 
                                                    (VL_SHIFTR_III(32,32,8, __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__11__x, 0x11U) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__11__x, 0xfU));
                                            }(), __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__11__Vfuncout) 
                                        ^ ([&]() {
                                                __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__12__x 
                                                    = __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig1__10__x;
                                                __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__12__Vfuncout 
                                                    = 
                                                    (VL_SHIFTR_III(32,32,8, __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__12__x, 0x13U) 
                                                     | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__12__x, 0xdU));
                                            }(), __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__12__Vfuncout)) 
                                       ^ VL_SHIFTR_III(32,32,32, __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig1__10__x, 0xaU));
                            }(), __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig1__10__Vfuncout) 
                     + vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__w
                     [(0x3fU & ((IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx) 
                                - (IData)(7U)))]) + 
                    ([&]() {
                            __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig0__13__x 
                                = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__w
                                [(0x3fU & ((IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx) 
                                           - (IData)(0xfU)))];
                            __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig0__13__Vfuncout 
                                = ((([&]() {
                                            __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__14__x 
                                                = __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig0__13__x;
                                            __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__14__Vfuncout 
                                                = (
                                                   VL_SHIFTR_III(32,32,8, __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__14__x, 7U) 
                                                   | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__14__x, 0x19U));
                                        }(), __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__14__Vfuncout) 
                                    ^ ([&]() {
                                            __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__15__x 
                                                = __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig0__13__x;
                                            __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__15__Vfuncout 
                                                = (
                                                   VL_SHIFTR_III(32,32,8, __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__15__x, 0x12U) 
                                                   | VL_SHIFTL_III(32,32,32, __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__15__x, 0xeU));
                                        }(), __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__15__Vfuncout)) 
                                   ^ VL_SHIFTR_III(32,32,32, __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig0__13__x, 3U));
                        }(), __Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sig0__13__Vfuncout)) 
                   + vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__w
                   [(0x3fU & ((IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx) 
                              - (IData)(0x10U)))]);
            __VdlyDim0__sha256_1kb_processor__DOT__core_inst__DOT__w__v65 
                = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx;
            __VdlySet__sha256_1kb_processor__DOT__core_inst__DOT__w__v65 = 1U;
            __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__msg_idx 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx)));
        }
    } else if (vlSelfRef.sha256_1kb_processor__DOT__core_start) {
        vlSelfRef.sha256_1kb_processor__DOT__core_ready = 0U;
        if ((0U == (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count))) {
            __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h0 = 0x6a09e667U;
            __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h1 = 0xbb67ae85U;
            __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h2 = 0x3c6ef372U;
            __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h3 = 0xa54ff53aU;
            __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h4 = 0x510e527fU;
            __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h5 = 0x9b05688cU;
            __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h6 = 0x1f83d9abU;
            __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h7 = 0x5be0cd19U;
        }
        __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__msg_idx = 0U;
        __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__state = 1U;
    }
    vlSelfRef.sha256_1kb_processor__DOT__core_block_in[0U] 
        = __Vdly__sha256_1kb_processor__DOT__core_block_in[0U];
    vlSelfRef.sha256_1kb_processor__DOT__core_block_in[1U] 
        = __Vdly__sha256_1kb_processor__DOT__core_block_in[1U];
    vlSelfRef.sha256_1kb_processor__DOT__core_block_in[2U] 
        = __Vdly__sha256_1kb_processor__DOT__core_block_in[2U];
    vlSelfRef.sha256_1kb_processor__DOT__core_block_in[3U] 
        = __Vdly__sha256_1kb_processor__DOT__core_block_in[3U];
    vlSelfRef.sha256_1kb_processor__DOT__core_block_in[4U] 
        = __Vdly__sha256_1kb_processor__DOT__core_block_in[4U];
    vlSelfRef.sha256_1kb_processor__DOT__core_block_in[5U] 
        = __Vdly__sha256_1kb_processor__DOT__core_block_in[5U];
    vlSelfRef.sha256_1kb_processor__DOT__core_block_in[6U] 
        = __Vdly__sha256_1kb_processor__DOT__core_block_in[6U];
    vlSelfRef.sha256_1kb_processor__DOT__core_block_in[7U] 
        = __Vdly__sha256_1kb_processor__DOT__core_block_in[7U];
    vlSelfRef.sha256_1kb_processor__DOT__core_block_in[8U] 
        = __Vdly__sha256_1kb_processor__DOT__core_block_in[8U];
    vlSelfRef.sha256_1kb_processor__DOT__core_block_in[9U] 
        = __Vdly__sha256_1kb_processor__DOT__core_block_in[9U];
    vlSelfRef.sha256_1kb_processor__DOT__core_block_in[0xaU] 
        = __Vdly__sha256_1kb_processor__DOT__core_block_in[0xaU];
    vlSelfRef.sha256_1kb_processor__DOT__core_block_in[0xbU] 
        = __Vdly__sha256_1kb_processor__DOT__core_block_in[0xbU];
    vlSelfRef.sha256_1kb_processor__DOT__core_block_in[0xcU] 
        = __Vdly__sha256_1kb_processor__DOT__core_block_in[0xcU];
    vlSelfRef.sha256_1kb_processor__DOT__core_block_in[0xdU] 
        = __Vdly__sha256_1kb_processor__DOT__core_block_in[0xdU];
    vlSelfRef.sha256_1kb_processor__DOT__core_block_in[0xeU] 
        = __Vdly__sha256_1kb_processor__DOT__core_block_in[0xeU];
    vlSelfRef.sha256_1kb_processor__DOT__core_block_in[0xfU] 
        = __Vdly__sha256_1kb_processor__DOT__core_block_in[0xfU];
    vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__state 
        = __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__state;
    vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx 
        = __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__msg_idx;
    vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h0 
        = __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h0;
    vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h1 
        = __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h1;
    vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h2 
        = __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h2;
    vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h3 
        = __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h3;
    vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h4 
        = __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h4;
    vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h5 
        = __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h5;
    vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h6 
        = __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h6;
    vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h7 
        = __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__h7;
    vlSelfRef.sha256_1kb_processor__DOT__core_start 
        = __Vdly__sha256_1kb_processor__DOT__core_start;
    vlSelfRef.sha256_1kb_processor__DOT__block_count 
        = __Vdly__sha256_1kb_processor__DOT__block_count;
    vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__t 
        = __Vdly__sha256_1kb_processor__DOT__core_inst__DOT__t;
    if (__VdlySet__sha256_1kb_processor__DOT__core_inst__DOT__w__v0) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x3fU)) {
            vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__w[__Vilp1] = 0U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__sha256_1kb_processor__DOT__core_inst__DOT__w__v64) {
        vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__w[__VdlyDim0__sha256_1kb_processor__DOT__core_inst__DOT__w__v64] 
            = __VdlyVal__sha256_1kb_processor__DOT__core_inst__DOT__w__v64;
    }
    if (__VdlySet__sha256_1kb_processor__DOT__core_inst__DOT__w__v65) {
        vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__w[__VdlyDim0__sha256_1kb_processor__DOT__core_inst__DOT__w__v65] 
            = __VdlyVal__sha256_1kb_processor__DOT__core_inst__DOT__w__v65;
    }
    vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__T2 
        = (([&]() {
                vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sigma0__5__x 
                    = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__a;
                vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sigma0__5__Vfuncout 
                    = ((([&]() {
                                vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__6__x 
                                    = vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sigma0__5__x;
                                vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__6__Vfuncout 
                                    = (VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__6__x, 2U) 
                                       | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__6__x, 0x1eU));
                            }(), vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__6__Vfuncout) 
                        ^ ([&]() {
                                vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__7__x 
                                    = vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sigma0__5__x;
                                vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__7__Vfuncout 
                                    = (VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__7__x, 0xdU) 
                                       | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__7__x, 0x13U));
                            }(), vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__7__Vfuncout)) 
                       ^ ([&]() {
                            vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__8__x 
                                = vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sigma0__5__x;
                            vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__8__Vfuncout 
                                = (VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__8__x, 0x16U) 
                                   | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__8__x, 0xaU));
                        }(), vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__8__Vfuncout));
            }(), vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sigma0__5__Vfuncout) 
           + ([&]() {
                vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__maj__9__z 
                    = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__c;
                vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__maj__9__y 
                    = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__b;
                vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__maj__9__x 
                    = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__a;
                vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__maj__9__Vfuncout 
                    = (((vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__maj__9__x 
                         & vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__maj__9__y) 
                        ^ (vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__maj__9__x 
                           & vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__maj__9__z)) 
                       ^ (vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__maj__9__y 
                          & vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__maj__9__z));
            }(), vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__maj__9__Vfuncout));
    vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__T1 
        = ((((vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h 
              + ([&]() {
                            vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sigma1__0__x 
                                = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__e;
                            vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sigma1__0__Vfuncout 
                                = ((([&]() {
                                            vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__1__x 
                                                = vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sigma1__0__x;
                                            vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__1__Vfuncout 
                                                = (
                                                   VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__1__x, 6U) 
                                                   | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__1__x, 0x1aU));
                                        }(), vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__1__Vfuncout) 
                                    ^ ([&]() {
                                            vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__2__x 
                                                = vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sigma1__0__x;
                                            vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__2__Vfuncout 
                                                = (
                                                   VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__2__x, 0xbU) 
                                                   | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__2__x, 0x15U));
                                        }(), vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__2__Vfuncout)) 
                                   ^ ([&]() {
                                        vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__3__x 
                                            = vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sigma1__0__x;
                                        vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__3__Vfuncout 
                                            = (VL_SHIFTR_III(32,32,8, vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__3__x, 0x19U) 
                                               | VL_SHIFTL_III(32,32,32, vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__3__x, 7U));
                                    }(), vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__rightrotate__3__Vfuncout));
                        }(), vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__sigma1__0__Vfuncout)) 
             + ([&]() {
                        vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__ch__4__z 
                            = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__g;
                        vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__ch__4__y 
                            = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__f;
                        vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__ch__4__x 
                            = vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__e;
                        vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__ch__4__Vfuncout 
                            = ((vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__ch__4__x 
                                & vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__ch__4__y) 
                               ^ ((~ vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__ch__4__x) 
                                  & vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__ch__4__z));
                    }(), vlSelfRef.__Vfunc_sha256_1kb_processor__DOT__core_inst__DOT__ch__4__Vfuncout)) 
            + vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__K
            [vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__t]) 
           + vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__w
           [vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__t]);
}

void Vsha256_1kb_processor___024root___eval_triggers__act(Vsha256_1kb_processor___024root* vlSelf);

bool Vsha256_1kb_processor___024root___eval_phase__act(Vsha256_1kb_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_1kb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsha256_1kb_processor___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsha256_1kb_processor___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsha256_1kb_processor___024root___eval_phase__nba(Vsha256_1kb_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_1kb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsha256_1kb_processor___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsha256_1kb_processor___024root___dump_triggers__nba(Vsha256_1kb_processor___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsha256_1kb_processor___024root___dump_triggers__act(Vsha256_1kb_processor___024root* vlSelf);
#endif  // VL_DEBUG

void Vsha256_1kb_processor___024root___eval(Vsha256_1kb_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_1kb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor___024root___eval\n"); );
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
            Vsha256_1kb_processor___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sha256_1kb_processor.v", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vsha256_1kb_processor___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sha256_1kb_processor.v", 7, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsha256_1kb_processor___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsha256_1kb_processor___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsha256_1kb_processor___024root___eval_debug_assertions(Vsha256_1kb_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_1kb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelfRef.start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
