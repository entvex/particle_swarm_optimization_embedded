/*
 * CommandChMode.cpp
 *
 *  Created on: 4 Dec 2018
 *      Author: Entvex
 */

#include "CommandChMode.h"

CommandChMode::CommandChMode() {
	// TODO Auto-generated constructor stub

}

CommandChMode::~CommandChMode() {
	// TODO Auto-generated destructor stub
}

void CommandChMode::Execute(){
	_embeddedSystemX->chMode();
}
