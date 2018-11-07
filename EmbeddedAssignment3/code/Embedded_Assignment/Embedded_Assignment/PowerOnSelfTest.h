#pragma once
#include "State.h"
#include "EmbeddedSystemX.h"
#include "Failure.h"
#include <iostream>

class PowerOnSelfTest : public State
{
public:
	PowerOnSelfTest()
	{
		std::cout << "PowerOnSelfTest-ctor" << std::endl;
	};
	~PowerOnSelfTest()
	{
		std::cout << "dtor-PowerOnSelfTest" << std::endl;
	};
	void selfTestFailed(EmbeddedSystemX *m)
	{
		std::cout << "Going from PowerOnSelfTest to Failure" << std::endl;
		m->setCurrent(new Failure());
		delete this;
	}
};