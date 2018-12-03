#include "Suspended.h"
#include <iostream>
#include "activeObject/RealTimeLoop.h"
#include "Ready.h"


//Singleton
Suspended* Suspended::_instance = 0;

Suspended* Suspended::Instance()
{
	if (_instance == 0) {
		_instance = new Suspended();
	} return _instance;
}
//Singleton

Suspended::Suspended()
{
}


void Suspended::Configure(Operational*)
{
	std::cout << "I am in Configure and Configure can't be used here" << std::endl;
}

void Suspended::ConfigurationEnded(Operational*)
{
	std::cout << "I am in Configure and ConfigurationEnded can't be used here" << std::endl;
}

void Suspended::Start(Operational*)
{
	std::cout << "I am in Configure and Start can't be used here" << std::endl;
}

void Suspended::Stop(Operational* operational)
{
	std::cout << "Changing to Suspended" << std::endl;
	ChangeState(operational, Ready::Instance());
}

void Suspended::Suspend(Operational*)
{
	std::cout << "I am in Configure and Suspend can't be used here" << std::endl;
}

void Suspended::Resume(Operational* operational)
{
	std::cout << "Changing to RealTimeLoop" << std::endl;
	ChangeState(operational, RealTimeLoop::Instance());
}

void Suspended::chMode(Operational*)
{
	std::cout << "I am in Configure and chMode can't be used here" << std::endl;
}

void Suspended::ConfigX()
{
	std::cout << "I am in Configure and ConfigX can't be used here" << std::endl;
}

void Suspended::EventX()
{
	std::cout << "I am in Configure and EventX can't be used here" << std::endl;
}

void Suspended::EventY()
{
	std::cout << "I am in Configure and EventY can't be used here" << std::endl;
}



