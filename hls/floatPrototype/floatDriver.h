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
