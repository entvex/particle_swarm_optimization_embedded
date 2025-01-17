#include "EmbbededSystemX.h"
#include "PowerOnSelfTest.h"

void embbeded_system_xx::change_state(StateEmbeddedSystemX* s) {
	_state = s;
}

void embbeded_system_xx::restart()
{
	//_state->restart(this);
}

void embbeded_system_xx::SelfTestFailed()
{
	//_state->SelfTestFailed(this, 404);
}

void embbeded_system_xx::SelftestOk()
{
	//_state->SelftestOk(this);
}

void embbeded_system_xx::Initalized()
{
	//_state->Initalized(this);
}

void embbeded_system_xx::Configure()
{
	//_state->Configure(this);
}

void embbeded_system_xx::ConfigurationEnded()
{
	(*_state).ConfigurationEnded(EmbeddedSystemX *);
}

embbeded_system_xx::embbeded_system_xx() {
	_state = PowerOnSelfTest::Instance();
}
