#include "OperatingState.h"
#include "StateEmbeddedSystemX.h"
#include "EmbeddedSystemX.h"
#include "Operational.h"

void OperatingState::Configure(Operational* operational)
{
}

void OperatingState::ConfigurationEnded(Operational* operational)
{
}

void OperatingState::Start(Operational*)
{
}

void OperatingState::Stop(Operational*)
{
}

void OperatingState::Suspend(Operational*)
{
}

void OperatingState::Resume(Operational*)
{
}

void OperatingState::chMode(Operational*)
{
}

void OperatingState::ConfigX()
{
}

void OperatingState::EventX()
{
}

void OperatingState::EventY()
{
}

void OperatingState::ChangeState(Operational* t, OperatingState* s)
{
	t->change_state(s);
}
