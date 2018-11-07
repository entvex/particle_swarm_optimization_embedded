#pragma once
#include "OperatingState.h"
class Ready :
	public OperatingState
{
private:
	static Ready* _instance;
	Ready();

public:
	static Ready* Instance();
	void Configure(Operational*) override;
	void ConfigurationEnded(Operational*) override;
};

