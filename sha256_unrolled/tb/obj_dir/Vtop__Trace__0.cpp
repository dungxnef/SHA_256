// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgWData(oldp+0,(vlSelf->top__DOT__dut__DOT__padded_input),512);
        bufp->chgWData(oldp+16,(vlSelf->top__DOT__dut__DOT__hash_val_disp),256);
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__dut__DOT__core__DOT__done));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__dut__DOT__core__DOT__w_rdy));
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__dut__DOT__core__DOT__stop_w_calc));
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__dut__DOT__core__DOT__count_1),6);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__dut__DOT__core__DOT__count16_1),6);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__dut__DOT__core__DOT__count15_1),6);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__dut__DOT__core__DOT__count7_1),6);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__dut__DOT__core__DOT__count2_1),6);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__dut__DOT__core__DOT__count_2),6);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__dut__DOT__core__DOT__count16_2),6);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__dut__DOT__core__DOT__count15_2),6);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__dut__DOT__core__DOT__count7_2),6);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__dut__DOT__core__DOT__count2_2),6);
        bufp->chgIData(oldp+37,(((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__stop_w_calc)
                                  ? (((((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                           << 0xfU) 
                                          | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                             >> 0x11U)) 
                                         ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                             << 0xdU) 
                                            | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                               >> 0x13U))) 
                                        ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                           >> 0xaU)) 
                                       + ((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                             << 0x19U) 
                                            | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                               >> 7U)) 
                                           ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                               << 0xeU) 
                                              | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                                 >> 0x12U))) 
                                          ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                             >> 3U))) 
                                      + vlSelf->top__DOT__dut__DOT__core__DOT__w
                                      [vlSelf->top__DOT__dut__DOT__core__DOT__count16_1]) 
                                     + vlSelf->top__DOT__dut__DOT__core__DOT__w
                                     [vlSelf->top__DOT__dut__DOT__core__DOT__count7_1])
                                  : 0U)),32);
        bufp->chgIData(oldp+38,(((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__stop_w_calc)
                                  ? (((((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                           << 0xfU) 
                                          | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                             >> 0x11U)) 
                                         ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                             << 0xdU) 
                                            | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                               >> 0x13U))) 
                                        ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                           >> 0xaU)) 
                                       + ((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                             << 0x19U) 
                                            | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                               >> 7U)) 
                                           ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                               << 0xeU) 
                                              | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                                 >> 0x12U))) 
                                          ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                             >> 3U))) 
                                      + vlSelf->top__DOT__dut__DOT__core__DOT__w
                                      [vlSelf->top__DOT__dut__DOT__core__DOT__count16_2]) 
                                     + vlSelf->top__DOT__dut__DOT__core__DOT__w
                                     [vlSelf->top__DOT__dut__DOT__core__DOT__count7_2])
                                  : 0U)),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__dut__DOT__core__DOT__w_o1),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__dut__DOT__core__DOT__w_o2),32);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__dut__DOT__core__DOT__count_hash1),7);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__dut__DOT__core__DOT__count_hash2),7);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__dut__DOT__core__DOT__w_value1),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__dut__DOT__core__DOT__k_value1),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__dut__DOT__core__DOT__w_value2),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__dut__DOT__core__DOT__k_value2),32);
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__dut__DOT__core__DOT__reset_hash));
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__dut__DOT__core__DOT__hash_cal));
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__g),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h),32);
        bufp->chgIData(oldp+57,((((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                     << 0x1eU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                                  >> 2U)) 
                                   ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                       << 0x13U) | 
                                      (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                       >> 0xdU))) ^ 
                                  ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                    << 0xaU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                                >> 0x16U))) 
                                 + (((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                      & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b) 
                                     ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                        & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)) 
                                    ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b 
                                       & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)))),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2),32);
        bufp->chgIData(oldp+59,(((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress1__DOT__t2 
                                  + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress1__DOT__t4)),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p4),32);
        bufp->chgIData(oldp+61,((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p4 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)),32);
        bufp->chgIData(oldp+62,(((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p4 
                                  + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress2__DOT__t1) 
                                 + ((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                       & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b) 
                                      ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b 
                                         & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new)) 
                                     ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                        & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new)) 
                                    + ((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                          << 0x1eU) 
                                         | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                            >> 2U)) 
                                        ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                            << 0x13U) 
                                           | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                              >> 0xdU))) 
                                       ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                           << 0xaU) 
                                          | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                             >> 0x16U)))))),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new),32);
        bufp->chgIData(oldp+64,((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress2__DOT__t1 
                                 + (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p4 
                                    + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c))),32);
        bufp->chgIData(oldp+65,(((IData)(0x6a09e667U) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a)),32);
        bufp->chgIData(oldp+66,(((IData)(0xbb67ae85U) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b)),32);
        bufp->chgIData(oldp+67,(((IData)(0x3c6ef372U) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)),32);
        bufp->chgIData(oldp+68,(((IData)(0xa54ff53aU) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d)),32);
        bufp->chgIData(oldp+69,(((IData)(0x510e527fU) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e)),32);
        bufp->chgIData(oldp+70,(((IData)(0x9b05688cU) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f)),32);
        bufp->chgIData(oldp+71,(((IData)(0x1f83d9abU) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__g)),32);
        bufp->chgIData(oldp+72,(((IData)(0x5be0cd19U) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h)),32);
        bufp->chgIData(oldp+73,(((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                  & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f) 
                                 ^ ((~ vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e) 
                                    & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__g))),32);
        bufp->chgIData(oldp+74,((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                   & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b) 
                                  ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                     & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)) 
                                 ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b 
                                    & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c))),32);
        bufp->chgIData(oldp+75,(((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                    << 0x1aU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                                 >> 6U)) 
                                  ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                      << 0x15U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                                   >> 0xbU))) 
                                 ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                     << 7U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                               >> 0x19U)))),32);
        bufp->chgIData(oldp+76,(((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                    << 0x1eU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                                 >> 2U)) 
                                  ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                      << 0x13U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                                   >> 0xdU))) 
                                 ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                     << 0xaU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                                 >> 0x16U)))),32);
        bufp->chgIData(oldp+77,((vlSelf->top__DOT__dut__DOT__core__DOT__w_value2 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__k_value2)),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress1__DOT__t2),32);
        bufp->chgIData(oldp+79,((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress1__DOT__t2 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h)),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress1__DOT__t4),32);
        bufp->chgIData(oldp+81,((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d)),32);
        bufp->chgIData(oldp+82,(((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h 
                                  + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress1__DOT__t2)),32);
        bufp->chgIData(oldp+83,(((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2 
                                  & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e) 
                                 ^ ((~ vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2) 
                                    & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f))),32);
        bufp->chgIData(oldp+84,((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                   & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b) 
                                  ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b 
                                     & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new)) 
                                 ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                    & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new))),32);
        bufp->chgIData(oldp+85,(((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                    << 0x1eU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                                 >> 2U)) 
                                  ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                      << 0x13U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                                   >> 0xdU))) 
                                 ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                     << 0xaU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                                 >> 0x16U)))),32);
        bufp->chgIData(oldp+86,(((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2 
                                    << 0x1aU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2 
                                                 >> 6U)) 
                                  ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2 
                                      << 0x15U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2 
                                                   >> 0xbU))) 
                                 ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2 
                                     << 7U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2 
                                               >> 0x19U)))),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress2__DOT__t1),32);
        bufp->chgIData(oldp+88,((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p4 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress2__DOT__t1)),32);
        bufp->chgIData(oldp+89,(((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                    & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b) 
                                   ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b 
                                      & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new)) 
                                  ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                     & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new)) 
                                 + ((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                       << 0x1eU) | 
                                      (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                       >> 2U)) ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                                   << 0x13U) 
                                                  | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                                     >> 0xdU))) 
                                    ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                        << 0xaU) | 
                                       (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                        >> 0x16U))))),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__dut__DOT__core__DOT__w
                                [vlSelf->top__DOT__dut__DOT__core__DOT__count16_1]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__dut__DOT__core__DOT__w
                                [vlSelf->top__DOT__dut__DOT__core__DOT__count7_1]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2),32);
        bufp->chgIData(oldp+94,(((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                    << 0x19U) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                                 >> 7U)) 
                                  ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                      << 0xeU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                                  >> 0x12U))) 
                                 ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                    >> 3U))),32);
        bufp->chgIData(oldp+95,(((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                    << 0xfU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                                >> 0x11U)) 
                                  ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                      << 0xdU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                                  >> 0x13U))) 
                                 ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                    >> 0xaU))),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__dut__DOT__core__DOT__w
                                [vlSelf->top__DOT__dut__DOT__core__DOT__count16_2]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__dut__DOT__core__DOT__w
                                [vlSelf->top__DOT__dut__DOT__core__DOT__count7_2]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2),32);
        bufp->chgIData(oldp+100,(((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                     << 0x19U) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                                  >> 7U)) 
                                   ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                       << 0xeU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                                   >> 0x12U))) 
                                  ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                     >> 3U))),32);
        bufp->chgIData(oldp+101,(((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                     << 0xfU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                                 >> 0x11U)) 
                                   ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                       << 0xdU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                                   >> 0x13U))) 
                                  ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                     >> 0xaU))),32);
        bufp->chgCData(oldp+102,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__add_512_block),6);
        bufp->chgQData(oldp+103,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__m_size),64);
        bufp->chgBit(oldp+105,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__temp_chk));
        bufp->chgBit(oldp+106,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__padd0s_done));
        bufp->chgBit(oldp+107,((0x3fU == (IData)(vlSelf->top__DOT__dut__DOT__input_processed__DOT__add_512_block))));
    }
    bufp->chgBit(oldp+108,(vlSelf->clk_i));
    bufp->chgBit(oldp+109,(vlSelf->rst_ni));
    bufp->chgBit(oldp+110,(vlSelf->stop));
    bufp->chgBit(oldp+111,(vlSelf->ready));
    bufp->chgCData(oldp+112,(vlSelf->data_i),8);
    bufp->chgBit(oldp+113,(vlSelf->overflow));
    bufp->chgBit(oldp+114,(vlSelf->padded));
    bufp->chgBit(oldp+115,(vlSelf->rdy_o));
    bufp->chgCData(oldp+116,(vlSelf->clk_cycle_o),7);
    bufp->chgWData(oldp+117,(vlSelf->result_o),256);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
