#ifndef _FLOATPROTOTYPE_
#define _FLOATPROTOTYPE_

#include "systemc.h"
#include "cpp_math.h"

SC_MODULE(floatPrototypec){

	sc_in<bool> clk;
	sc_in<bool> reset;

	sc_in<float> float1;
	sc_in<float> float2;

	sc_out<float> float3;

	void multiply();


	SC_CTOR(floatPrototypec){
		SC_CTHREAD(multiply, clk.pos());
		reset_signal_is(reset,true);
	}

};

#endif
