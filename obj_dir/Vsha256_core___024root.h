// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsha256_core.h for the primary calling header

#ifndef VERILATED_VSHA256_CORE___024ROOT_H_
#define VERILATED_VSHA256_CORE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsha256_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsha256_core___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ sha256_tb__DOT__clk;
    CData/*0:0*/ sha256_tb__DOT__rst;
    CData/*0:0*/ sha256_tb__DOT__start;
    CData/*0:0*/ sha256_tb__DOT__ready;
    CData/*7:0*/ sha256_tb__DOT__expected_byte;
    CData/*7:0*/ sha256_tb__DOT__actual_byte;
    CData/*6:0*/ sha256_tb__DOT__uut__DOT__t;
    CData/*6:0*/ sha256_tb__DOT__uut__DOT__msg_idx;
    CData/*1:0*/ sha256_tb__DOT__uut__DOT__state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sha256_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sha256_tb__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sha256_tb__DOT__ready__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VlWide<8>/*255:0*/ sha256_tb__DOT__hash_out;
    VlWide<16>/*511:0*/ sha256_tb__DOT__block_in;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__a;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__b;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__c;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__d;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__e;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__f;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__g;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__h;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__h0;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__h1;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__h2;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__h3;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__h4;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__h5;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__h6;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__h7;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__T1;
    IData/*31:0*/ sha256_tb__DOT__uut__DOT__T2;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__sigma1__0__Vfuncout;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__sigma1__0__x;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__1__Vfuncout;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__1__x;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__2__Vfuncout;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__2__x;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__3__Vfuncout;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__3__x;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__ch__4__Vfuncout;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__ch__4__x;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__ch__4__y;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__ch__4__z;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__sigma0__5__Vfuncout;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__sigma0__5__x;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__6__Vfuncout;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__6__x;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__7__Vfuncout;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__7__x;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__8__Vfuncout;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__rightrotate__8__x;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__maj__9__Vfuncout;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__maj__9__x;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__maj__9__y;
    IData/*31:0*/ __Vfunc_sha256_tb__DOT__uut__DOT__maj__9__z;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 64> sha256_tb__DOT__uut__DOT__K;
    VlUnpacked<IData/*31:0*/, 64> sha256_tb__DOT__uut__DOT__w;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h50804cde__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsha256_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsha256_core___024root(Vsha256_core__Syms* symsp, const char* v__name);
    ~Vsha256_core___024root();
    VL_UNCOPYABLE(Vsha256_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
