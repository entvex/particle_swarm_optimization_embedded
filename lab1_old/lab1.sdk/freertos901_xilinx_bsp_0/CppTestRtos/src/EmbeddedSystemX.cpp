#include "EmbeddedSystemX.h"
#include "PowerOnSelfTest.h"

void EmbeddedSystemX::change_state(StateEmbeddedSystemX* s) {
	_state = s;
}

void EmbeddedSystemX::Restart()
{
	_state->restart(this);
}

void EmbeddedSystemX::SelfTestFailed(int ErrorNo)
{
	_state->SelfTestFailed(this, ErrorNo);
}

void EmbeddedSystemX::SelftestOk()
{
	_state->SelftestOk(this);
}

void EmbeddedSystemX::Initalized()
{
	_state->Initalized(this);
}

void EmbeddedSystemX::Configure()
{
	_state->Configure(this);
}

void EmbeddedSystemX::ConfigurationEnded()
{
	_state->ConfigurationEnded(this);
}

void EmbeddedSystemX::Start()
{
	_state->Start(this);
}

void EmbeddedSystemX::Stop()
{
	_state->Stop(this);
}

void EmbeddedSystemX::Suspend()
{
	_state->Suspend(this);
}

void EmbeddedSystemX::Resume()
{
	_state->Resume(this);
}

void EmbeddedSystemX::chMode()
{
	_state->chMode(this);
}

void EmbeddedSystemX::ConfigX()
{
	_state->ConfigX();
}

void EmbeddedSystemX::EventX()
{
	_state->EventX();
}

void EmbeddedSystemX::EventY()
{
	_state->EventY();
}

EmbeddedSystemX::EmbeddedSystemX() {
	_state = PowerOnSelfTest::Instance();
}
