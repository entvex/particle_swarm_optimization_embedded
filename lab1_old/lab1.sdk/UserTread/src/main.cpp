#include "threads/MainThread.h"
#include "math.h"
#include "random"
/*
	double equation(double x1, double x2){
		return 3*pow((1-x1),2)*exp( -pow(x1,2) - pow( x2+1 ,2 ) ) - 10*( x1*0.2 - pow(x1,3) - pow(x2,5) )*exp( -pow(x1,2) -pow( x2,2 ) ) -exp( -pow(x1+1,2) - pow(x2,2) ) / 3;
	}

	double random_position(double xi,double a){
		double r = ((double) rand() / (RAND_MAX));
		return ( xi-a ) + 2*a*r;
	}

	double random_velocity(double a){
		double r = ((double) rand() / (RAND_MAX));
		return - a + 2*a*r;
	}
*/

int main()
{
	MainThread tMainThread(Thread::PRIORITY_NORMAL, "MainThread");

	/* Start FreeRTOS, the tasks running. */
	vTaskStartScheduler();

	/* If all is well, the scheduler will now be running, and the following line
	will never be reached.  If the following line does execute, then there was
	insufficient FreeRTOS heap memory available for the idle and/or timer tasks
	to be created.  See the memory management section on the FreeRTOS web site
	for more details. */
	//for( ;; );

//	int d = 1; //Number of partrices
//
//	int ax = 10; // used to generate random position
//	int av = 1; // used to generate random velocities
//	double w = 0.8; // Inertial constant
//	double c1 = 1.95; // Cognitive component - more spread
//	//c1 = 0.2; // Cognitive component
//	double c2 = 1.98; // Social component global best position
//	int N = 60; // Number of iterations
//
//
//	// Allocating arrays
//	double x_pos[d][2];	// x Position for each particle
//	double x_vel[d][2];	// x Velocitie for each particle
//
//	double fk[d];		// Function value for each particle
//	double pk[d][2];	// Best position for each particle
//
//	double g[2];		// Best position of all particles
//	double fgk = 0;		// Value of best position
//
//	for (int var = 0; var < d; ++var) {
//		x_pos[var][0] = random_position(0,ax);
//		x_pos[var][1] = random_position(0,ax);
//
//		x_vel[var][0] = random_velocity(av);
//		x_vel[var][1] = random_velocity(av);
//
//		pk[var][0] = x_vel[var][0];
//		pk[var][1] = x_vel[var][1];
//
//		fk[var] = equation(x_pos[var][0], x_pos[var][1]);
//
//		if (gk == 0 || fk[var] < gk){
//			gk = fk[var];
//			g[0] = x_pos[var][0];
//			g[1] = x_pos[var][1];
//		}
//	}
}


