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
	void SelfTestFailed(EmbeddedSystemX*, int ErrorNo) override;
	void restart(EmbeddedSystemX*) override;
	void SelftestOk(EmbeddedSystemX*) override;
	void Initalized(EmbeddedSystemX*) override;
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
};

