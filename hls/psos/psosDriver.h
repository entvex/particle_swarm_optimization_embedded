#ifndef _PSOSDRIVER_
#define _PSOSDRIVER_

#include "systemc.h"

SC_MODULE(psosdriverc){

	sc_in <bool> clk;
	sc_out<bool> reset;
	sc_out<bool> start;

	sc_out<bool> negativeFormula; // If maximum is required, make the formula negative
	sc_out<float> c1; // Cognitive component - more spread - Setup part
	sc_out<float> c2; // Social component global best position - Setup part

	sc_in<float> finalx1;
	sc_in<float> finalx2;
	sc_in<bool> complete;

	int retval;

	void test();

	SC_CTOR(psosdriverc) : retval(-1) {
		SC_THREAD(test);
		sensitive << clk.pos();
	}

};

#endif


/*
#ifndef _FLOATDRIVER_
#define _FLOATDRIVER_

#include "systemc.h"

SC_MODULE(floatDriverc){

	sc_in <bool> clk;
	sc_out <bool> reset;

	sc_out <float> float1;
	sc_out <float> float2;

	sc_in <float> float3;

	int retval;

	void test();

	SC_CTOR(floatDriverc) : retval(-1) {
		SC_THREAD(test);
		sensitive << clk.pos();
	}

};


#endif
*/
