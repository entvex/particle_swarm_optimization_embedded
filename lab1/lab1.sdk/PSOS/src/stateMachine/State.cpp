/*
 * State.cpp
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#include "State.h"
#include "Context.h"

State::State() {
	// TODO Auto-generated constructor stub

}

State::~State() {
	// TODO Auto-generated destructor stub
}

void State::ActionUp(){
}

void State::ActionDown(){
}

void State::ActionNext(){
}

void State::ActionStart(){
}

void State::GoMaxima(Context*){
}

void State::GoMinima(Context*){
}

void State::ReturnResult(Context*, double){
}

void State::ChangeState(Context* c, State* s) {
	c->change_state(s);
}
