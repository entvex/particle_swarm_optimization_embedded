#include "Mode3.h"
#include <iostream>
#include "Mode1.h"

//Singleton
Mode3* Mode3::_instance = 0;

Mode3* Mode3::Instance()
{
	if (_instance == 0) {
		_instance = new Mode3();
	} return _instance;
}

void Mode3::chMode(RealTimeLoop* realTimeLoop)
{
	std::cout << "Changing to Mode1" << std::endl;
	ChangeState(realTimeLoop, Mode1::Instance());
}

void Mode3::EventX()
{
	std::cout << "EventX has been called: Respond M3 Event X" << std::endl;
}

void Mode3::EventY()
{
	std::cout << "I am in Mode3 and EventY can't be used here" << std::endl;
}

//Singleton

Mode3::Mode3()
{
}


