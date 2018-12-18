#include <systemc.h>
#include <stdio.h>


int sc_main (int argc , char *argv[])
{

	return 0;
};

/*#ifdef __RTL_SIMULATION__
    #include "floatPrototypec_rtl_wrapper.h"
    #define floatPrototypec floatPrototypec_rtl_wrapper
#else
    #include "floatPrototype.h"
#endif

#include "floatDriver.h"

int sc_main (int argc , char *argv[])
{

	sc_signal<bool> s_reset;
	sc_signal<float> s_float1;
	sc_signal<float> s_float2;
	sc_signal<float> s_float3;

    // Create a 10ns period clock signal
    sc_clock s_clk("s_clk", 10, SC_NS);
    floatPrototypec U_floatPrototypec("U_floatPrototypec");
    floatDriverc U_floatDriverc("U_floatDriverc");

    // Connect the DUT
    U_floatPrototypec.clk(s_clk);
    U_floatPrototypec.reset(s_reset);

    U_floatPrototypec.float1(s_float1);
    U_floatPrototypec.float2(s_float2);
    U_floatPrototypec.float3(s_float3);

    // Drive stimuli from dat* ports
    // Capture results at out* ports
    U_floatDriverc.clk(s_clk);
    U_floatDriverc.reset(s_reset);

    U_floatDriverc.float1(s_float1);
    U_floatDriverc.float2(s_float2);
    U_floatDriverc.float3(s_float3);

    // Sim for 200
    int end_time = 200;
    std::cout << "INFO: Simulating" << std::endl;
    // start simulation
    sc_start(end_time, SC_NS);

    if (U_floatDriverc.retval == 0) {
        printf("Test passed !\n");
    } else {
        printf("Test failed !!!\n");
    }

    return U_floatDriverc.retval;
};
*/
