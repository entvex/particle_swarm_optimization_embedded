/*
 * Setup.h
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_STATEMACHINE_SETUP_H_
#define SRC_STATEMACHINE_SETUP_H_

#include "State.h"
#include "Context.h"
#include "FindMaxima.h"
#include "FindMinima.h"
#include <iostream>

class Context;

class Setup : public State{
public:
	Setup();
	~Setup();

	//Transitions
	void GoMaxima(Context*) override;
	void GoMinima(Context*) override;
	void ReturnResult(Context*, double) override;

	//Actions
	void ActionUp() override;
	void ActionDown() override;
	void ActionNext() override;
	void ActionStart() override;
};

#endif /* SRC_STATEMACHINE_SETUP_H_ */
