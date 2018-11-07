#pragma once
#include <iostream>
#include "EmbeddedSystemX.h"

class State
{
public:
	virtual void selfTestFailed(EmbeddedSystemX *m)
	{
		std::cout << "Already SelfTestFailed" << std::endl;
	}
	virtual void restart(EmbeddedSystemX *m)
	{
		std::cout << "Already Restarted" << std::endl;
	}
};