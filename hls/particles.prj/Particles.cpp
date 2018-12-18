#include "Particles.h"

void particles::Setup(){
	while(!setup.read() || setupDone){
		wait();
	}

	ready.write(false);
	wait();

	negativeFormula = maximum.read();
	c1 = cognitive.read();
	c2 = social.read();

	wait(); // Two waits to make sure all values are read before continuing.
	wait();

	// Make first position and velocity
	x1 = Random_position(0,ax);
	x2 = Random_position(0,ax);

	v1 = Random_velocity(av);
	v2 = Random_velocity(av);

	// Set first position as best position
	x1_best = x1;
	x2_best = x2;

	x1_out.write(x1);
	x2_out.write(x2);
	wait();
	wait();

	setupDone = true;

	ready.write(true);
	wait();
}

void particles::Execute(){
	while(!(setupDone && calculate.read()) || calculationDone){
		if(!calculate.read())
		{
			calculationDone = false;
		}
		wait();
	}

	ready.write(false);

	wait();

	v1 = w*v1 + c1*Randval()*(x1_best-x1) + c2*Randval()*(x1_global.read()-x1);
	v2 = w*v2 + c1*Randval()*(x2_best-x2) + c2*Randval()*(x2_global.read()-x2);
	wait();
	wait();

	x1 = x1+v1;
	x2 = x2+v2;

	if (Equation(x1,x2) < Equation(x1_best,x2_best))
	{
		x1_best = x1;
		x2_best = x2;
	}

	x1_out.write(x1);
	x2_out.write(x2);

	calculationDone = true;

	ready.write(true);
	wait();
}

float particles::Equation(float x1, float x2){
	if	(negativeFormula)
		return -(3*pow((1-x1),2)*exp( -pow(x1,2) - pow( x2+1 ,2 ) ) - 10*( x1*0.2 - pow(x1,3) - pow(x2,5) )*exp( -pow(x1,2) -pow( x2,2 ) ) -exp( -pow(x1+1,2) - pow(x2,2) ) / 3);
	else
		return 3*pow((1-x1),2)*exp( -pow(x1,2) - pow( x2+1 ,2 ) ) - 10*( x1*0.2 - pow(x1,3) - pow(x2,5) )*exp( -pow(x1,2) -pow( x2,2 ) ) -exp( -pow(x1+1,2) - pow(x2,2) ) / 3;
}

float particles::Random_position(float xi,float a){
	return ( xi-a ) + 2*a*Randval();
}

float particles::Random_velocity(float a){
	return - a + 2*a*Randval();
}

float particles::Randval(){
	//return ((float) std::rand() / (RAND_MAX));
	return 0.5;
}
