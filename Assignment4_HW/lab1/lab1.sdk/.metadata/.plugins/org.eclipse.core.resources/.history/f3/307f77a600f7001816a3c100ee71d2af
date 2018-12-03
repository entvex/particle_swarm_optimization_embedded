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
	}
	_instance->_state = Ready::Instance();
	std::cout << "Entering Operational, Ready State" << std::endl;
	return _instance;
}
//Singleton

Operational::Operational()
{
}

void Operational::SelfTestFailed(EmbeddedSystemX*, int ErrorNo)
{
	std::cout << "I am in Operational and SelfTestFailed can't be used here" << std::endl;
}

void Operational::restart(EmbeddedSystemX* t)
{
	std::cout << "Change to PowerOnSelfTest by input Restart" << std::endl;
	ChangeState(t, PowerOnSelfTest::Instance());
}

void Operational::SelftestOk(EmbeddedSystemX*)
{
	std::cout << "I am in Operational and SelftestOk can't be used here" << std::endl;
}

void Operational::Initalized(EmbeddedSystemX*)
{
	std::cout << "I am in Operational and Initalized can't be used here" << std::endl;
}

void Operational::Configure(EmbeddedSystemX*)
{
	_state->Configure(this);
}

void Operational::ConfigurationEnded(EmbeddedSystemX*)
{
	_state->ConfigurationEnded(this);
}

void Operational::Start(EmbeddedSystemX*)
{
	_state->Start(this);
}

void Operational::Stop(EmbeddedSystemX*)
{
	_state->Stop(this);
}

void Operational::Suspend(EmbeddedSystemX*)
{
	_state->Suspend(this);
}

void Operational::Resume(EmbeddedSystemX*)
{
	_state->Resume(this);
}

void Operational::chMode(EmbeddedSystemX*)
{
	_state->chMode(this);
}

void Operational::ConfigX()
{
	_state->ConfigX();
}

void Operational::EventX()
{
	_state->EventX();
}

void Operational::EventY()
{
	_state->EventY();
}

void Operational::change_state(OperatingState* operatingState)
{
	_state = operatingState;
}

void Operational::RunRealTime(EmbeddedSystemX*)
{
	_state->RunRealTime(this);
}

void Operational::Simulate(EmbeddedSystemX*)
{
	_state->Simulate(this);
}
