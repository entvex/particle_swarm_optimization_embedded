/*
 * CommandEventX.h
 *
 *  Created on: 4 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_COMMANDEVENTX_H_
#define SRC_COMMANDEVENTX_H_

#include "Command.h"
#include "EmbeddedSystemX.h"

class CommandEventX: public Command {
public:
	CommandEventX();
	virtual ~CommandEventX();
	void Execute();
	EmbeddedSystemX* _embeddedSystemX;
};

#endif /* SRC_COMMANDEVENTX_H_ */