#ifndef _PARTICLEMASTER_
#define _PARTICLEMASTER_

#include "systemc.h"
#include <cstdlib>

SC_MODULE(particlemaster) {
	// Ports
	sc_in<bool> clk;
	sc_in<bool> reset;
	sc_in<bool> start;

	sc_out<bool> maximum;
	sc_out<bool> calculate;
	sc_out<bool> setup;

	sc_in<bool> negativeFormula; // If maximum is required, make the formula negative
	sc_in<float> c1; // Cognitive component - more spread - Setup part
	sc_in<float> c2; // Social component global best position - Setup part

	sc_out<float> finalx1;
	sc_out<float> finalx2;
	sc_out<bool> complete;

	// Setup parameters
	sc_out<float> cognitive;
	sc_out<float> social;

	// Global best position
	sc_out<float> x1_global;
	sc_out<float> x2_global;

	// Inputs from 10 particles
	sc_in<float> x1_p1;
	sc_in<float> x2_p1;
	sc_in<bool> ready_p1;

	sc_in<float> x1_p2;
	sc_in<float> x2_p2;
	sc_in<bool> ready_p2;

	sc_in<float> x1_p3;
	sc_in<float> x2_p3;
	sc_in<bool> ready_p3;

	sc_in<float> x1_p4;
	sc_in<float> x2_p4;
	sc_in<bool> ready_p4;

	sc_in<float> x1_p5;
	sc_in<float> x2_p5;
	sc_in<bool> ready_p5;

	sc_in<float> x1_p6;
	sc_in<float> x2_p6;
	sc_in<bool> ready_p6;

	sc_in<float> x1_p7;
	sc_in<float> x2_p7;
	sc_in<bool> ready_p7;

	sc_in<float> x1_p8;
	sc_in<float> x2_p8;
	sc_in<bool> ready_p8;

	sc_in<float> x1_p9;
	sc_in<float> x2_p9;
	sc_in<bool> ready_p9;

	sc_in<float> x1_p10;
	sc_in<float> x2_p10;
	sc_in<bool> ready_p10;

	// Internal flags
	bool setupDone = false;

	// Global best position
	float x1_best;
	float x2_best;
	bool negFormula;

	int iterations;

	// Process Declarations
	void Setup();

	void ReadCalculations();

	// Hardcoded formula of interest
	float Equation(float x1, float x2);

	SC_CTOR(particlemaster){
		//	Process Registration
		SC_CTHREAD(Setup,clk.pos());
		reset_signal_is(reset,true);

		SC_CTHREAD(ReadCalculations,clk.pos());
		reset_signal_is(reset,true);
	}
};

#endif
