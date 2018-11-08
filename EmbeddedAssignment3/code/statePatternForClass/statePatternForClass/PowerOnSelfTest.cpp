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

void PowerOnSelfTest::SelfTestFailed(EmbeddedSystemX* t, int ErrorNo)
{
	std::cout << "Change to Failure by input SelfTestFailed" << std::endl;
	ChangeState(t, Failure::Instance(ErrorNo));
}

void PowerOnSelfTest::Configure(EmbeddedSystemX*)
{
	std::cout << "I am in PowerOnSelfTest and can't Configure from here" << std::endl;
}

void PowerOnSelfTest::ConfigurationEnded(EmbeddedSystemX*)
{
	std::cout << "I am in PowerOnSelfTest and can't ConfigurationEnded from here" << std::endl;
}

void PowerOnSelfTest::Start(EmbeddedSystemX*)
{
	std::cout << "I am in PowerOnSelfTest and can't Start from here" << std::endl;
}

void PowerOnSelfTest::Stop(EmbeddedSystemX*)
{
	std::cout << "I am in PowerOnSelfTest and can't Stop from here" << std::endl;
}

void PowerOnSelfTest::Suspend(EmbeddedSystemX*)
{
	std::cout << "I am in PowerOnSelfTest and can't Suspend from here" << std::endl;
}

void PowerOnSelfTest::Resume(EmbeddedSystemX*)
{
	std::cout << "I am in PowerOnSelfTest and can't Resume from here" << std::endl;
}

void PowerOnSelfTest::chMode(EmbeddedSystemX*)
{
	std::cout << "I am in PowerOnSelfTest and can't chMode from here" << std::endl;
}

void PowerOnSelfTest::ConfigX()
{
	std::cout << "I am in PowerOnSelfTest and can't ConfigX from here" << std::endl;
}

void PowerOnSelfTest::EventX()
{
	std::cout << "I am in PowerOnSelfTest and can't EventX from here" << std::endl;
}

void PowerOnSelfTest::EventY()
{
	std::cout << "I am in PowerOnSelfTest and can't EventY from here" << std::endl;
}

PowerOnSelfTest::PowerOnSelfTest()
{
	std::cout << "I am now in PowerOnSelfTest" << std::endl;
}

void PowerOnSelfTest::restart(EmbeddedSystemX*)
{
	std::cout << "I am in PowerOnSelfTest and  can't Restart from here" << std::endl;
}

void PowerOnSelfTest::SelftestOk(EmbeddedSystemX* t)
{
	std::cout << "Change to Initializing by input SelftestOk" << std::endl;
	ChangeState(t, Initializing::Instance());
}

void PowerOnSelfTest::Initalized(EmbeddedSystemX*)
{
	std::cout << "I am in PowerOnSelfTest and  can't Initalized from here" << std::endl;
}
