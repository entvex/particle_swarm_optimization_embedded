/*
 * CommandChMode.h
 *
 *  Created on: 4 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_COMMANDCHMODE_H_
#define SRC_COMMANDCHMODE_H_

#include "Command.h"
#include "EmbeddedSystemX.h"

class CommandChMode: public Command {
public:
	CommandChMode();
	virtual ~CommandChMode();
	void Execute();
	EmbeddedSystemX* _embeddedSystemX;
};

#endif /* SRC_COMMANDCHMODE_H_ */
