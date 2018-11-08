#pragma once
#include "OperatingState.h"
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
};

