#pragma once
#include "StateEmbeddedSystemX.h"

class PowerOnSelfTest : public StateEmbeddedSystemX
{
private:
	static PowerOnSelfTest* _instance;
public:
	static PowerOnSelfTest* Instance();

	PowerOnSelfTest();
	~PowerOnSelfTest();
	void restart(embbeded_system_xx*) override;
	void SelftestOk(embbeded_system_xx*) override;
	void Initalized(embbeded_system_xx*) override;
	void SelfTestFailed(embbeded_system_xx*, int ErrorNo) override;
	void ready(embbeded_system_xx*) override;
};