#pragma once
#include "RealTimeLoop.h"
class RealTimeLoop;

class TimeLoopState
{
public:

	virtual void chMode(RealTimeLoop*);
	virtual void EventX();
	virtual void EventY();
protected:
	static void ChangeState(RealTimeLoop*, TimeLoopState*);
};
