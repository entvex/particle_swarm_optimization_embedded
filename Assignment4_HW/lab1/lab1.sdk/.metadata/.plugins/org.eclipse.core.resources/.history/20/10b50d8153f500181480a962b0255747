#pragma once
#include "TimeLoopState.h"
class Mode1 :
	public TimeLoopState
{
private:
	Mode1();
	static Mode1* _instance;
public:
	static Mode1* Instance();
	void chMode(RealTimeLoop*) override;
	void EventX() override;
	void EventY() override;
};

