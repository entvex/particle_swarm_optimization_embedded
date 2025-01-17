// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _floatPrototypec_multiply_HH_
#define _floatPrototypec_multiply_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "floatPrototypec_fbkb.h"

namespace ap_rtl {

struct floatPrototypec_multiply : public sc_module {
    // Port declarations 6
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_lv<32> > float1;
    sc_in< sc_lv<32> > float2;
    sc_out< sc_lv<32> > float3;
    sc_out< sc_logic > float3_ap_vld;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    floatPrototypec_multiply(sc_module_name name);
    SC_HAS_PROCESS(floatPrototypec_multiply);

    ~floatPrototypec_multiply();

    sc_trace_file* mVcdFile;

    floatPrototypec_fbkb<1,4,32,32,32>* floatPrototypec_fbkb_U0;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > grp_fu_83_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state1;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_state3;
    static const sc_lv<4> ap_ST_fsm_state4;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state4();
    void thread_float3();
    void thread_float3_ap_vld();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
