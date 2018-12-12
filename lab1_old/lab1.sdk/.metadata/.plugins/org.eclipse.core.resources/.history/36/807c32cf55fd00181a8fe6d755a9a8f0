/*
 * Context.h
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_STATEMACHINE_CONTEXT_H_
#define SRC_STATEMACHINE_CONTEXT_H_

#include "State.h"

class Context {
public:
	Context();
	virtual ~Context();

	//Transitions
	virtual void GoMaxima();
	virtual void GoMinima();
	virtual void ReturnResult();

	//Actions
	virtual void ActionUp();
	virtual void ActionDown();
	virtual void ActionNext();
	virtual void ActionStart();

private:
	void runStartCommand();
	friend class State;
	void change_state(Context*);

	State* _state;
};

#endif /* SRC_STATEMACHINE_CONTEXT_H_ */
