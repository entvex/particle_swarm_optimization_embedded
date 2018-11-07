#pragma once
#include "EmbbededSystemX.h"
#include "Operational.h"
class Operational;

class OperatingState
{
public:
	virtual void Configure(Operational*);
	virtual void ConfigurationEnded(Operational*);
protected:
	static void ChangeState(Operational*, OperatingState*);
};

