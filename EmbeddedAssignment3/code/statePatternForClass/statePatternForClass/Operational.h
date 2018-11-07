#pragma once
#include "StateEmbeddedSystemX.h"

class Operational :public StateEmbeddedSystemX
{
private:
	static Operational* _instance;
public:
	static Operational* Instance();
	Operational();
	~Operational();
	void SelfTestFailed(embbeded_system_xx*, int ErrorNo) override;
	void restart(embbeded_system_xx*) override;
	void SelftestOk(embbeded_system_xx*) override;
	void Initalized(embbeded_system_xx*) override;
};

