/*
 * ResumeCommand.h
 *
 *  Created on: 4 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_RESUMECOMMAND_H_
#define SRC_RESUMECOMMAND_H_

#include "Command.h"
#include "EmbeddedSystemX.h"

class ResumeCommand: public Command {
public:
	ResumeCommand();
	virtual ~ResumeCommand();
	void Execute();
	EmbeddedSystemX* embeddedSystemX;
};

#endif /* SRC_RESUMECOMMAND_H_ */