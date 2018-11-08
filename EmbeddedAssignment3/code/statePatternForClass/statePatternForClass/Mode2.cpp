#include "Mode2.h"
#include <iostream>
#include "Mode3.h"

//Singleton
Mode2* Mode2::_instance = 0;

Mode2* Mode2::Instance()
{
	if (_instance == 0) {
		_instance = new Mode2();
	} return _instance;
}

void Mode2::chMode(RealTimeLoop* realTimeLoop)
{
	std::cout << "Changing to Mode3" << std::endl;
	ChangeState(realTimeLoop, Mode3::Instance());
}

void Mode2::EventX()
{
	std::cout << "EventX has been called: Respond M2 Event X" << std::endl;
}

void Mode2::EventY()
{
	std::cout << "EventY has been called: Respond M2 Event Y" << std::endl;
}

//Singleton

Mode2::Mode2()
{
}

