/*
 * State.h
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_STATEMACHINE_STATE_H_
#define SRC_STATEMACHINE_STATE_H_


#include <iostream>

class Context;

class State {
public:
	State();
	~State();
	//Transitions
	virtual void GoMaxima(Context*);
	virtual void GoMinima(Context*);
	virtual void ReturnResult(Context*, double);

	//Actions
	virtual void ActionUp();
	virtual void ActionDown();
	virtual void ActionNext();
	virtual void ActionStart();


protected:
	static void ChangeState(Context*, State*);
};

#endif /* SRC_STATEMACHINE_STATE_H_ */
