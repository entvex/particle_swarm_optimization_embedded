/*
 * Command.h
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_COMMANDS_COMMAND_H_
#define SRC_COMMANDS_COMMAND_H_

class Command {
public:
	Command();
	virtual void Execute() = 0;
	virtual ~Command();
};

#endif /* SRC_COMMANDS_COMMAND_H_ */
