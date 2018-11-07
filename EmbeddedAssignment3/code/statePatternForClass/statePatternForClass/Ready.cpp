#include "Ready.h"
#include "Configuration.h"
#include <iostream>


//Singleton
Ready* Ready::_instance = 0;

Ready* Ready::Instance()
{
	if (_instance == 0) {
		_instance = new Ready();
	} return _instance;
}
//Singleton

Ready::Ready()
{
}

void Ready::Configure(Operational* operational)
{
	std::cout << "Changing to Configuration" << std::endl;
	ChangeState(operational, Configuration::Instance());
}

void Ready::ConfigurationEnded(Operational* operational)
{
	std::cout << "I am in Ready and ConfigurationEnded can't be used here" << std::endl;
}
