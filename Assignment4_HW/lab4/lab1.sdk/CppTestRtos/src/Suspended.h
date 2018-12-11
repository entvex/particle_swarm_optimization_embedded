#pragma once
#include "OperatingState.h"
class Suspended :
	public OperatingState
{
private:
	Suspended();
	static Suspended* _instance;
public:
	static Suspended* Instance();
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

