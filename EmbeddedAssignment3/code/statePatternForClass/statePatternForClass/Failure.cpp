#include "Failure.h"
#include <ostream>
#include <iostream>
#include "PowerOnSelfTest.h"

//Singleton
Failure* Failure::_instance = 0;

Failure* Failure::Instance()
{
	if (_instance == 0) {
		_instance = new Failure();
	} return _instance;
}
//Singleton

Failure::Failure()
{
	std::cout << "Entering Failure" << std::endl;
	std::cout << "Entering calling display" << std::endl;
	display(434343);
}

void Failure::display(int ErrorNo)
{
	std::cout << "Displaying errorNo:" << ErrorNo << std::endl;
}

void Failure::SelfTestFailed(embbeded_system_xx*, int ErrorNo)
{
	std::cout << "I am in Failure and SelfTestFailed can't be used here" << std::endl;
}

void Failure::restart(embbeded_system_xx* embbeded_system_xx)
{
	std::cout << "Changing to PowerOnSelfTest" << std::endl;
	ChangeState(embbeded_system_xx, PowerOnSelfTest::Instance());
}

void Failure::SelftestOk(embbeded_system_xx*)
{
	std::cout << "I am in Failure and SelftestOk can't be used here" << std::endl;
}

void Failure::Initalized(embbeded_system_xx*)
{
	std::cout << "I am in Failure and Initalized can't be used here" << std::endl;
}