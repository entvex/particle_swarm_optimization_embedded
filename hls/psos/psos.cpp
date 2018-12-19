#include "psos.h"

void psosc::Setup(){
	while(true)
	{
		//#pragma HLS unroll factor=PARTICLE_NUM region skip_exit_check
		//#pragma HLS INLINE off
		while(!start.read() || setupDone){
			wait();
		}

		complete.write(false);
		wait();

		w = 0.8;
		ax = 10;
		av = 1;

		// set best position to ( 0 ; 0 )
		x1_global = 0;
		x2_global = 0;

		// Setup first positions of particles
		ParticleSetup();

		wait();

		// reading and setting up c1 and c2
		c1_cog = c1.read();
		c2_soc = c2.read();
		wait();

		// Checking if we are looking for maximum or minimum
		negFormula = negativeFormula.read();


		wait();

		setupDone = true;

		wait();
	}
}

void psosc::Execute(){
	while(true){
		while(!(setupDone && start.read()) || calculationDone){
			wait();
			if(!start.read())
			{
				calculationDone = false;
			}
			wait();
		}
		LoopIterations: for (iterations = 60; iterations > 0; iterations--) {

			wait();
			LoopCalculation: for (int i = 0; i < sizeof(p_v1); i++) {
				#pragma HLS INLINE
				p_v1[i] = w*p_v1[i] + c1*Randval()*(p_x1_best[i]-p_x1[i]) + c2*Randval()*(x1_global-p_x1[i]);
				p_v2[i] = w*p_v2[i] + c1*Randval()*(p_x2_best[i]-p_x2[i]) + c2*Randval()*(x2_global-p_x2[i]);

				wait();

				p_x1[i] = p_x1[i] + p_v1[i];
				p_x2[i] = p_x2[i] + p_v2[i];

				wait();

				if(Equation(p_x1_best[i], p_x2_best[i]) > Equation(p_x1[i],p_x2[i]))
				{
					wait();

					p_x1_best[i] = p_x1[i];
					p_x2_best[i] = p_x2[i];

					wait();

					#pragma HLS INLINE
					if(Equation(x1_global, x2_global) > Equation(p_x1[i],p_x2[i]))
					{
						wait();

						x1_global = p_x1[i];
						x2_global = p_x2[i];

						wait();
					}
				}
			}
		}

		finalx1.write(x1_global);
		finalx2.write(x2_global);

		complete.write(true);
		wait();


		calculationDone = true;
	}

}

float psosc::Equation(float x1, float x2){
	if	(negFormula)
		return -(3*pow((1-x1),2)*exp( -pow(x1,2) - pow( x2+1 ,2 ) ) - 10*( x1*0.2 - pow(x1,3) - pow(x2,5) )*exp( -pow(x1,2) -pow( x2,2 ) ) -exp( -pow(x1+1,2) - pow(x2,2) ) / 3);
	else
		return 3*pow((1-x1),2)*exp( -pow(x1,2) - pow( x2+1 ,2 ) ) - 10*( x1*0.2 - pow(x1,3) - pow(x2,5) )*exp( -pow(x1,2) -pow( x2,2 ) ) -exp( -pow(x1+1,2) - pow(x2,2) ) / 3;
}

void psosc::ParticleSetup(){
	LoopSetup: for (int i = 0; i < sizeof(p_x1); i++) {
		#pragma HLS unroll skip_exit_check
		// Wait after every two operations since RAM only have two ports to work with at a time
		p_x1[i] = RandomPosition(0,ax);
		p_x2[i] = RandomPosition(0,ax);

		wait();

		p_v1[i] = RandomVelocity(av);
		p_v2[i] = RandomVelocity(av);

		wait();

		p_x1_best[i] = p_x1[i];
		p_x2_best[i] = p_x2[i];

		wait();

		if(Equation(x1_global, x2_global) > Equation(p_x1[i],p_x2[i]))
		{
			wait();
			x1_global = p_x1[i];
			x2_global = p_x2[i];
			wait();
		}
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
