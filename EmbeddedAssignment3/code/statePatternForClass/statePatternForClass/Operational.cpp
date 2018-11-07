#include "Operational.h"
#include <ostream>
#include <iostream>
#include "PowerOnSelfTest.h"
#include "Ready.h"

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
	_state = Ready::Instance();
	std::cout << "Entering Operational, Ready State" << std::endl;
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

void Operational::Configure(embbeded_system_xx*)
{
	_state->Configure(this);
}

void Operational::ConfigurationEnded(embbeded_system_xx*)
{
	_state->ConfigurationEnded(this);
}

void Operational::change_state(OperatingState* operatingState)
{
	_state = operatingState;
}
