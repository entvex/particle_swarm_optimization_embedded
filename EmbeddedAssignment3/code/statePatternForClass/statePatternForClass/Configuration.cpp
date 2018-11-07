#include "Configuration.h"
#include <iostream>
#include "Ready.h"

//Singleton
Configuration* Configuration::_instance = 0;

Configuration* Configuration::Instance()
{
	if (_instance == 0) {
		_instance = new Configuration();
	} return _instance;
}
//Singleton

Configuration::Configuration()
{
}


void Configuration::Configure(Operational* operational)
{
	std::cout << "I am in Configuration and Configure can't be used here" << std::endl;
}

void Configuration::ConfigurationEnded(Operational* operational)
{
	std::cout << "Changing to Ready" << std::endl;
	ChangeState(operational, Ready::Instance());
}
