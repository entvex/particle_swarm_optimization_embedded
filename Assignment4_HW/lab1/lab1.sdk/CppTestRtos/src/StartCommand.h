/*
 * StartCommand.h
 *
 *  Created on: 3 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_STARTCOMMAND_H_
#define SRC_STARTCOMMAND_H_

#include "Command.h"
#include "EmbeddedSystemX.h"

class StartCommand: public Command {
public:
	StartCommand();
	virtual ~StartCommand();
	void Execute();
	EmbeddedSystemX* _embeddedSystemX;
};

#endif /* SRC_STARTCOMMAND_H_ */
