#include <iostream>
#include "EmbbededSystemX.h"

int main(int argc, char* argv[])
{
	std::cout << "GoF State!!" << std::endl;

	embbeded_system_xx embbeded_system_xx;
	std::cout << "Cmd 1" << std::endl;
	embbeded_system_xx.SelfTestFailed();
	std::cout << "Cmd 2" << std::endl;
	embbeded_system_xx.restart();
	std::cout << "Cmd 3" << std::endl;
	embbeded_system_xx.SelftestOk();
	std::cout << "Cmd 4" << std::endl;
	embbeded_system_xx.Initalized();
	std::cout << "Handle nested states" << std::endl;


	std::cout << "end nested states" << std::endl;
	std::cout << "Cmd 5" << std::endl;
	embbeded_system_xx.restart();
	getchar();
}