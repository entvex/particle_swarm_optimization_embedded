#ifndef _PARTICLES_
#define _PARTICLES_

#include "systemc.h"
#include <cstdlib>

SC_MODULE(particles) {
	// Ports
	sc_in<bool> clk;
	sc_in<bool> reset;
	sc_in<bool> maximum;
	sc_in<bool> calculate;
	sc_in<bool> setup;

	// Setup parameters
	sc_in<float> cognitive;
	sc_in<float> social;

	// Global best position
	sc_in<float> x1_global;
	sc_in<float> x2_global;

	// Outputs
	sc_out<float> x1_out;
	sc_out<float> x2_out;
	sc_out<bool> ready;

	// Internal flags
	bool setupDone;
	bool calculationDone;
	bool negativeFormula; // If maximum is required, make the formula negative

	float c1; // Cognitive component - more spread - Setup part
	float c2; // Social component global best position - Setup part
	float w; // Old position weight. Hardcoded to 0.8 can eventually become a setup part

	float ax; // Value used to generate coordinates of first position [x1,x2] = (-ax ... ax)
	float av; // Value used to generate velocity in first position [x1_velocity, x2_velocity] = (-av ... av)

	// Own position
	float x1;
	float x2;

	// Own velocity
	float v1;
	float v2;

	// Own best position
	float x1_best;
	float x2_best;


	// Process Declarations
	void Setup();

	void Execute();

	// Hardcoded formula of interest
	float Equation(float x1, float x2);

	float Random_position(float xi,float a);

	float Random_velocity(float a);

	float Randval();

	SC_CTOR(particles){
		//	Process Registration
		SC_CTHREAD(Setup,clk.pos());
		reset_signal_is(reset,true);

		SC_CTHREAD(Execute,clk.pos());
		reset_signal_is(reset,true);
	}
};

#endif
