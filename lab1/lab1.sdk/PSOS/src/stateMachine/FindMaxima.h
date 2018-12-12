/*
 * FindMaxima.h
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_STATEMACHINE_FINDMAXIMA_H_
#define SRC_STATEMACHINE_FINDMAXIMA_H_

#include "State.h"
#include "Setup.h"
#include "Context.h"
#include <iostream>


class FindMaxima: public State {
public:
	FindMaxima();
	~FindMaxima();

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

#endif /* SRC_STATEMACHINE_FINDMAXIMA_H_ */
