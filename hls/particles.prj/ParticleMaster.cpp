#include "ParticleMaster.h"


void particlemaster::Setup(){
	while(true){
		while(!start.read() || setupDone){
			wait();
		}

		setup.write(false);
		wait();

		// reading and setting up c1 and c2
		cognitive.write(c1.read());
		social.write(c2.read());
		wait();

		// Checking if we are looking for maximum or minimum and writing it
		negFormula = negativeFormula.read();
		wait();
		maximum.write(negFormula);
		wait();

		iterations = 60;
		setupDone = true;

		setup.write(true);
		wait();
	}

}

void particlemaster::ReadCalculations(){
	while(true){
		while(!(ready_p1.read() && ready_p2.read() && ready_p3.read() && ready_p4.read() && ready_p5.read() && ready_p6.read() && ready_p7.read() && ready_p8.read() && ready_p9.read() && ready_p10.read())){
			wait();
		}


		// Read values
		float x1s[10];
		float x2s[10];

		x1s[0] = x1_p1.read();
		x2s[0] = x2_p1.read();
		wait();

		x1s[1] = x1_p2.read();
		x2s[1] = x2_p2.read();
		wait();

		x1s[2] = x1_p3.read();
		x2s[2] = x2_p3.read();
		wait();

		x1s[3] = x1_p4.read();
		x2s[3] = x2_p4.read();
		wait();

		x1s[4] = x1_p5.read();
		x2s[4] = x2_p5.read();
		wait();

		x1s[5] = x1_p6.read();
		x2s[5] = x2_p6.read();
		wait();

		x1s[6] = x1_p7.read();
		x2s[6] = x2_p7.read();
		wait();

		x1s[7] = x1_p8.read();
		x2s[7] = x2_p8.read();
		wait();

		x1s[8] = x1_p9.read();
		x2s[8] = x2_p9.read();
		wait();

		x1s[9] = x1_p10.read();
		x2s[9] = x2_p10.read();
		wait();

		calculate.write(false);

		wait();

		float bestValue = Equation(x1_best, x2_best);

		for (int i = 0; i < sizeof(x1s); i++) {
			if(Equation(x1s[i],x2s[i]) < bestValue)
			{
				bestValue = Equation(x1s[i],x2s[i]);
				x1_best = x1s[i];
				x2_best = x2s[i];

				wait();
			}
		}

		iterations--;

		if(iterations < 1)
		{
			x1_global.write(x1_best);
			x2_global.write(x2_best);

			wait();

			calculate.write(true);

			wait();
		}
		else
		{
			finalx1.write(x1_best);
			finalx2.write(x2_best);

			wait();

			complete.write(true);

			wait();
		}
	}
}


float particlemaster::Equation(float x1, float x2){
	if	(negFormula)
		return -(3*pow((1-x1),2)*exp( -pow(x1,2) - pow( x2+1 ,2 ) ) - 10*( x1*0.2 - pow(x1,3) - pow(x2,5) )*exp( -pow(x1,2) -pow( x2,2 ) ) -exp( -pow(x1+1,2) - pow(x2,2) ) / 3);
	else
		return 3*pow((1-x1),2)*exp( -pow(x1,2) - pow( x2+1 ,2 ) ) - 10*( x1*0.2 - pow(x1,3) - pow(x2,5) )*exp( -pow(x1,2) -pow( x2,2 ) ) -exp( -pow(x1+1,2) - pow(x2,2) ) / 3;
}
