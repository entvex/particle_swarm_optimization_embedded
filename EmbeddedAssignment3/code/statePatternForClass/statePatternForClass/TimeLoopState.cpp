#include "TimeLoopState.h"


void TimeLoopState::chMode(RealTimeLoop*)
{
}

void TimeLoopState::EventX()
{
}

void TimeLoopState::EventY()
{
}

void TimeLoopState::ChangeState(RealTimeLoop* t, TimeLoopState* s)
{
	t->change_state(s);
}
