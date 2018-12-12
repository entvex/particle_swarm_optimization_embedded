#include "Configuration.h"
#include <iostream>
#include "Ready.h"

//Singleton
Configuration* Configuration::_instance = 0;

Configuration* Configuration::Instance()
{
	if (_instance == 0) {
		_instance = new Configuration();
	}
	_instance->readConfigurationInfo();
	return _instance;
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

void Configuration::Start(Operational*)
{
	std::cout << "I am in Configuration and Start can't be used here" << std::endl;
}

void Configuration::Stop(Operational*)
{
	std::cout << "I am in Configuration and Stop can't be used here" << std::endl;
}

void Configuration::Suspend(Operational*)
{
	std::cout << "I am in Configuration and Suspend can't be used here" << std::endl;
}

void Configuration::Resume(Operational*)
{
	std::cout << "I am in Configuration and Resume can't be used here" << std::endl;
}

void Configuration::chMode(Operational*)
{
	std::cout << "I am in Configuration and chMode can't be used here" << std::endl;
}

void Configuration::ConfigX()
{
	std::cout << "ConfigX has been called: Performing Configuration X" << std::endl;
}

void Configuration::EventX()
{
	std::cout << "I am in Configuration and EventX can't be used here" << std::endl;
}

void Configuration::EventY()
{
	std::cout << "I am in Configuration and EventY can't be used here" << std::endl;
}

void Configuration::readConfigurationInfo()
{
	std::cout << "Entry: calling readConfigurationInfo" << std::endl;
}
