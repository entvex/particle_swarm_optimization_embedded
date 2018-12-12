/*
 * Context.cpp
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#include "Context.h"

Context::Context() {
	_state = new Setup();
}

Context::~Context() {

}

void Context::change_state(State* c) {
	_state = c;
}

void Context::ActionDown(){
	_state->ActionDown();
}

void Context::ActionNext(){
	_state->ActionNext();
}

void Context::ActionStart(){
	_state->ActionStart();
}

void Context::ActionUp(){
	_state->ActionUp();
}

void Context::GoMaxima(){
	_state->GoMaxima(this);
}

void Context::GoMinima(){
	_state->GoMinima(this);
}

void Context::ReturnResult(double result){
	_state->ReturnResult(this, result);
}
