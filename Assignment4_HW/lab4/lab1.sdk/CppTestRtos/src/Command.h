/*
 * Command.h
 *
 *  Created on: 3 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_COMMAND_H_
#define SRC_COMMAND_H_

class Command {
public:
	virtual ~Command();
	virtual void Execute() = 0;
protected:
	Command();
};

#endif /* SRC_COMMAND_H_ */
