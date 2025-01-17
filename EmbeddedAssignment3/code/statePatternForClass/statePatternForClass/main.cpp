#include <iostream>
#include "EmbeddedSystemX.h"

int main(int argc, char* argv[])
{
	std::cout << "GoF State!!" << std::endl;

	EmbeddedSystemX embeddedSystem;

	std::cout << "\nCmd 1: SelfTestFailed" << std::endl;
	embeddedSystem.SelfTestFailed(404);

	std::cout << "\nCmd 2: Restart" << std::endl;
	embeddedSystem.Restart();

	std::cout << "\nCmd 3: SelfTestOk" << std::endl;
	embeddedSystem.SelftestOk();

	std::cout << "\nCmd 4: Initialized" << std::endl;
	embeddedSystem.Initalized();

	std::cout << "\nCmd 4.1: Configure" << std::endl;
	embeddedSystem.Configure();
	embeddedSystem.ConfigX();

	std::cout << "\nCmd 4.2: ConfigurationEnded" << std::endl;
	embeddedSystem.ConfigurationEnded();

	std::cout << "\nCmd 4.3: Start" << std::endl;
	embeddedSystem.Start();
	embeddedSystem.EventX();

	std::cout << "\nCmd 4.3.1: chMode" << std::endl;
	embeddedSystem.chMode();
	embeddedSystem.EventX();
	embeddedSystem.EventY();

	std::cout << "\nCmd 4.3.2: chMode" << std::endl;
	embeddedSystem.chMode();
	embeddedSystem.EventX();
	embeddedSystem.EventY();

	std::cout << "\nCmd 4.3.3: chMode" << std::endl;
	embeddedSystem.chMode();
	embeddedSystem.EventX();

	std::cout << "\nCmd 4.4: Suspend" << std::endl;
	embeddedSystem.Suspend();

	std::cout << "\nCmd 4.5: Resume" << std::endl;
	embeddedSystem.Resume();

	std::cout << "\nCmd 5: Restart" << std::endl;
	embeddedSystem.Restart();

	std::cin.get();
}