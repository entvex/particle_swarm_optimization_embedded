#pragma once
#include "StateEmbeddedSystemX.h"

class EmbeddedSystemX {
public:
	EmbeddedSystemX();
	void Restart();
	void SelfTestFailed(int);
	void SelftestOk();
	void Initalized();
	void Configure();
	void ConfigurationEnded();
	void Start();
	void Stop();
	void Suspend();
	void Resume();
	void chMode();
	void ConfigX();
	void EventX();
	void EventY();

	//
private:
	friend class StateEmbeddedSystemX;
	void change_state(StateEmbeddedSystemX*);

	StateEmbeddedSystemX* _state;
};