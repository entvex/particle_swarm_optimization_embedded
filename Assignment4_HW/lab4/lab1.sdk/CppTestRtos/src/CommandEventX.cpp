/*
 * CommandEventX.cpp
 *
 *  Created on: 4 Dec 2018
 *      Author: Entvex
 */

#include "CommandEventX.h"

CommandEventX::CommandEventX() {
	// TODO Auto-generated constructor stub

}

CommandEventX::~CommandEventX() {
	// TODO Auto-generated destructor stub
}

void CommandEventX::Execute(){
	_embeddedSystemX->EventX();
}