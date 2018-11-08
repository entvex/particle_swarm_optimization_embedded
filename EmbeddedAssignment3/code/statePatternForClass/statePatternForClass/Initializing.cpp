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

void Initializing::SelfTestFailed(EmbeddedSystemX*, int ErrorNo)
{
	std::cout << "I am in Initializing and SelfTestFailed can't be used here" << std::endl;
}

void Initializing::restart(EmbeddedSystemX*)
{
	std::cout << "I am in Initializing and Restart can't be used here" << std::endl;
}

void Initializing::SelftestOk(EmbeddedSystemX*)
{
	std::cout << "I am in Initializing and SelftestOk can't be used here" << std::endl;
}

void Initializing::Initalized(EmbeddedSystemX* t)
{
	std::cout << "Changing to Operational" << std::endl;
	ChangeState(t, Operational::Instance());
}

void Initializing::Configure(EmbeddedSystemX*)
{
	std::cout << "I am in Initializing and Configure can't be used here" << std::endl;
}

void Initializing::ConfigurationEnded(EmbeddedSystemX*)
{
	std::cout << "I am in Initializing and ConfigurationEnded can't be used here" << std::endl;
}

void Initializing::Start(EmbeddedSystemX*)
{
	std::cout << "I am in Initializing and Start can't be used here" << std::endl;
}

void Initializing::Stop(EmbeddedSystemX*)
{
	std::cout << "I am in Initializing and Stop can't be used here" << std::endl;
}

void Initializing::Suspend(EmbeddedSystemX*)
{
	std::cout << "I am in Initializing and Suspend can't be used here" << std::endl;
}

void Initializing::Resume(EmbeddedSystemX*)
{
	std::cout << "I am in Initializing and Resume can't be used here" << std::endl;
}

void Initializing::chMode(EmbeddedSystemX*)
{
	std::cout << "I am in Initializing and chMode can't be used here" << std::endl;
}

void Initializing::ConfigX()
{
	std::cout << "I am in Initializing and ConfigX can't be used here" << std::endl;
}

void Initializing::EventX()
{
	std::cout << "I am in Initializing and EventX can't be used here" << std::endl;
}

void Initializing::EventY()
{
	std::cout << "I am in Initializing and EventY can't be used here" << std::endl;
}
