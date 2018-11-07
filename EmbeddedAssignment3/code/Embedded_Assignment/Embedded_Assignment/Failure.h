#pragma once
#include "State.h"
#include "EmbeddedSystemX.h"
#include "PowerOnSelfTest.h"
#include <iostream>

class Failure : public State
{
public:
	Failure()
	{
		std::cout << "Failure-ctor" << std::endl;
	};
	~Failure()
	{
		std::cout << "dtor-Failure" << std::endl;
	};
	void restart(EmbeddedSystemX *m)
	{
		{
			std::cout << "Going from Failure to PowerOnSelfTest" << std::endl;
			m->setCurrent(new PowerOnSelfTest());
			delete this;
		}
	}
};