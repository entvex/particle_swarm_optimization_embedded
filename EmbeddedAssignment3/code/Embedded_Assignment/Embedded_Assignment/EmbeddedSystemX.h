#pragma once
#include <iostream>
#include "State.h"
#include "PowerOnSelfTest.h"
#include "Failure.h"

class EmbeddedSystemX
{
	class State *current;
public:
	EmbeddedSystemX()
	{
		current = new PowerOnSelfTest();
		std::cout << "Starting Embedded Syste X" << std::endl;
	}
	void setCurrent(State *s)
	{
		current = s;
	}
	void selfTestFailed()
	{
		current->selfTestFailed(this);
	}
	void restart()
	{
		current->restart(this);
	}
};