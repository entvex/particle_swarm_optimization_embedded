/*
 * Context.cpp
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#include "Context.h"

Context::Context() {
	//_state = new Settings;
}

Context::~Context() {

}

void Context::change_state(State* s) {
	_state = s;
}

void Context::ActionDown(){
	_state->ActionDown(this);
}

void Context::ActionNext(){
	_state->ActionNext(this);
}

void Context::ActionStart(){
	_state->ActionStart(this);
}

void Context::ActionUp(){
	_state->ActionUp(this);
}

void Context::GoMaxima(){
	_state->GoMaxima(this);
}

void Context::GoMinima(){
	_state->GoMinima(this);
}

void Context::ReturnResult(){
	_state->ReturnResult(this);
}