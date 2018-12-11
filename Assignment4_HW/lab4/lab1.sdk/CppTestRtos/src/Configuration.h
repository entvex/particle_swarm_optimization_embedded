#pragma once
#include "OperatingState.h"
class Configuration :
	public OperatingState
{
private:
	static Configuration* _instance;
	Configuration();

public:
	static Configuration* Instance();
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
	void readConfigurationInfo();
};

