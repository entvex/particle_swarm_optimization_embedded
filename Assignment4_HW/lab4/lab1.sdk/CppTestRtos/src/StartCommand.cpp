/*
 * StartCommand.cpp
 *
 *  Created on: 3 Dec 2018
 *      Author: Entvex
 */

#include "StartCommand.h"

StartCommand::StartCommand() {

}

StartCommand::~StartCommand() {

}

void StartCommand::Execute() {
	this->_embeddedSystemX->Start();
}
