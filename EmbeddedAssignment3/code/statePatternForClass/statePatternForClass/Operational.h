#pragma once
#include "StateEmbeddedSystemX.h"
#include "OperatingState.h"

class Operational :public StateEmbeddedSystemX
{
private:
	static Operational* _instance;
	Operational();
public:
	static Operational* Instance();
	void SelfTestFailed(embbeded_system_xx*, int ErrorNo) override;
	void restart(embbeded_system_xx*) override;
	void SelftestOk(embbeded_system_xx*) override;
	void Initalized(embbeded_system_xx*) override;
	void Configure(embbeded_system_xx*) override;
	void ConfigurationEnded(embbeded_system_xx*) override;

protected:
	friend class OperatingState;
	void change_state(OperatingState*);
	OperatingState* _state;
};

