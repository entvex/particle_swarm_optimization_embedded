#include "floatPrototype.h"

void floatPrototypec::multiply(){
	#pragma HLS resource core=AXI4LiteS metadata="-bus_bundle slv0" variable=float1
	#pragma HLS resource core=AXI4LiteS metadata="-bus_bundle slv0" variable=float2
	#pragma HLS resource core=AXI4LiteS metadata="-bus_bundle slv0" variable=float3


	float3.write( float1.read() * float2.read() );
}
