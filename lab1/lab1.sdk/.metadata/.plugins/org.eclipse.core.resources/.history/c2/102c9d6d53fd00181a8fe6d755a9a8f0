/*
 * FindMaxima.h
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_STATEMACHINE_FINDMAXIMA_H_
#define SRC_STATEMACHINE_FINDMAXIMA_H_

#include "State.h"

class FindMaxima: public State {
public:
	FindMaxima();
	virtual ~FindMaxima();

	//Transitions
	void GoMaxima(Context*) override;
	void GoMinima(Context*) override;
	void ReturnResult(Context*) override;

	//Actions
	void ActionUp(Context*) override;
	void ActionDown(Context*) override;
	void ActionNext(Context*) override;
	void ActionStart(Context*) override;
};

#endif /* SRC_STATEMACHINE_FINDMAXIMA_H_ */
