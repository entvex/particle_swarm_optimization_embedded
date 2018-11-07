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
};

