#pragma once
#include "OperatingState.h"
#include "TimeLoopState.h"
class RealTimeLoop :
	public OperatingState
{
private: 
	RealTimeLoop();
	static RealTimeLoop* _instance;
public:
	static RealTimeLoop* Instance();
	void Configure(Operational*) override;
	void ConfigurationEnded(Operational*) override;
	void Start(Operational*) override;
	void Stop(Operational*) override;
	void Suspend(Operational*) override;
	void Resume(Operational*) override;
	void chMode(Operational*) override;
	void ConfigX() override;
	void EventX() override;
	void EventY() override;

protected:
	friend class TimeLoopState;
	void change_state(TimeLoopState*);
	TimeLoopState* _state;
};

