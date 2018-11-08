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
	std::cout << "Handle nested states" << std::endl;
	embeddedSystem.Configure();

	std::cout << "\nCmd 4.2: ConfigurationEnded" << std::endl;
	embeddedSystem.ConfigurationEnded();

	std::cout << "\nCmd 5: Restart" << std::endl;
	std::cout << "end nested states" << std::endl;
	embeddedSystem.Restart();

	getchar();
}