#pragma once
#include "StateEmbeddedSystemX.h"
#include "OperatingState.h"

class OperatingState;

class Operational :public StateEmbeddedSystemX
{
private:
	static Operational* _instance;
	Operational();
public:
	static Operational* Instance();
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

protected:
	friend class OperatingState;
	void change_state(OperatingState* operatingState);
	OperatingState* _state;
};

