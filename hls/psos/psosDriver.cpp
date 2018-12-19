#include "psosDriver.h"

void psosdriverc::test(){
	bool _complete = false;

	float _c1 = 10;
	float _c2 = 1;

	float _resultx1;
	float _resultx2;

	c1.write(_c1);
	c2.write(_c2);
	negativeFormula.write(false);

	wait();

	while(!_complete){
		_complete = complete.read();
		wait();
	}

	_resultx1 = finalx1.read();
	_resultx2 = finalx2.read();

	wait();

	printf("Final x1: %f\nFinal x2: %f\nc1: %f\nc2: %f\n", _resultx1, _resultx2, _c1, _c2);

	wait();

	if (_complete)
		retval = 1;
	else
		retval = 0;

}




/*
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
}*/
