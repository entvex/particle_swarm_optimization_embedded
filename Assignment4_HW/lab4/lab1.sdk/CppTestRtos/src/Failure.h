#pragma once
#include "StateEmbeddedSystemX.h"

class Failure :public StateEmbeddedSystemX
{
private:
	static Failure* _instance;
public:

	static int ErrorNo;
	static Failure* Instance(int);


	Failure();
	void display(int ErrorNo);
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
