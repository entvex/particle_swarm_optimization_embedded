/*
 * CommandSimulate.cpp
 *
 *  Created on: 4 Dec 2018
 *      Author: Entvex
 */

#include "CommandSimulate.h"


CommandSimulate::CommandSimulate() {

}

CommandSimulate::~CommandSimulate() {

}

void CommandSimulate::Execute() {
	this->_embeddedSystemX->Simulate();
}

