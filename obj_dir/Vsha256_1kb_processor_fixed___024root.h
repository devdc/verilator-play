// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsha256_1kb_processor_fixed.h for the primary calling header

#ifndef VERILATED_VSHA256_1KB_PROCESSOR_FIXED___024ROOT_H_
#define VERILATED_VSHA256_1KB_PROCESSOR_FIXED___024ROOT_H_  // guard

#include "verilated.h"


class Vsha256_1kb_processor_fixed__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsha256_1kb_processor_fixed___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(start,0,0);
        VL_OUT8(done,0,0);
        CData/*2:0*/ sha256_1kb_processor_fixed__DOT__state;
        CData/*4:0*/ sha256_1kb_processor_fixed__DOT__block_count;
        CData/*0:0*/ sha256_1kb_processor_fixed__DOT__core_start;
        CData/*0:0*/ sha256_1kb_processor_fixed__DOT__core_ready;
        CData/*0:0*/ sha256_1kb_processor_fixed__DOT__core_start_delayed;
        CData/*0:0*/ sha256_1kb_processor_fixed__DOT____Vlvbound_hd962f325__0;
        CData/*6:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__t;
        CData/*1:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__state;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        VL_INW(data_in,8191,0,256);
        VL_OUTW(hash_out,255,0,8);
        VlWide<16>/*511:0*/ sha256_1kb_processor_fixed__DOT__core_block_in;
        VlWide<8>/*255:0*/ sha256_1kb_processor_fixed__DOT__core_hash_out;
        VlWide<272>/*8703:0*/ sha256_1kb_processor_fixed__DOT__padded_data;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__i;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__a;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__b;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__c;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__d;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__e;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__f;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__g;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__h;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__h0;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__h1;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__h2;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__h3;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__h4;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__h5;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__h6;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__h7;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__T1;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__T2;
        IData/*31:0*/ sha256_1kb_processor_fixed__DOT__core_inst__DOT__i;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__sigma1__0__Vfuncout;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__sigma1__0__x;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__rightrotate__1__Vfuncout;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__rightrotate__1__x;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__rightrotate__2__Vfuncout;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__rightrotate__2__x;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__rightrotate__3__Vfuncout;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__rightrotate__3__x;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__ch__4__Vfuncout;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__ch__4__x;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__ch__4__y;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__ch__4__z;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__sigma0__5__Vfuncout;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__sigma0__5__x;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__rightrotate__6__Vfuncout;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__rightrotate__6__x;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__rightrotate__7__Vfuncout;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__rightrotate__7__x;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__rightrotate__8__Vfuncout;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__rightrotate__8__x;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__maj__9__Vfuncout;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__maj__9__x;
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__maj__9__y;
    };
    struct {
        IData/*31:0*/ __Vfunc_sha256_1kb_processor_fixed__DOT__core_inst__DOT__maj__9__z;
        VlWide<272>/*8703:0*/ __Vdly__sha256_1kb_processor_fixed__DOT__padded_data;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 64> sha256_1kb_processor_fixed__DOT__core_inst__DOT__K;
        VlUnpacked<IData/*31:0*/, 64> sha256_1kb_processor_fixed__DOT__core_inst__DOT__w;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsha256_1kb_processor_fixed__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsha256_1kb_processor_fixed___024root(Vsha256_1kb_processor_fixed__Syms* symsp, const char* v__name);
    ~Vsha256_1kb_processor_fixed___024root();
    VL_UNCOPYABLE(Vsha256_1kb_processor_fixed___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
