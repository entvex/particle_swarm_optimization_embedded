#include "PowerOnSelfTest.h"
#include <iostream>
#include "Failure.h"
#include "Initializing.h"

//Singleton
PowerOnSelfTest* PowerOnSelfTest::_instance = 0;

PowerOnSelfTest* PowerOnSelfTest::Instance()
{
	if (_instance == 0) {
		_instance = new PowerOnSelfTest();
	} return _instance;
}

void PowerOnSelfTest::SelfTestFailed(embbeded_system_xx* t, int ErrorNo)
{
	std::cout << "Change to Failure by input SelfTestFailed" << std::endl;
	ChangeState(t, Failure::Instance());
}

void PowerOnSelfTest::Configure(embbeded_system_xx*)
{
	std::cout << "I am in PowerOnSelfTest and can't Configure from here" << std::endl;
}

void PowerOnSelfTest::ConfigurationEnded(embbeded_system_xx*)
{
	std::cout << "I am in PowerOnSelfTest and can't ConfigurationEnded from here" << std::endl;
}

PowerOnSelfTest::PowerOnSelfTest()
{
	std::cout << "I am now in PowerOnSelfTest" << std::endl;
}

void PowerOnSelfTest::restart(embbeded_system_xx*)
{
	std::cout << "I am in PowerOnSelfTest and  can't restart from here" << std::endl;
}

void PowerOnSelfTest::SelftestOk(embbeded_system_xx* t)
{
	std::cout << "Change to Initializing by input SelftestOk" << std::endl;
	ChangeState(t, Initializing::Instance());
}

void PowerOnSelfTest::Initalized(embbeded_system_xx*)
{
	std::cout << "I am in PowerOnSelfTest and  can't Initalized from here" << std::endl;
}
