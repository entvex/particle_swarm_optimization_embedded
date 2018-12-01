#include "Mode1.h"
#include <iostream>
#include "Mode2.h"

//Singleton
Mode1* Mode1::_instance = 0;

Mode1* Mode1::Instance()
{
	if (_instance == 0) {
		_instance = new Mode1();
	} return _instance;
}

void Mode1::chMode(RealTimeLoop* realTimeLoop)
{
	std::cout << "Changing to Mode2" << std::endl;
	ChangeState(realTimeLoop, Mode2::Instance());
}

void Mode1::EventX()
{
	std::cout << "EventX has been called: Respond M1 Event X" << std::endl;
}

void Mode1::EventY()
{
	std::cout << "I am in Mode1 and EventY can't be used here" << std::endl;
}

//Singleton

Mode1::Mode1()
{
}

