/*
 * CommandEventY.h
 *
 *  Created on: 4 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_COMMANDEVENTY_H_
#define SRC_COMMANDEVENTY_H_

#include "Command.h"
#include "EmbeddedSystemX.h"

class CommandEventY: public Command {
public:
	CommandEventY();
	virtual ~CommandEventY();
	void Execute();
	EmbeddedSystemX* _embeddedSystemX;
};

#endif /* SRC_COMMANDEVENTY_H_ */