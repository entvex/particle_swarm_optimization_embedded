#include "floatDriver.h"

void floatDriverc::test(){
	float _float1 = 2.5;
	float _float2 = 2.5;
	float _float3 = _float1 * _float2;

	float _result;

	float1.write(_float1);
	float2.write(_float2);

	wait();
	wait();

	_result = float3.read();

	printf("_float1: %f\n_float2: %f\n_float3: %f\n_result: %f\n", _float1, _float2, _float3, _result);

	wait();

	if (_result == _float3)
		retval = 0;
	else
		retval = 1;
}
