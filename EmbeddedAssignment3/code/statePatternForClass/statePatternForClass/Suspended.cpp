#include "Suspended.h"


//Singleton
Suspended* Suspended::_instance = 0;

Suspended* Suspended::Instance()
{
	if (_instance == 0) {
		_instance = new Suspended();
	} return _instance;
}
//Singleton

Suspended::Suspended()
{
}


void Suspended::Configure(Operational*)
{
}

void Suspended::ConfigurationEnded(Operational*)
{
}

void Suspended::Start(Operational*)
{
}

void Suspended::Stop(Operational*)
{
}

void Suspended::Suspend(Operational*)
{
}

void Suspended::Resume(Operational*)
{
}

void Suspended::chMode(Operational*)
{
}

void Suspended::ConfigX()
{
}

void Suspended::EventX()
{
}

void Suspended::EventY()
{
}



