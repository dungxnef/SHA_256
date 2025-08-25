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
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__dut__DOT__core__DOT__done));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__dut__DOT__core__DOT__w_rdy));
        bufp->chgBit(oldp+18,(((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__w_rdy) 
                               & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__done)))));
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__dut__DOT__core__DOT__count),6);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__dut__DOT__core__DOT__count16),6);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__dut__DOT__core__DOT__count15),6);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__dut__DOT__core__DOT__count7),6);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__dut__DOT__core__DOT__count2),6);
        bufp->chgIData(oldp+24,((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__w_rdy) 
                                  & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__done)))
                                  ? (((((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                           << 0xfU) 
                                          | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                             >> 0x11U)) 
                                         ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                             << 0xdU) 
                                            | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                               >> 0x13U))) 
                                        ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                           >> 0xaU)) 
                                       + ((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                             << 0x19U) 
                                            | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                               >> 7U)) 
                                           ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                               << 0xeU) 
                                              | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                                 >> 0x12U))) 
                                          ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                             >> 3U))) 
                                      + vlSelf->top__DOT__dut__DOT__core__DOT__w
                                      [vlSelf->top__DOT__dut__DOT__core__DOT__count16]) 
                                     + vlSelf->top__DOT__dut__DOT__core__DOT__w
                                     [vlSelf->top__DOT__dut__DOT__core__DOT__count7])
                                  : 0U)),32);
        bufp->chgIData(oldp+25,(((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__done)
                                  ? vlSelf->top__DOT__dut__DOT__core__DOT__w
                                 [0x3fU] : (((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__w_rdy) 
                                             & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__done)))
                                             ? ((((
                                                   (((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                                      << 0xfU) 
                                                     | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                                        >> 0x11U)) 
                                                    ^ 
                                                    ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                                      << 0xdU) 
                                                     | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                                        >> 0x13U))) 
                                                   ^ 
                                                   (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                                    >> 0xaU)) 
                                                  + 
                                                  ((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                                      << 0x19U) 
                                                     | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                                        >> 7U)) 
                                                    ^ 
                                                    ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                                      << 0xeU) 
                                                     | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                                        >> 0x12U))) 
                                                   ^ 
                                                   (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                                    >> 3U))) 
                                                 + 
                                                 vlSelf->top__DOT__dut__DOT__core__DOT__w
                                                 [vlSelf->top__DOT__dut__DOT__core__DOT__count16]) 
                                                + vlSelf->top__DOT__dut__DOT__core__DOT__w
                                                [vlSelf->top__DOT__dut__DOT__core__DOT__count7])
                                             : 0U))),32);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__dut__DOT__core__DOT__count_hash),7);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__dut__DOT__core__DOT__w_value),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__dut__DOT__core__DOT__k_value),32);
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__dut__DOT__core__DOT__hash_cal));
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__g),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h),32);
        bufp->chgIData(oldp+38,((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress__DOT__temp1 
                                 + (((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                        << 0x1eU) | 
                                       (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                        >> 2U)) ^ (
                                                   (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                                    << 0x13U) 
                                                   | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                                      >> 0xdU))) 
                                     ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                         << 0xaU) | 
                                        (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                         >> 0x16U))) 
                                    + (((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                         & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b) 
                                        ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                           & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)) 
                                       ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b 
                                          & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c))))),32);
        bufp->chgIData(oldp+39,((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress__DOT__temp1)),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h_new),32);
        bufp->chgIData(oldp+41,(((IData)(0x6a09e667U) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a)),32);
        bufp->chgIData(oldp+42,(((IData)(0xbb67ae85U) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b)),32);
        bufp->chgIData(oldp+43,(((IData)(0x3c6ef372U) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)),32);
        bufp->chgIData(oldp+44,(((IData)(0xa54ff53aU) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d)),32);
        bufp->chgIData(oldp+45,(((IData)(0x510e527fU) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e)),32);
        bufp->chgIData(oldp+46,(((IData)(0x9b05688cU) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f)),32);
        bufp->chgIData(oldp+47,(((IData)(0x1f83d9abU) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__g)),32);
        bufp->chgIData(oldp+48,(((IData)(0x5be0cd19U) 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h)),32);
        bufp->chgIData(oldp+49,(((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                  & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f) 
                                 ^ ((~ vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e) 
                                    & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__g))),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress__DOT__temp1),32);
        bufp->chgIData(oldp+51,((((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
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
        bufp->chgIData(oldp+52,((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                   & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b) 
                                  ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                     & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)) 
                                 ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b 
                                    & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c))),32);
        bufp->chgIData(oldp+53,(((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                    << 0x1aU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                                 >> 6U)) 
                                  ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                      << 0x15U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                                   >> 0xbU))) 
                                 ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                     << 7U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                               >> 0x19U)))),32);
        bufp->chgIData(oldp+54,(((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                    << 0x1eU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                                 >> 2U)) 
                                  ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                      << 0x13U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                                   >> 0xdU))) 
                                 ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                     << 0xaU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                                 >> 0x16U)))),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__dut__DOT__core__DOT__w
                                [vlSelf->top__DOT__dut__DOT__core__DOT__count16]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__dut__DOT__core__DOT__w
                                [vlSelf->top__DOT__dut__DOT__core__DOT__count7]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2),32);
        bufp->chgIData(oldp+59,(((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                    << 0x19U) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                                 >> 7U)) 
                                  ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                      << 0xeU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                                  >> 0x12U))) 
                                 ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                    >> 3U))),32);
        bufp->chgIData(oldp+60,(((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                    << 0xfU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                                >> 0x11U)) 
                                  ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                      << 0xdU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                                  >> 0x13U))) 
                                 ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                    >> 0xaU))),32);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__add_512_block),6);
        bufp->chgQData(oldp+62,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__m_size),64);
        bufp->chgBit(oldp+64,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__temp_chk));
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__padd0s_done));
        bufp->chgBit(oldp+66,((0x3fU == (IData)(vlSelf->top__DOT__dut__DOT__input_processed__DOT__add_512_block))));
    }
    bufp->chgBit(oldp+67,(vlSelf->clk_i));
    bufp->chgBit(oldp+68,(vlSelf->rst_ni));
    bufp->chgBit(oldp+69,(vlSelf->stop));
    bufp->chgBit(oldp+70,(vlSelf->ready));
    bufp->chgCData(oldp+71,(vlSelf->data_i),8);
    bufp->chgBit(oldp+72,(vlSelf->overflow));
    bufp->chgBit(oldp+73,(vlSelf->padded));
    bufp->chgBit(oldp+74,(vlSelf->rdy_o));
    bufp->chgCData(oldp+75,(vlSelf->clk_cycle_o),7);
    bufp->chgWData(oldp+76,(vlSelf->result_o),256);
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
