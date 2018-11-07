#include "Operational.h"
#include <ostream>
#include <iostream>
#include "PowerOnSelfTest.h"

//Singleton
Operational* Operational::_instance = 0;

Operational* Operational::Instance()
{
	if (_instance == 0) {
		_instance = new Operational();
	} return _instance;
}
//Singleton

Operational::Operational()
{
	std::cout << "Entering Operational" << std::endl;
}

void Operational::SelfTestFailed(embbeded_system_xx*, int ErrorNo)
{
	std::cout << "I am in Operational and SelfTestFailed can't be used here" << std::endl;
}

void Operational::restart(embbeded_system_xx* t)
{
	std::cout << "Change to PowerOnSelfTest by input restart" << std::endl;
	ChangeState(t, PowerOnSelfTest::Instance());
}

void Operational::SelftestOk(embbeded_system_xx*)
{
	std::cout << "I am in Operational and SelftestOk can't be used here" << std::endl;
}

void Operational::Initalized(embbeded_system_xx*)
{
	std::cout << "I am in Operational and Initalized can't be used here" << std::endl;
}
