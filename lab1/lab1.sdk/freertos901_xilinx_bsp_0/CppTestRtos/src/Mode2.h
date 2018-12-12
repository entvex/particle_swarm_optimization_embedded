#pragma once
#include "TimeLoopState.h"
class Mode2 :
	public TimeLoopState
{
private:
	Mode2();
	static Mode2* _instance;
public:
	static Mode2* Instance();
	void chMode(RealTimeLoop*) override;
	void EventX() override;
	void EventY() override;
};

