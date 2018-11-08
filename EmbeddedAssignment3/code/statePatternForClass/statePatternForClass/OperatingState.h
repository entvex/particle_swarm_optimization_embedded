#pragma once
#include "EmbeddedSystemX.h"
#include "Operational.h"
class Operational;

class OperatingState
{
public:
	virtual void Configure(Operational*);
	virtual void ConfigurationEnded(Operational*);
	virtual void Start(Operational*);
	virtual void Stop(Operational*);
	virtual void Suspend(Operational*);
	virtual void Resume(Operational*);
	virtual void chMode(Operational*);
	virtual void ConfigX();
	virtual void EventX();
	virtual void EventY();
protected:
	static void ChangeState(Operational*, OperatingState*);
};

