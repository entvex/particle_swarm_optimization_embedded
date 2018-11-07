#pragma once
#include "StateEmbeddedSystemX.h"

class Failure :public StateEmbeddedSystemX
{
private:
	static Failure* _instance;
public:

	static int ErrorNo;
	static Failure* Instance();


	Failure();
	void display(int ErrorNo);
	void SelfTestFailed(embbeded_system_xx*, int ErrorNo) override;
	void restart(embbeded_system_xx*) override;
	void SelftestOk(embbeded_system_xx*) override;
	void Initalized(embbeded_system_xx*) override;
	void Configure(embbeded_system_xx*) override;
	void ConfigurationEnded(embbeded_system_xx*) override;
};
