/*
 * State.h
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_STATEMACHINE_STATE_H_
#define SRC_STATEMACHINE_STATE_H_

#include "Context.h"
#include <iostream>
class Context;

class State {
public:
	State();

	//Transitions
	virtual void GoMaxima(Context*);
	virtual void GoMinima(Context*);
	virtual void ReturnResult(Context*);

	//Actions
	virtual void ActionUp(Context*);
	virtual void ActionDown(Context*);
	virtual void ActionNext(Context*);
	virtual void ActionStart(Context*);
	virtual ~State();
protected:
	static void ChangeState(Context*, State*);
};

#endif /* SRC_STATEMACHINE_STATE_H_ */
