/*
 * Setup.h
 *
 *  Created on: 12 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_STATEMACHINE_SETUP_H_
#define SRC_STATEMACHINE_SETUP_H_

#include "Context.h"
#include <iostream>
#include "State.h"

class Setup: public State{
public:
	Setup();
	virtual ~Setup();
};

#endif /* SRC_STATEMACHINE_SETUP_H_ */