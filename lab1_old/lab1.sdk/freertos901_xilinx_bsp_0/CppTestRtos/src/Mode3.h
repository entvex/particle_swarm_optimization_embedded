#pragma once
#include "TimeLoopState.h"
class Mode3 :
	public TimeLoopState
{
private:
	Mode3();
	static Mode3* _instance;
public:
	static Mode3* Instance();
	void chMode(RealTimeLoop*) override;
	void EventX() override;
	void EventY() override;
};
