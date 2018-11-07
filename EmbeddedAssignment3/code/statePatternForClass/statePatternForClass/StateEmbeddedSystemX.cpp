#pragma once
#include "StateEmbeddedSystemX.h"
#include "EmbbededSystemX.h"

void StateEmbeddedSystemX::SelfTestFailed(embbeded_system_xx*, int ErrorNo)
{
	
}

void StateEmbeddedSystemX::restart(embbeded_system_xx*)
{
	
}

void StateEmbeddedSystemX::SelftestOk(embbeded_system_xx*)
{

}

void StateEmbeddedSystemX::Initalized(embbeded_system_xx*)
{

}

void StateEmbeddedSystemX::ready(embbeded_system_xx*)
{

}

void StateEmbeddedSystemX::ChangeState(embbeded_system_xx* t, StateEmbeddedSystemX* s) {
	t->change_state(s);
}
