#include "RealTimeLoop.h"
#include <iostream>
#include "../Ready.h"
#include "../Suspended.h"

//Singleton
RealTimeLoop* RealTimeLoop::_instance = 0;

RealTimeLoop* RealTimeLoop::Instance()
{
	if (_instance == 0) {
		_instance = new RealTimeLoop();
	}
	std::cout << "Entering RealTimeLoop, Mode1 State" << std::endl;
	//_applicationModeSettingThread.reset();
	return _instance;
}
//Singleton

RealTimeLoop::RealTimeLoop()
{
	_applicationModeSettingThread = ApplicationModeSettingThread();
	_simulateRealTimeStateThread = SimulateRealTimeStateThread();
	_queueScheduler = QueueScheduler();
	_applicationModeSettingThread.run();
	_simulateRealTimeStateThread.run();
	_queueScheduler.run();
}

void RealTimeLoop::Configure(Operational*)
{
	std::cout << "I am in RealTimeLoop and Configure can't be used here" << std::endl;
}

void RealTimeLoop::ConfigurationEnded(Operational*)
{
	std::cout << "I am in RealTimeLoop and ConfigurationEnded can't be used here" << std::endl;
}

void RealTimeLoop::Start(Operational*)
{
	std::cout << "I am in RealTimeLoop and Start can't be used here" << std::endl;
}

void RealTimeLoop::Stop(Operational* operational)
{
	std::cout << "Changing to Ready" << std::endl;
	ChangeState(operational, Ready::Instance());
}

void RealTimeLoop::Suspend(Operational* operational)
{
	std::cout << "Changing to Suspended" << std::endl;
	ChangeState(operational, Suspended::Instance());
}

void RealTimeLoop::Resume(Operational*)
{
	std::cout << "I am in RealTimeLoop and Resume can't be used here" << std::endl;
}

void RealTimeLoop::chMode(Operational*)
{
	_applicationModeSettingThread.chMode();
}

void RealTimeLoop::ConfigX()
{
	std::cout << "I am in RealTimeLoop and ConfigX can't be used here" << std::endl;
}

void RealTimeLoop::EventX()
{
	_applicationModeSettingThread.EventX();
}

void RealTimeLoop::EventY()
{
	_applicationModeSettingThread.EventY();
}

void RealTimeLoop::RunRealTime(Operational*)
{
	_simulateRealTimeStateThread.RunRealTime();
}

void RealTimeLoop::Simulate(Operational*)
{
	_queueScheduler.put("");
}
