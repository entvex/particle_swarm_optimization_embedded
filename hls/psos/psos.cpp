#include "psos.h"

void psosc::Setup(){
	while(!start.read() || setupDone){
		wait();
	}

	complete.write(false);
	wait();

	// reading and setting up c1 and c2
	c1_cog = c1.read();
	c2_soc = c2.read();
	wait();

	// Checking if we are looking for maximum or minimum
	negFormula = negativeFormula.read();

	iterations = 60;
	w = 0.8;
	ax = 10;
	av = 1;

	wait();

	ParticleSetup();

	setupDone = true;

	wait();

}

void psosc::Execute(){

}

float psosc::Equation(float x1, float x2){
	if	(negFormula)
		return -(3*pow((1-x1),2)*exp( -pow(x1,2) - pow( x2+1 ,2 ) ) - 10*( x1*0.2 - pow(x1,3) - pow(x2,5) )*exp( -pow(x1,2) -pow( x2,2 ) ) -exp( -pow(x1+1,2) - pow(x2,2) ) / 3);
	else
		return 3*pow((1-x1),2)*exp( -pow(x1,2) - pow( x2+1 ,2 ) ) - 10*( x1*0.2 - pow(x1,3) - pow(x2,5) )*exp( -pow(x1,2) -pow( x2,2 ) ) -exp( -pow(x1+1,2) - pow(x2,2) ) / 3;
}

void psosc::ParticleSetup(){
	float randPos1;
	float randPos2;
	for (int i = 0; i < PARTICLE_NUM; i++) {
		randPos1 = RandomPosition(0,ax);
		randPos2 = RandomPosition(0,ax);

		x1[i] = randPos1;
		x2[i] = randPos2;

		v1[i] = RandomVelocity(av);
		v2[i] = RandomVelocity(av);

		x1_best[i] = randPos1;
		x2_best[i] = randPos1;
	}
}

float psosc::RandomPosition(float xi,float a){
	return ( xi-a ) + 2*a*Randval();
}

float psosc::RandomVelocity(float a){
	return - a + 2*a*Randval();
}

float psosc::Randval(){
	//return ((float) std::rand() / (RAND_MAX));
	return 0.5;
}
