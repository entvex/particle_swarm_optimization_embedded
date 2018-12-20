#include <systemc.h>
#include <stdio.h>

#ifdef __RTL_SIMULATION__
    #include "psosc_rtl_wrapper.h"
    #define floatPrototypec floatPrototypec_rtl_wrapper
#else
    #include "psos.h"
#endif

#include "psosDriver.h"



int sc_main (int argc , char *argv[])
{

	sc_signal<bool> s_reset;
	sc_signal<bool> s_start;

	sc_signal<bool> s_negativeFormula;
	sc_signal<float> s_c1;
	sc_signal<float> s_c2;

	sc_signal<float> s_finalx1;
	sc_signal<float> s_finalx2;
	sc_signal<bool> s_complete;

	// Create a 10ns period clock signal
	sc_clock s_clk("s_clk", 10, SC_NS);
	psosc U_psosc("U_psosc");
	psosdriverc U_psosdriverc("U_psosdriverc");

	// Connect the DUT
	U_psosc.c1(s_c1);
	U_psosc.c2(s_c2);
	U_psosc.clk(s_clk);
	U_psosc.complete(s_complete);
	U_psosc.finalx1(s_finalx1);
	U_psosc.finalx2(s_finalx2);
	U_psosc.negativeFormula(s_negativeFormula);
	U_psosc.reset(s_reset);
	U_psosc.start(s_start);

	// Drive stimuli from dat* ports
	// Capture results at out* ports
	U_psosdriverc.c1(s_c1);
	U_psosdriverc.c2(s_c2);
	U_psosdriverc.clk(s_clk);
	U_psosdriverc.complete(s_complete);
	U_psosdriverc.finalx1(s_finalx1);
	U_psosdriverc.finalx2(s_finalx2);
	U_psosdriverc.negativeFormula(s_negativeFormula);
	U_psosdriverc.reset(s_reset);
	U_psosdriverc.start(s_start);

	// Sim for 200
	int end_time = 200;
	std::cout << "INFO: Simulating" << std::endl;
	// start simulation
	sc_start(end_time, SC_NS);

	if (U_psosdriverc.retval == 0) {
		printf("Test passed!\n");
	} else {
		printf("Test failed!\n");
	}

	return U_psosdriverc.retval;
};
