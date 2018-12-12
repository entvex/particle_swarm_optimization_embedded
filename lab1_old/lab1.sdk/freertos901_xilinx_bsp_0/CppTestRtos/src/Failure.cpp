#include "Failure.h"
#include <ostream>
#include <iostream>
#include "PowerOnSelfTest.h"

//Singleton
Failure* Failure::_instance = 0;

Failure* Failure::Instance(int ErrorNo)
{
	if (_instance == 0) {
		_instance = new Failure();
	} 
	_instance->display(ErrorNo);
	return _instance;
}
//Singleton

Failure::Failure()
{

}

void Failure::display(int ErrorNo)
{
	std::cout << "Entry: Displaying Error Number: " << ErrorNo << std::endl;
}

void Failure::SelfTestFailed(EmbeddedSystemX*, int ErrorNo)
{
	std::cout << "I am in Failure and SelfTestFailed can't be used here" << std::endl;
}

void Failure::restart(EmbeddedSystemX* embbeded_system_xx)
{
	std::cout << "Changing to PowerOnSelfTest" << std::endl;
	ChangeState(embbeded_system_xx, PowerOnSelfTest::Instance());
}

void Failure::SelftestOk(EmbeddedSystemX*)
{
	std::cout << "I am in Failure and SelftestOk can't be used here" << std::endl;
}

void Failure::Initalized(EmbeddedSystemX*)
{
	std::cout << "I am in Failure and Initalized can't be used here" << std::endl;
}

void Failure::Configure(EmbeddedSystemX*)
{
	std::cout << "I am in Failure and Configure can't be used here" << std::endl;
}

void Failure::ConfigurationEnded(EmbeddedSystemX*)
{
	std::cout << "I am in Failure and ConfigurationEnded can't be used here" << std::endl;
}

void Failure::Start(EmbeddedSystemX*)
{
	std::cout << "I am in Failure and Start can't be used here" << std::endl;
}

void Failure::Stop(EmbeddedSystemX*)
{
	std::cout << "I am in Failure and Stop can't be used here" << std::endl;
}

void Failure::Suspend(EmbeddedSystemX*)
{
	std::cout << "I am in Failure and Suspend can't be used here" << std::endl;
}

void Failure::Resume(EmbeddedSystemX*)
{
	std::cout << "I am in Failure and Resume can't be used here" << std::endl;
}

void Failure::chMode(EmbeddedSystemX*)
{
	std::cout << "I am in Failure and chMode can't be used here" << std::endl;
}

void Failure::ConfigX()
{
	std::cout << "I am in Failure and ConfigX can't be used here" << std::endl;
}

void Failure::EventX()
{
	std::cout << "I am in Failure and EventX can't be used here" << std::endl;
}

void Failure::EventY()
{
	std::cout << "I am in Failure and EventY can't be used here" << std::endl;
}
