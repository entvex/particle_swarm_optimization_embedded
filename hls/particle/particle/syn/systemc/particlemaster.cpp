// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "particlemaster.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic particlemaster::ap_const_logic_1 = sc_dt::Log_1;
const sc_lv<1> particlemaster::ap_const_lv1_0 = "0";
const sc_lv<32> particlemaster::ap_const_lv32_1 = "1";
const sc_lv<1> particlemaster::ap_const_lv1_1 = "1";
const sc_lv<2> particlemaster::ap_const_lv2_0 = "00";
const sc_logic particlemaster::ap_const_logic_0 = sc_dt::Log_0;
const bool particlemaster::ap_const_boolean_1 = true;

particlemaster::particlemaster(sc_module_name name) : sc_module(name), mVcdFile(0) {
    grp_particlemaster_ReadCalculations_fu_254 = new particlemaster_ReadCalculations("grp_particlemaster_ReadCalculations_fu_254");
    grp_particlemaster_ReadCalculations_fu_254->ap_clk(clk);
    grp_particlemaster_ReadCalculations_fu_254->ap_rst(reset);
    grp_particlemaster_ReadCalculations_fu_254->calculate(grp_particlemaster_ReadCalculations_fu_254_calculate);
    grp_particlemaster_ReadCalculations_fu_254->calculate_ap_vld(grp_particlemaster_ReadCalculations_fu_254_calculate_ap_vld);
    grp_particlemaster_ReadCalculations_fu_254->finalx1(grp_particlemaster_ReadCalculations_fu_254_finalx1);
    grp_particlemaster_ReadCalculations_fu_254->finalx1_ap_vld(grp_particlemaster_ReadCalculations_fu_254_finalx1_ap_vld);
    grp_particlemaster_ReadCalculations_fu_254->finalx2(grp_particlemaster_ReadCalculations_fu_254_finalx2);
    grp_particlemaster_ReadCalculations_fu_254->finalx2_ap_vld(grp_particlemaster_ReadCalculations_fu_254_finalx2_ap_vld);
    grp_particlemaster_ReadCalculations_fu_254->complete(grp_particlemaster_ReadCalculations_fu_254_complete);
    grp_particlemaster_ReadCalculations_fu_254->complete_ap_vld(grp_particlemaster_ReadCalculations_fu_254_complete_ap_vld);
    grp_particlemaster_ReadCalculations_fu_254->x1_global(grp_particlemaster_ReadCalculations_fu_254_x1_global);
    grp_particlemaster_ReadCalculations_fu_254->x1_global_ap_vld(grp_particlemaster_ReadCalculations_fu_254_x1_global_ap_vld);
    grp_particlemaster_ReadCalculations_fu_254->x2_global(grp_particlemaster_ReadCalculations_fu_254_x2_global);
    grp_particlemaster_ReadCalculations_fu_254->x2_global_ap_vld(grp_particlemaster_ReadCalculations_fu_254_x2_global_ap_vld);
    grp_particlemaster_ReadCalculations_fu_254->x1_p1(x1_p1);
    grp_particlemaster_ReadCalculations_fu_254->x2_p1(x2_p1);
    grp_particlemaster_ReadCalculations_fu_254->ready_p1(ready_p1);
    grp_particlemaster_ReadCalculations_fu_254->x1_p2(x1_p2);
    grp_particlemaster_ReadCalculations_fu_254->x2_p2(x2_p2);
    grp_particlemaster_ReadCalculations_fu_254->ready_p2(ready_p2);
    grp_particlemaster_ReadCalculations_fu_254->x1_p3(x1_p3);
    grp_particlemaster_ReadCalculations_fu_254->x2_p3(x2_p3);
    grp_particlemaster_ReadCalculations_fu_254->ready_p3(ready_p3);
    grp_particlemaster_ReadCalculations_fu_254->x1_p4(x1_p4);
    grp_particlemaster_ReadCalculations_fu_254->x2_p4(x2_p4);
    grp_particlemaster_ReadCalculations_fu_254->ready_p4(ready_p4);
    grp_particlemaster_ReadCalculations_fu_254->x1_p5(x1_p5);
    grp_particlemaster_ReadCalculations_fu_254->x2_p5(x2_p5);
    grp_particlemaster_ReadCalculations_fu_254->ready_p5(ready_p5);
    grp_particlemaster_ReadCalculations_fu_254->x1_p6(x1_p6);
    grp_particlemaster_ReadCalculations_fu_254->x2_p6(x2_p6);
    grp_particlemaster_ReadCalculations_fu_254->ready_p6(ready_p6);
    grp_particlemaster_ReadCalculations_fu_254->x1_p7(x1_p7);
    grp_particlemaster_ReadCalculations_fu_254->x2_p7(x2_p7);
    grp_particlemaster_ReadCalculations_fu_254->ready_p7(ready_p7);
    grp_particlemaster_ReadCalculations_fu_254->x1_p8(x1_p8);
    grp_particlemaster_ReadCalculations_fu_254->x2_p8(x2_p8);
    grp_particlemaster_ReadCalculations_fu_254->ready_p8(ready_p8);
    grp_particlemaster_ReadCalculations_fu_254->x1_p9(x1_p9);
    grp_particlemaster_ReadCalculations_fu_254->x2_p9(x2_p9);
    grp_particlemaster_ReadCalculations_fu_254->ready_p9(ready_p9);
    grp_particlemaster_ReadCalculations_fu_254->x1_p10(x1_p10);
    grp_particlemaster_ReadCalculations_fu_254->x2_p10(x2_p10);
    grp_particlemaster_ReadCalculations_fu_254->ready_p10(ready_p10);
    grp_particlemaster_ReadCalculations_fu_254->particlemaster_x1_best_i(particlemaster_x1_best);
    grp_particlemaster_ReadCalculations_fu_254->particlemaster_x1_best_o(grp_particlemaster_ReadCalculations_fu_254_particlemaster_x1_best_o);
    grp_particlemaster_ReadCalculations_fu_254->particlemaster_x1_best_o_ap_vld(grp_particlemaster_ReadCalculations_fu_254_particlemaster_x1_best_o_ap_vld);
    grp_particlemaster_ReadCalculations_fu_254->particlemaster_x2_best_i(particlemaster_x2_best);
    grp_particlemaster_ReadCalculations_fu_254->particlemaster_x2_best_o(grp_particlemaster_ReadCalculations_fu_254_particlemaster_x2_best_o);
    grp_particlemaster_ReadCalculations_fu_254->particlemaster_x2_best_o_ap_vld(grp_particlemaster_ReadCalculations_fu_254_particlemaster_x2_best_o_ap_vld);
    grp_particlemaster_ReadCalculations_fu_254->particlemaster_negFormula(grp_particlemaster_ReadCalculations_fu_254_particlemaster_negFormula);
    grp_particlemaster_ReadCalculations_fu_254->particlemaster_iterations_i(particlemaster_iterations);
    grp_particlemaster_ReadCalculations_fu_254->particlemaster_iterations_o(grp_particlemaster_ReadCalculations_fu_254_particlemaster_iterations_o);
    grp_particlemaster_ReadCalculations_fu_254->particlemaster_iterations_o_ap_vld(grp_particlemaster_ReadCalculations_fu_254_particlemaster_iterations_o_ap_vld);
    grp_particlemaster_Setup_fu_384 = new particlemaster_Setup("grp_particlemaster_Setup_fu_384");
    grp_particlemaster_Setup_fu_384->ap_clk(clk);
    grp_particlemaster_Setup_fu_384->ap_rst(reset);
    grp_particlemaster_Setup_fu_384->start(start);
    grp_particlemaster_Setup_fu_384->maximum(grp_particlemaster_Setup_fu_384_maximum);
    grp_particlemaster_Setup_fu_384->maximum_ap_vld(grp_particlemaster_Setup_fu_384_maximum_ap_vld);
    grp_particlemaster_Setup_fu_384->setup(grp_particlemaster_Setup_fu_384_setup);
    grp_particlemaster_Setup_fu_384->setup_ap_vld(grp_particlemaster_Setup_fu_384_setup_ap_vld);
    grp_particlemaster_Setup_fu_384->negativeFormula(negativeFormula);
    grp_particlemaster_Setup_fu_384->c1(c1);
    grp_particlemaster_Setup_fu_384->c2(c2);
    grp_particlemaster_Setup_fu_384->cognitive(grp_particlemaster_Setup_fu_384_cognitive);
    grp_particlemaster_Setup_fu_384->cognitive_ap_vld(grp_particlemaster_Setup_fu_384_cognitive_ap_vld);
    grp_particlemaster_Setup_fu_384->social(grp_particlemaster_Setup_fu_384_social);
    grp_particlemaster_Setup_fu_384->social_ap_vld(grp_particlemaster_Setup_fu_384_social_ap_vld);
    grp_particlemaster_Setup_fu_384->particlemaster_setupDone_i(grp_particlemaster_Setup_fu_384_particlemaster_setupDone_i);
    grp_particlemaster_Setup_fu_384->particlemaster_setupDone_o(grp_particlemaster_Setup_fu_384_particlemaster_setupDone_o);
    grp_particlemaster_Setup_fu_384->particlemaster_setupDone_o_ap_vld(grp_particlemaster_Setup_fu_384_particlemaster_setupDone_o_ap_vld);
    grp_particlemaster_Setup_fu_384->particlemaster_negFormula(grp_particlemaster_Setup_fu_384_particlemaster_negFormula);
    grp_particlemaster_Setup_fu_384->particlemaster_negFormula_ap_vld(grp_particlemaster_Setup_fu_384_particlemaster_negFormula_ap_vld);
    grp_particlemaster_Setup_fu_384->particlemaster_iterations(grp_particlemaster_Setup_fu_384_particlemaster_iterations);
    grp_particlemaster_Setup_fu_384->particlemaster_iterations_ap_vld(grp_particlemaster_Setup_fu_384_particlemaster_iterations_ap_vld);

    SC_METHOD(thread_calculate);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_cognitive);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_complete);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_finalx1);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_finalx2);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_maximum);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_particlemaster_iterations);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_particlemaster_negFormula);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_particlemaster_setupDone);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_particlemaster_x1_best);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_particlemaster_x2_best);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_setup);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_social);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_x1_global);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_x2_global);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_ap_CS_fsm);

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_grp_particlemaster_ReadCalculations_fu_254_particlemaster_negFormula);
    sensitive << ( particlemaster_ss_load_fu_490_p1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( particlemaster_negFormula );

    SC_METHOD(thread_grp_particlemaster_Setup_fu_384_particlemaster_setupDone_i);
    sensitive << ( particlemaster_ss_load_fu_490_p1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( particlemaster_setupDone );

    SC_METHOD(thread_particlemaster_ss_load_fu_490_p1);

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( clk.pos() );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "particlemaster_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, clk, "(port)clk");
    sc_trace(mVcdFile, reset, "(port)reset");
    sc_trace(mVcdFile, start, "(port)start");
    sc_trace(mVcdFile, maximum, "(port)maximum");
    sc_trace(mVcdFile, calculate, "(port)calculate");
    sc_trace(mVcdFile, setup, "(port)setup");
    sc_trace(mVcdFile, negativeFormula, "(port)negativeFormula");
    sc_trace(mVcdFile, c1, "(port)c1");
    sc_trace(mVcdFile, c2, "(port)c2");
    sc_trace(mVcdFile, finalx1, "(port)finalx1");
    sc_trace(mVcdFile, finalx2, "(port)finalx2");
    sc_trace(mVcdFile, complete, "(port)complete");
    sc_trace(mVcdFile, cognitive, "(port)cognitive");
    sc_trace(mVcdFile, social, "(port)social");
    sc_trace(mVcdFile, x1_global, "(port)x1_global");
    sc_trace(mVcdFile, x2_global, "(port)x2_global");
    sc_trace(mVcdFile, x1_p1, "(port)x1_p1");
    sc_trace(mVcdFile, x2_p1, "(port)x2_p1");
    sc_trace(mVcdFile, ready_p1, "(port)ready_p1");
    sc_trace(mVcdFile, x1_p2, "(port)x1_p2");
    sc_trace(mVcdFile, x2_p2, "(port)x2_p2");
    sc_trace(mVcdFile, ready_p2, "(port)ready_p2");
    sc_trace(mVcdFile, x1_p3, "(port)x1_p3");
    sc_trace(mVcdFile, x2_p3, "(port)x2_p3");
    sc_trace(mVcdFile, ready_p3, "(port)ready_p3");
    sc_trace(mVcdFile, x1_p4, "(port)x1_p4");
    sc_trace(mVcdFile, x2_p4, "(port)x2_p4");
    sc_trace(mVcdFile, ready_p4, "(port)ready_p4");
    sc_trace(mVcdFile, x1_p5, "(port)x1_p5");
    sc_trace(mVcdFile, x2_p5, "(port)x2_p5");
    sc_trace(mVcdFile, ready_p5, "(port)ready_p5");
    sc_trace(mVcdFile, x1_p6, "(port)x1_p6");
    sc_trace(mVcdFile, x2_p6, "(port)x2_p6");
    sc_trace(mVcdFile, ready_p6, "(port)ready_p6");
    sc_trace(mVcdFile, x1_p7, "(port)x1_p7");
    sc_trace(mVcdFile, x2_p7, "(port)x2_p7");
    sc_trace(mVcdFile, ready_p7, "(port)ready_p7");
    sc_trace(mVcdFile, x1_p8, "(port)x1_p8");
    sc_trace(mVcdFile, x2_p8, "(port)x2_p8");
    sc_trace(mVcdFile, ready_p8, "(port)ready_p8");
    sc_trace(mVcdFile, x1_p9, "(port)x1_p9");
    sc_trace(mVcdFile, x2_p9, "(port)x2_p9");
    sc_trace(mVcdFile, ready_p9, "(port)ready_p9");
    sc_trace(mVcdFile, x1_p10, "(port)x1_p10");
    sc_trace(mVcdFile, x2_p10, "(port)x2_p10");
    sc_trace(mVcdFile, ready_p10, "(port)ready_p10");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, particlemaster_ss_load_fu_490_p1, "particlemaster_ss_load_fu_490_p1");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_calculate, "grp_particlemaster_ReadCalculations_fu_254_calculate");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_calculate_ap_vld, "grp_particlemaster_ReadCalculations_fu_254_calculate_ap_vld");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_finalx1, "grp_particlemaster_ReadCalculations_fu_254_finalx1");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_finalx1_ap_vld, "grp_particlemaster_ReadCalculations_fu_254_finalx1_ap_vld");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_finalx2, "grp_particlemaster_ReadCalculations_fu_254_finalx2");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_finalx2_ap_vld, "grp_particlemaster_ReadCalculations_fu_254_finalx2_ap_vld");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_complete, "grp_particlemaster_ReadCalculations_fu_254_complete");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_complete_ap_vld, "grp_particlemaster_ReadCalculations_fu_254_complete_ap_vld");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_x1_global, "grp_particlemaster_ReadCalculations_fu_254_x1_global");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_x1_global_ap_vld, "grp_particlemaster_ReadCalculations_fu_254_x1_global_ap_vld");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_x2_global, "grp_particlemaster_ReadCalculations_fu_254_x2_global");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_x2_global_ap_vld, "grp_particlemaster_ReadCalculations_fu_254_x2_global_ap_vld");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_particlemaster_x1_best_o, "grp_particlemaster_ReadCalculations_fu_254_particlemaster_x1_best_o");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_particlemaster_x1_best_o_ap_vld, "grp_particlemaster_ReadCalculations_fu_254_particlemaster_x1_best_o_ap_vld");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_particlemaster_x2_best_o, "grp_particlemaster_ReadCalculations_fu_254_particlemaster_x2_best_o");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_particlemaster_x2_best_o_ap_vld, "grp_particlemaster_ReadCalculations_fu_254_particlemaster_x2_best_o_ap_vld");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_particlemaster_negFormula, "grp_particlemaster_ReadCalculations_fu_254_particlemaster_negFormula");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_particlemaster_iterations_o, "grp_particlemaster_ReadCalculations_fu_254_particlemaster_iterations_o");
    sc_trace(mVcdFile, grp_particlemaster_ReadCalculations_fu_254_particlemaster_iterations_o_ap_vld, "grp_particlemaster_ReadCalculations_fu_254_particlemaster_iterations_o_ap_vld");
    sc_trace(mVcdFile, grp_particlemaster_Setup_fu_384_maximum, "grp_particlemaster_Setup_fu_384_maximum");
    sc_trace(mVcdFile, grp_particlemaster_Setup_fu_384_maximum_ap_vld, "grp_particlemaster_Setup_fu_384_maximum_ap_vld");
    sc_trace(mVcdFile, grp_particlemaster_Setup_fu_384_setup, "grp_particlemaster_Setup_fu_384_setup");
    sc_trace(mVcdFile, grp_particlemaster_Setup_fu_384_setup_ap_vld, "grp_particlemaster_Setup_fu_384_setup_ap_vld");
    sc_trace(mVcdFile, grp_particlemaster_Setup_fu_384_cognitive, "grp_particlemaster_Setup_fu_384_cognitive");
    sc_trace(mVcdFile, grp_particlemaster_Setup_fu_384_cognitive_ap_vld, "grp_particlemaster_Setup_fu_384_cognitive_ap_vld");
    sc_trace(mVcdFile, grp_particlemaster_Setup_fu_384_social, "grp_particlemaster_Setup_fu_384_social");
    sc_trace(mVcdFile, grp_particlemaster_Setup_fu_384_social_ap_vld, "grp_particlemaster_Setup_fu_384_social_ap_vld");
    sc_trace(mVcdFile, grp_particlemaster_Setup_fu_384_particlemaster_setupDone_i, "grp_particlemaster_Setup_fu_384_particlemaster_setupDone_i");
    sc_trace(mVcdFile, grp_particlemaster_Setup_fu_384_particlemaster_setupDone_o, "grp_particlemaster_Setup_fu_384_particlemaster_setupDone_o");
    sc_trace(mVcdFile, grp_particlemaster_Setup_fu_384_particlemaster_setupDone_o_ap_vld, "grp_particlemaster_Setup_fu_384_particlemaster_setupDone_o_ap_vld");
    sc_trace(mVcdFile, grp_particlemaster_Setup_fu_384_particlemaster_negFormula, "grp_particlemaster_Setup_fu_384_particlemaster_negFormula");
    sc_trace(mVcdFile, grp_particlemaster_Setup_fu_384_particlemaster_negFormula_ap_vld, "grp_particlemaster_Setup_fu_384_particlemaster_negFormula_ap_vld");
    sc_trace(mVcdFile, grp_particlemaster_Setup_fu_384_particlemaster_iterations, "grp_particlemaster_Setup_fu_384_particlemaster_iterations");
    sc_trace(mVcdFile, grp_particlemaster_Setup_fu_384_particlemaster_iterations_ap_vld, "grp_particlemaster_Setup_fu_384_particlemaster_iterations_ap_vld");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, particlemaster_setupDone, "particlemaster_setupDone");
    sc_trace(mVcdFile, particlemaster_x1_best, "particlemaster_x1_best");
    sc_trace(mVcdFile, particlemaster_x2_best, "particlemaster_x2_best");
    sc_trace(mVcdFile, particlemaster_negFormula, "particlemaster_negFormula");
    sc_trace(mVcdFile, particlemaster_iterations, "particlemaster_iterations");
#endif

    }
    mHdltvinHandle.open("particlemaster.hdltvin.dat");
    mHdltvoutHandle.open("particlemaster.hdltvout.dat");
}

particlemaster::~particlemaster() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete grp_particlemaster_ReadCalculations_fu_254;
    delete grp_particlemaster_Setup_fu_384;
}

void particlemaster::thread_calculate() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_particlemaster_ReadCalculations_fu_254_calculate_ap_vld.read())) {
        calculate = grp_particlemaster_ReadCalculations_fu_254_calculate.read();
    }
}

void particlemaster::thread_cognitive() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_particlemaster_Setup_fu_384_cognitive_ap_vld.read())) {
        cognitive = grp_particlemaster_Setup_fu_384_cognitive.read();
    }
}

void particlemaster::thread_complete() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_particlemaster_ReadCalculations_fu_254_complete_ap_vld.read())) {
        complete = grp_particlemaster_ReadCalculations_fu_254_complete.read();
    }
}

void particlemaster::thread_finalx1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_particlemaster_ReadCalculations_fu_254_finalx1_ap_vld.read())) {
        finalx1 = grp_particlemaster_ReadCalculations_fu_254_finalx1.read();
    }
}

void particlemaster::thread_finalx2() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_particlemaster_ReadCalculations_fu_254_finalx2_ap_vld.read())) {
        finalx2 = grp_particlemaster_ReadCalculations_fu_254_finalx2.read();
    }
}

void particlemaster::thread_maximum() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_particlemaster_Setup_fu_384_maximum_ap_vld.read())) {
        maximum = grp_particlemaster_Setup_fu_384_maximum.read();
    }
}

void particlemaster::thread_particlemaster_iterations() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_particlemaster_Setup_fu_384_particlemaster_iterations_ap_vld.read())) {
        particlemaster_iterations = grp_particlemaster_Setup_fu_384_particlemaster_iterations.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_particlemaster_ReadCalculations_fu_254_particlemaster_iterations_o_ap_vld.read())) {
        particlemaster_iterations = grp_particlemaster_ReadCalculations_fu_254_particlemaster_iterations_o.read();
    }
}

void particlemaster::thread_particlemaster_negFormula() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_particlemaster_Setup_fu_384_particlemaster_negFormula_ap_vld.read())) {
        particlemaster_negFormula =  (sc_lv<1>) (grp_particlemaster_Setup_fu_384_particlemaster_negFormula.read());
    }
}

void particlemaster::thread_particlemaster_setupDone() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_particlemaster_Setup_fu_384_particlemaster_setupDone_o_ap_vld.read())) {
        particlemaster_setupDone =  (sc_lv<1>) (grp_particlemaster_Setup_fu_384_particlemaster_setupDone_o.read());
    }
}

void particlemaster::thread_particlemaster_x1_best() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_particlemaster_ReadCalculations_fu_254_particlemaster_x1_best_o_ap_vld.read())) {
        particlemaster_x1_best = grp_particlemaster_ReadCalculations_fu_254_particlemaster_x1_best_o.read();
    }
}

void particlemaster::thread_particlemaster_x2_best() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_particlemaster_ReadCalculations_fu_254_particlemaster_x2_best_o_ap_vld.read())) {
        particlemaster_x2_best = grp_particlemaster_ReadCalculations_fu_254_particlemaster_x2_best_o.read();
    }
}

void particlemaster::thread_setup() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_particlemaster_Setup_fu_384_setup_ap_vld.read())) {
        setup = grp_particlemaster_Setup_fu_384_setup.read();
    }
}

void particlemaster::thread_social() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_particlemaster_Setup_fu_384_social_ap_vld.read())) {
        social = grp_particlemaster_Setup_fu_384_social.read();
    }
}

void particlemaster::thread_x1_global() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_particlemaster_ReadCalculations_fu_254_x1_global_ap_vld.read())) {
        x1_global = grp_particlemaster_ReadCalculations_fu_254_x1_global.read();
    }
}

void particlemaster::thread_x2_global() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_particlemaster_ReadCalculations_fu_254_x2_global_ap_vld.read())) {
        x2_global = grp_particlemaster_ReadCalculations_fu_254_x2_global.read();
    }
}

void particlemaster::thread_ap_CS_fsm() {
    ap_CS_fsm = ap_const_lv2_0;
}

void particlemaster::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void particlemaster::thread_grp_particlemaster_ReadCalculations_fu_254_particlemaster_negFormula() {
    grp_particlemaster_ReadCalculations_fu_254_particlemaster_negFormula =  (sc_logic) (particlemaster_negFormula.read()[0]);
}

void particlemaster::thread_grp_particlemaster_Setup_fu_384_particlemaster_setupDone_i() {
    grp_particlemaster_Setup_fu_384_particlemaster_setupDone_i =  (sc_logic) (particlemaster_setupDone.read()[0]);
}

void particlemaster::thread_particlemaster_ss_load_fu_490_p1() {
    particlemaster_ss_load_fu_490_p1 = ap_const_lv1_0;
}

void particlemaster::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"reset\" :  \"" << reset.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"start\" :  \"" << start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"maximum\" :  \"" << maximum.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"calculate\" :  \"" << calculate.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"setup\" :  \"" << setup.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"negativeFormula\" :  \"" << negativeFormula.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"c1\" :  \"" << c1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"c2\" :  \"" << c2.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"finalx1\" :  \"" << finalx1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"finalx2\" :  \"" << finalx2.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"complete\" :  \"" << complete.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"cognitive\" :  \"" << cognitive.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"social\" :  \"" << social.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"x1_global\" :  \"" << x1_global.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"x2_global\" :  \"" << x2_global.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x1_p1\" :  \"" << x1_p1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x2_p1\" :  \"" << x2_p1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ready_p1\" :  \"" << ready_p1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x1_p2\" :  \"" << x1_p2.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x2_p2\" :  \"" << x2_p2.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ready_p2\" :  \"" << ready_p2.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x1_p3\" :  \"" << x1_p3.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x2_p3\" :  \"" << x2_p3.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ready_p3\" :  \"" << ready_p3.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x1_p4\" :  \"" << x1_p4.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x2_p4\" :  \"" << x2_p4.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ready_p4\" :  \"" << ready_p4.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x1_p5\" :  \"" << x1_p5.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x2_p5\" :  \"" << x2_p5.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ready_p5\" :  \"" << ready_p5.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x1_p6\" :  \"" << x1_p6.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x2_p6\" :  \"" << x2_p6.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ready_p6\" :  \"" << ready_p6.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x1_p7\" :  \"" << x1_p7.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x2_p7\" :  \"" << x2_p7.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ready_p7\" :  \"" << ready_p7.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x1_p8\" :  \"" << x1_p8.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x2_p8\" :  \"" << x2_p8.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ready_p8\" :  \"" << ready_p8.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x1_p9\" :  \"" << x1_p9.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x2_p9\" :  \"" << x2_p9.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ready_p9\" :  \"" << ready_p9.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x1_p10\" :  \"" << x1_p10.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x2_p10\" :  \"" << x2_p10.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ready_p10\" :  \"" << ready_p10.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

