/*
 * ResumeCommand.cpp
 *
 *  Created on: 4 Dec 2018
 *      Author: Entvex
 */

#include "ResumeCommand.h"

ResumeCommand::ResumeCommand() {
	// TODO Auto-generated constructor stub

}

ResumeCommand::~ResumeCommand() {
	// TODO Auto-generated destructor stub
}

void ResumeCommand::Execute() {
	this->embeddedSystemX->Resume();
}

