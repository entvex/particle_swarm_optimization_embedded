/*
 * CommandSimulate.h
 *
 *  Created on: 4 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_COMMANDSIMULATE_H_
#define SRC_COMMANDSIMULATE_H_

#include "Command.h"
#include "EmbeddedSystemX.h"

class CommandSimulate: public Command {
public:
	CommandSimulate();
	virtual ~CommandSimulate();
	void Execute();
	EmbeddedSystemX* _embeddedSystemX;
};

#endif /* SRC_COMMANDSIMULATE_H_ */
