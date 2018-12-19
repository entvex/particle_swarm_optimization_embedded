#define PARTICLE_NUM 2

#ifndef _PSOS_
#define _PSOS_

#include "systemc.h"
#include <cstdlib>

SC_MODULE(psosc) {
	// Ports
	sc_in<bool> clk;
	sc_in<bool> reset;
	sc_in<bool> start;

	sc_in<bool> negativeFormula; // If maximum is required, make the formula negative
	sc_in<float> c1; // Cognitive component - more spread - Setup part
	sc_in<float> c2; // Social component global best position - Setup part

	sc_out<float> finalx1;
	sc_out<float> finalx2;
	sc_out<bool> complete;

	// Internal flags
	bool setupDone;
	bool calculationDone;

	// Internal variables for calculations
	bool negFormula;
	float c1_cog; // Cognitive component - more spread - Setup part
	float c2_soc; // Social component global best position - Setup part
	float w; // Old position weight. Hardcoded to 0.8 in setup part

	float ax; // Value used to generate coordinates of first position [x1,x2] = (-ax ... ax)
	float av; // Value used to generate velocity in first position [x1_velocity, x2_velocity] = (-av ... av)

	int iterations;

	float x1_global;
	float x2_global;

	// Particle specific knowledge
	// Own position
	float p_x1[PARTICLE_NUM];
	float p_x2[PARTICLE_NUM];

	// Own velocity
	float p_v1[PARTICLE_NUM];
	float p_v2[PARTICLE_NUM];

	// Own best position
	float p_x1_best[PARTICLE_NUM];
	float p_x2_best[PARTICLE_NUM];

	// Setup
	void Setup();

	// Execute particle swarm
	void Execute();

	// Hardcoded formula of interest
	float Equation(float x1, float x2);

	// Equations for setup of particles
	void ParticleSetup();

	float RandomPosition(float xi,float a);

	float RandomVelocity(float a);

	float Randval();

	SC_CTOR(psosc){
		//	Process Registration
		SC_CTHREAD(Setup,clk.pos());
		reset_signal_is(reset,true);

		SC_CTHREAD(Execute,clk.pos());
		reset_signal_is(reset,true);
	}
};

#endif
