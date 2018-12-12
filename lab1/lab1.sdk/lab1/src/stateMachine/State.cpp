/*
 * State.cpp
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#include "State.h"

State::State() {
	// TODO Auto-generated constructor stub

}

State::~State() {
	// TODO Auto-generated destructor stub
}

void State::ActionUp(Context*){
	std::cout << "ActionUp" << std::endl;
}

void State::ActionDown(Context*){
	std::cout << "ActionDown" << std::endl;
}

void State::ActionNext(Context*){
	std::cout << "ActionNext" << std::endl;
}

void State::ActionStart(Context*){
	std::cout << "ActionStart" << std::endl;
}

void State::GoMaxima(Contex*){
	std::cout << "merp" << std::endl;
}

void State::GoMinima(Context*){
	std::cout << "merp" << std::endl;
}

void State::ReturnResult(Context*){
	std::cout << "merp" << std::endl;
}

void State::ChangeState(Context* c, State* s) {
	c->change_state(s);
}
