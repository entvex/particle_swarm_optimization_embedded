#include "OperatingState.h"
#include "StateEmbeddedSystemX.h"
#include "EmbbededSystemX.h"
#include "Operational.h"

void OperatingState::Configure(Operational* operational)
{
}

void OperatingState::ConfigurationEnded(Operational* operational)
{

}

void OperatingState::ChangeState(Operational* t, OperatingState* s)
{
	t->change_state(s);
}
