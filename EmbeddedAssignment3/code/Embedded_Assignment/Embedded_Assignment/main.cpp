#include "EmbeddedSystemX.h"
#include <iostream>
int main()
{
	void(EmbeddedSystemX:: *ptrs[])() =
	{
	  EmbeddedSystemX::selfTestFailed, EmbeddedSystemX::restart
	};
	EmbeddedSystemX fsm;
	int num;
	while (1)
	{
		std::cout << "Enter 0/1: ";
		std::cin >> num;
		(fsm.*ptrs[num])();
	}
}