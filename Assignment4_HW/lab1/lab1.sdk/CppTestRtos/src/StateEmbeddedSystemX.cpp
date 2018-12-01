#pragma once
#include "StateEmbeddedSystemX.h"
#include "EmbeddedSystemX.h"

void StateEmbeddedSystemX::SelfTestFailed(EmbeddedSystemX*, int ErrorNo)
{
}

void StateEmbeddedSystemX::restart(EmbeddedSystemX*)
{
}

void StateEmbeddedSystemX::SelftestOk(EmbeddedSystemX*)
{
}

void StateEmbeddedSystemX::Initalized(EmbeddedSystemX*)
{
}

void StateEmbeddedSystemX::Configure(EmbeddedSystemX*)
{
}

void StateEmbeddedSystemX::ConfigurationEnded(EmbeddedSystemX*)
{
}

void StateEmbeddedSystemX::Start(EmbeddedSystemX*)
{
}

void StateEmbeddedSystemX::Stop(EmbeddedSystemX*)
{
}

void StateEmbeddedSystemX::Suspend(EmbeddedSystemX*)
{
}

void StateEmbeddedSystemX::Resume(EmbeddedSystemX*)
{
}

void StateEmbeddedSystemX::chMode(EmbeddedSystemX*)
{
}

void StateEmbeddedSystemX::ConfigX()
{
}

void StateEmbeddedSystemX::EventX()
{
}

void StateEmbeddedSystemX::EventY()
{
}

void StateEmbeddedSystemX::ChangeState(EmbeddedSystemX* t, StateEmbeddedSystemX* s) {
	t->change_state(s);
}
