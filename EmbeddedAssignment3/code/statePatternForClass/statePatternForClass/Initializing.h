#pragma once
#include "StateEmbeddedSystemX.h"
class Initializing : public StateEmbeddedSystemX
{
private:
	static Initializing* _instance;
public:
	static Initializing* Instance();
	Initializing();
	~Initializing();
	void SelfTestFailed(embbeded_system_xx*, int ErrorNo) override;
	void restart(embbeded_system_xx*) override;
	void SelftestOk(embbeded_system_xx*) override;
	void Initalized(embbeded_system_xx*) override;
	void Configure(embbeded_system_xx*) override;
	void ConfigurationEnded(embbeded_system_xx*) override;
};

