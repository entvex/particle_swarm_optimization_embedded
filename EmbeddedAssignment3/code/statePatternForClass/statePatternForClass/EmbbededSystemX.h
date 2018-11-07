#pragma once
#include "StateEmbeddedSystemX.h"

class embbeded_system_xx {
public:
	embbeded_system_xx();
	void restart();
	void SelfTestFailed();
	void SelftestOk();
	void Initalized();
	//
private:
	friend class StateEmbeddedSystemX;
	void change_state(StateEmbeddedSystemX*);

	StateEmbeddedSystemX* _state;
};