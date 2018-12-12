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
	std::cout << "Changing to RealTimeLoop" << std::endl;
	ChangeState(operational, RealTimeLoop::Instance());
}

void Ready::Stop(Operational*)
{
	std::cout << "I am in Ready and Stop can't be used here" << std::endl;
}

void Ready::Suspend(Operational*)
{
	std::cout << "I am in Ready and Suspend can't be used here" << std::endl;
}

void Ready::Resume(Operational*)
{
	std::cout << "I am in Ready and Resume can't be used here" << std::endl;
}

void Ready::chMode(Operational*)
{
	std::cout << "I am in Ready and chMode can't be used here" << std::endl;
}

void Ready::ConfigX()
{
	std::cout << "I am in Ready and ConfigX can't be used here" << std::endl;
}

void Ready::EventX()
{
	std::cout << "I am in Ready and EventX can't be used here" << std::endl;
}

void Ready::EventY()
{
	std::cout << "I am in Ready and EventY can't be used here" << std::endl;
}
