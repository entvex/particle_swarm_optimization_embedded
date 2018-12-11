#include "RealTimeLoop.h"
#include <iostream>
#include "Ready.h"
#include "Suspended.h"

//Singleton
RealTimeLoop* RealTimeLoop::_instance = 0;

RealTimeLoop* RealTimeLoop::Instance()
{
	if (_instance == 0) {
		_instance = new RealTimeLoop();
	}
	std::cout << "Entering RealTimeLoop, Mode1 State" << std::endl;
	return _instance;
}
//Singleton

RealTimeLoop::RealTimeLoop()
{
}


void RealTimeLoop::Configure(Operational*)
{
	std::cout << "I am in RealTimeLoop and Configure can't be used here" << std::endl;
}

void RealTimeLoop::ConfigurationEnded(Operational*)
{
	std::cout << "I am in RealTimeLoop and ConfigurationEnded can't be used here" << std::endl;
}

void RealTimeLoop::Start(Operational*)
{
	std::cout << "I am in RealTimeLoop and Start can't be used here" << std::endl;
}

void RealTimeLoop::Stop(Operational* operational)
{
	std::cout << "Changing to Ready" << std::endl;
	ChangeState(operational, Ready::Instance());
}

void RealTimeLoop::Suspend(Operational* operational)
{
	std::cout << "Changing to Suspended" << std::endl;
	ChangeState(operational, Suspended::Instance());
}

void RealTimeLoop::Resume(Operational*)
{
	std::cout << "I am in RealTimeLoop and Resume can't be used here" << std::endl;
}

void RealTimeLoop::chMode(Operational*)
{
	_state->chMode(this);
}

void RealTimeLoop::ConfigX()
{
	std::cout << "I am in RealTimeLoop and ConfigX can't be used here" << std::endl;
}

void RealTimeLoop::EventX()
{
	_state->EventX();
}

void RealTimeLoop::EventY()
{
	_state->EventY();
}

void RealTimeLoop::change_state(RealTimeLoopState* realTimeLoopState)
{
	_state = realTimeLoopState;
}

void RealTimeLoop::RunRealTime(Operational*)
{
	_state->RunRealTime(this);
}

void RealTimeLoop::Simulate(Operational*)
{
	_state->Simulate(this);
}
