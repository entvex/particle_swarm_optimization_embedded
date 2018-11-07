#include "Initializing.h"
#include <ostream>
#include <iostream>
#include "Operational.h"

//Singleton
Initializing* Initializing::_instance = 0;

Initializing* Initializing::Instance()
{
	if (_instance == 0) {
		_instance = new Initializing();
	} return _instance;
}
//Singleton

Initializing::Initializing()
{
	std::cout << "Entering Initializing" << std::endl;
}

void Initializing::SelfTestFailed(embbeded_system_xx*, int ErrorNo)
{
	std::cout << "I am in Initializing and SelfTestFailed can't be used here" << std::endl;
}

void Initializing::restart(embbeded_system_xx*)
{
	std::cout << "I am in Initializing and restart can't be used here" << std::endl;
}

void Initializing::SelftestOk(embbeded_system_xx*)
{
	std::cout << "I am in Initializing and SelftestOk can't be used here" << std::endl;
}

void Initializing::Initalized(embbeded_system_xx* t)
{
	std::cout << "Changing to Operational" << std::endl;
	ChangeState(t, Operational::Instance());
}

void Initializing::Configure(embbeded_system_xx*)
{
	std::cout << "I am in Initializing and Configure can't be used here" << std::endl;
}

void Initializing::ConfigurationEnded(embbeded_system_xx*)
{
	std::cout << "I am in Initializing and ConfigurationEnded can't be used here" << std::endl;
}
