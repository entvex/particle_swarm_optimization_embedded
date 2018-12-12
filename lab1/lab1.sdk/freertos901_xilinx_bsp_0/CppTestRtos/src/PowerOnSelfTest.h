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
	void restart(EmbeddedSystemX*) override;
	void SelftestOk(EmbeddedSystemX*) override;
	void Initalized(EmbeddedSystemX*) override;
	void SelfTestFailed(EmbeddedSystemX*, int ErrorNo) override;
	void Configure(EmbeddedSystemX*) override;
	void ConfigurationEnded(EmbeddedSystemX*) override;
	void Start(EmbeddedSystemX*) override;
	void Stop(EmbeddedSystemX*) override;
	void Suspend(EmbeddedSystemX*) override;
	void Resume(EmbeddedSystemX*) override;
	void chMode(EmbeddedSystemX*) override;
	void ConfigX() override;
	void EventX() override;
	void EventY() override;
	void systemSelfTest();
};