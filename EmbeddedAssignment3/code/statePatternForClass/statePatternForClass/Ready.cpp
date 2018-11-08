#include "Ready.h"
#include "Configuration.h"
#include <iostream>
#include "RealTimeLoop.h"


//Singleton
Ready* Ready::_instance = 0;

Ready* Ready::Instance()
{
	if (_instance == 0) {
		_instance = new Ready();
	} return _instance;
}
//Singleton

Ready::Ready()
{
}

void Ready::Configure(Operational* operational)
{
	std::cout << "Changing to Configuration" << std::endl;
	ChangeState(operational, Configuration::Instance());
}

void Ready::ConfigurationEnded(Operational* operational)
{
	std::cout << "I am in Ready and ConfigurationEnded can't be used here" << std::endl;
}

void Ready::Start(Operational* operational)
{
	std::cout << "Changing to Configuration" << std::endl;
	ChangeState(operational, RealTimeLoop::Instance());
}

void Ready::Stop(Operational*)
{
}

void Ready::Suspend(Operational*)
{
}

void Ready::Resume(Operational*)
{
}

void Ready::chMode(Operational*)
{
}

void Ready::ConfigX()
{
}

void Ready::EventX()
{
}

void Ready::EventY()
{
}
