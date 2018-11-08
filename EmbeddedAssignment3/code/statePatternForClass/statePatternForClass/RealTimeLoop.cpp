#include "RealTimeLoop.h"

//Singleton
RealTimeLoop* RealTimeLoop::_instance = 0;

RealTimeLoop* RealTimeLoop::Instance()
{
	if (_instance == 0) {
		_instance = new RealTimeLoop();
	} return _instance;
}
//Singleton

RealTimeLoop::RealTimeLoop()
{
}


void RealTimeLoop::Configure(Operational*)
{
}

void RealTimeLoop::ConfigurationEnded(Operational*)
{
}

void RealTimeLoop::Start(Operational*)
{
}

void RealTimeLoop::Stop(Operational*)
{
}

void RealTimeLoop::Suspend(Operational*)
{
}

void RealTimeLoop::Resume(Operational*)
{
}

void RealTimeLoop::chMode(Operational*)
{
}

void RealTimeLoop::ConfigX()
{
}

void RealTimeLoop::EventX()
{
}

void RealTimeLoop::EventY()
{
}
