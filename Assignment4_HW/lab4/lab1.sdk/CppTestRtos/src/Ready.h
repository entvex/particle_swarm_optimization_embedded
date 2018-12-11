#pragma once
#include "OperatingState.h"
class Ready :public OperatingState
{
private:
	static Ready* _instance;
	Ready();

public:
	static Ready* Instance();
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

