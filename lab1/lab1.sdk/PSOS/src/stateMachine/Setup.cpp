/*
 * Setup.cpp
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#include "Setup.h"


Setup::Setup() {

}

Setup::~Setup() {
	// TODO Auto-generated destructor stub
}

void Setup::ActionUp(){
	std::cout << "ActionUp called" << std::endl;
}

void Setup::ActionDown(){
	std::cout << "ActionDown called" << std::endl;
}

void Setup::ActionNext(){
	std::cout << "ActionNext called" << std::endl;
}

void Setup::ActionStart(){
	std::cout << "I am in Setup and can't ActionStart from here" << std::endl;
}

void Setup::GoMaxima(Context* c){
	std::cout << "GoMaxima" << std::endl;
	ChangeState(c, new FindMaxima());
}

void Setup::GoMinima(Context* c){
	std::cout << "GoMinima" << std::endl;
	ChangeState(c, new FindMinima());
}

void Setup::ReturnResult(Context*, double){
	//std::cout << "I am in Setup and can't ReturnResult from here" << std::endl;
}
