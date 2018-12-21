#include <systemc.h>
#include <stdio.h>

#ifdef __RTL_SIMULATION__
    #include "floatPrototypec_rtl_wrapper.h"
	#include "Particles_rtl_wrapper.h"
	#include "ParticleMaster_rtl_wrapper.h"
    #define particles particlemaster particles_rtl_wrapper particlemaster_rtl_wrapper
#else
	#include "Particles.h"
	#include "ParticleMaster.h"
#endif

#include "Particles.h"
#include "ParticleMaster.h"
#include "psosDriver.h"

int sc_main (int argc , char *argv[])
{
	sc_signal<bool> s_reset;

	// Master communication
	sc_signal<bool> s_start;
	sc_signal<float> s_c1;
	sc_signal<float> s_c2;
	sc_signal<bool> s_negativeFormula;
	sc_signal<float> s_x1final;
	sc_signal<float> s_x2final;
	sc_signal<bool> s_complete;


	// Particle communications
	sc_signal<float> s_cognitive;
	sc_signal<float> s_social;
	sc_signal<bool> s_setup;
	sc_signal<bool> s_calculate;
	sc_signal<float> s_x1_global;
	sc_signal<float> s_x2_global;
	sc_signal<bool> s_maximum;

	sc_signal<float> s_x1_p1;
	sc_signal<float> s_x2_p1;
	sc_signal<bool> s_ready_p1;

	sc_signal<float> s_x1_p2;
	sc_signal<float> s_x2_p2;
	sc_signal<bool> s_ready_p2;

	sc_signal<float> s_x1_p3;
	sc_signal<float> s_x2_p3;
	sc_signal<bool> s_ready_p3;

	sc_signal<float> s_x1_p4;
	sc_signal<float> s_x2_p4;
	sc_signal<bool> s_ready_p4;

	sc_signal<float> s_x1_p5;
	sc_signal<float> s_x2_p5;
	sc_signal<bool> s_ready_p5;

	sc_signal<float> s_x1_p6;
	sc_signal<float> s_x2_p6;
	sc_signal<bool> s_ready_p6;

	sc_signal<float> s_x1_p7;
	sc_signal<float> s_x2_p7;
	sc_signal<bool> s_ready_p7;

	sc_signal<float> s_x1_p8;
	sc_signal<float> s_x2_p8;
	sc_signal<bool> s_ready_p8;

	sc_signal<float> s_x1_p9;
	sc_signal<float> s_x2_p9;
	sc_signal<bool> s_ready_p9;

	sc_signal<float> s_x1_p10;
	sc_signal<float> s_x2_p10;
	sc_signal<bool> s_ready_p10;


    // Create a 10ns period clock signal
    sc_clock s_clk("s_clk", 10, SC_NS);
    particlemaster U_particlemaster("U_particlemaster");
    particles U_particles_1("U_particles_1");
    particles U_particles_2("U_particles_2");
    particles U_particles_3("U_particles_3");
    particles U_particles_4("U_particles_4");
    particles U_particles_5("U_particles_5");
    particles U_particles_6("U_particles_6");
    particles U_particles_7("U_particles_7");
    particles U_particles_8("U_particles_8");
    particles U_particles_9("U_particles_9");
    particles U_particles_10("U_particles_10");

    // Connect the DUT
    U_particlemaster.clk(s_clk);
    U_particlemaster.reset(s_reset);

    U_particlemaster.c1(s_c1);
    U_particlemaster.c2(s_c2);
    U_particlemaster.calculate(s_calculate);
    U_particlemaster.cognitive(s_cognitive);
    U_particlemaster.complete(s_complete);
    U_particlemaster.finalx1(s_x1final);
    U_particlemaster.finalx2(s_x2final);
    U_particlemaster.maximum(s_maximum);
    U_particlemaster.negativeFormula(s_negativeFormula);
    U_particlemaster.setup(s_setup);
    U_particlemaster.social(s_social);
    U_particlemaster.start(s_start);
    U_particlemaster.x1_global(s_x1_global);
    U_particlemaster.x2_global(s_x2_global);

    U_particlemaster.ready_p1(s_ready_p1);
    U_particlemaster.ready_p2(s_ready_p2);
    U_particlemaster.ready_p3(s_ready_p3);
    U_particlemaster.ready_p4(s_ready_p4);
    U_particlemaster.ready_p5(s_ready_p5);
    U_particlemaster.ready_p6(s_ready_p6);
    U_particlemaster.ready_p7(s_ready_p7);
    U_particlemaster.ready_p8(s_ready_p8);
    U_particlemaster.ready_p9(s_ready_p9);
    U_particlemaster.ready_p10(s_ready_p10);

    U_particlemaster.x1_p1(s_x1_p1);
    U_particlemaster.x1_p2(s_x1_p2);
    U_particlemaster.x1_p3(s_x1_p3);
    U_particlemaster.x1_p4(s_x1_p4);
    U_particlemaster.x1_p5(s_x1_p5);
    U_particlemaster.x1_p6(s_x1_p6);
    U_particlemaster.x1_p7(s_x1_p7);
    U_particlemaster.x1_p8(s_x1_p8);
    U_particlemaster.x1_p9(s_x1_p9);
    U_particlemaster.x1_p10(s_x1_p10);

    U_particlemaster.x2_p1(s_x2_p1);
	U_particlemaster.x2_p2(s_x2_p2);
	U_particlemaster.x2_p3(s_x2_p3);
	U_particlemaster.x2_p4(s_x2_p4);
	U_particlemaster.x2_p5(s_x2_p5);
	U_particlemaster.x2_p6(s_x2_p6);
	U_particlemaster.x2_p7(s_x2_p7);
	U_particlemaster.x2_p8(s_x2_p8);
	U_particlemaster.x2_p9(s_x2_p9);
	U_particlemaster.x2_p10(s_x2_p10);

    // Drive stimuli from dat* ports
    // Capture results at out* ports
	U_particles_1.clk(s_clk);
	U_particles_1.reset(s_reset);

	U_particles_1.calculate(s_calculate);
	U_particles_1.cognitive(s_cognitive);
	U_particles_1.social(s_social);
	U_particles_1.maximum(s_maximum);
	U_particles_1.setup(s_setup);
	U_particles_1.x1_global(s_x1_global);
	U_particles_1.x2_global(s_x2_global);

	U_particles_1.x1_out(s_x1_p1);
	U_particles_1.x2_out(s_x2_p1);
	U_particles_1.ready(s_ready_p1);


	U_particles_2.clk(s_clk);
	U_particles_2.reset(s_reset);

	U_particles_2.calculate(s_calculate);
	U_particles_2.cognitive(s_cognitive);
	U_particles_2.social(s_social);
	U_particles_2.maximum(s_maximum);
	U_particles_2.setup(s_setup);
	U_particles_2.x1_global(s_x1_global);
	U_particles_2.x2_global(s_x2_global);

	U_particles_2.x1_out(s_x1_p2);
	U_particles_2.x2_out(s_x2_p2);
	U_particles_2.ready(s_ready_p2);


	U_particles_3.clk(s_clk);
	U_particles_3.reset(s_reset);

	U_particles_3.calculate(s_calculate);
	U_particles_3.cognitive(s_cognitive);
	U_particles_3.social(s_social);
	U_particles_3.maximum(s_maximum);
	U_particles_3.setup(s_setup);
	U_particles_3.x1_global(s_x1_global);
	U_particles_3.x2_global(s_x2_global);

	U_particles_3.x1_out(s_x1_p3);
	U_particles_3.x2_out(s_x2_p3);
	U_particles_3.ready(s_ready_p3);


	U_particles_4.clk(s_clk);
	U_particles_4.reset(s_reset);

	U_particles_4.calculate(s_calculate);
	U_particles_4.cognitive(s_cognitive);
	U_particles_4.social(s_social);
	U_particles_4.maximum(s_maximum);
	U_particles_4.setup(s_setup);
	U_particles_4.x1_global(s_x1_global);
	U_particles_4.x2_global(s_x2_global);

	U_particles_4.x1_out(s_x1_p4);
	U_particles_4.x2_out(s_x2_p4);
	U_particles_4.ready(s_ready_p4);


	U_particles_5.clk(s_clk);
	U_particles_5.reset(s_reset);

	U_particles_5.calculate(s_calculate);
	U_particles_5.cognitive(s_cognitive);
	U_particles_5.social(s_social);
	U_particles_5.maximum(s_maximum);
	U_particles_5.setup(s_setup);
	U_particles_5.x1_global(s_x1_global);
	U_particles_5.x2_global(s_x2_global);

	U_particles_5.x1_out(s_x1_p5);
	U_particles_5.x2_out(s_x2_p5);
	U_particles_5.ready(s_ready_p5);


	U_particles_6.clk(s_clk);
	U_particles_6.reset(s_reset);

	U_particles_6.calculate(s_calculate);
	U_particles_6.cognitive(s_cognitive);
	U_particles_6.social(s_social);
	U_particles_6.maximum(s_maximum);
	U_particles_6.setup(s_setup);
	U_particles_6.x1_global(s_x1_global);
	U_particles_6.x2_global(s_x2_global);

	U_particles_6.x1_out(s_x1_p6);
	U_particles_6.x2_out(s_x2_p6);
	U_particles_6.ready(s_ready_p6);


	U_particles_7.clk(s_clk);
	U_particles_7.reset(s_reset);

	U_particles_7.calculate(s_calculate);
	U_particles_7.cognitive(s_cognitive);
	U_particles_7.social(s_social);
	U_particles_7.maximum(s_maximum);
	U_particles_7.setup(s_setup);
	U_particles_7.x1_global(s_x1_global);
	U_particles_7.x2_global(s_x2_global);

	U_particles_7.x1_out(s_x1_p7);
	U_particles_7.x2_out(s_x2_p7);
	U_particles_7.ready(s_ready_p7);


	U_particles_8.clk(s_clk);
	U_particles_8.reset(s_reset);

	U_particles_8.calculate(s_calculate);
	U_particles_8.cognitive(s_cognitive);
	U_particles_8.social(s_social);
	U_particles_8.maximum(s_maximum);
	U_particles_8.setup(s_setup);
	U_particles_8.x1_global(s_x1_global);
	U_particles_8.x2_global(s_x2_global);

	U_particles_8.x1_out(s_x1_p8);
	U_particles_8.x2_out(s_x2_p8);
	U_particles_8.ready(s_ready_p8);


	U_particles_9.clk(s_clk);
	U_particles_9.reset(s_reset);

	U_particles_9.calculate(s_calculate);
	U_particles_9.cognitive(s_cognitive);
	U_particles_9.social(s_social);
	U_particles_9.maximum(s_maximum);
	U_particles_9.setup(s_setup);
	U_particles_9.x1_global(s_x1_global);
	U_particles_9.x2_global(s_x2_global);

	U_particles_9.x1_out(s_x1_p9);
	U_particles_9.x2_out(s_x2_p9);
	U_particles_9.ready(s_ready_p9);


	U_particles_10.clk(s_clk);
	U_particles_10.reset(s_reset);

	U_particles_10.calculate(s_calculate);
	U_particles_10.cognitive(s_cognitive);
	U_particles_10.social(s_social);
	U_particles_10.maximum(s_maximum);
	U_particles_10.setup(s_setup);
	U_particles_10.x1_global(s_x1_global);
	U_particles_10.x2_global(s_x2_global);

	U_particles_10.x1_out(s_x1_p10);
	U_particles_10.x2_out(s_x2_p10);
	U_particles_10.ready(s_ready_p10);

	//Setting up Driver
	psosdriverc U_psosdriverc("U_psosdriverc");

	U_psosdriverc.clk(s_clk);
	U_psosdriverc.reset(s_reset);
	U_psosdriverc.start(s_start);

	U_psosdriverc.negativeFormula(s_negativeFormula);
	U_psosdriverc.c1(s_c1);
	U_psosdriverc.c2(s_c2);
	U_psosdriverc.finalx1(s_x1final);
	U_psosdriverc.finalx2(s_x2final);
	U_psosdriverc.complete(s_complete);

    // Sim for 200
    int end_time = 2147483647;
    std::cout << "INFO: Simulating" << std::endl;
    // start simulation
    sc_start(end_time, SC_NS);

    if (U_psosdriverc.retval == 1) {
        printf("Test passed !\n");
    } else {
        printf("Test failed !!!\n");
    }

    return 0;
};
