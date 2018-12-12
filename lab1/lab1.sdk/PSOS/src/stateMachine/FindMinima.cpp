/*
 * FindMinima.cpp
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#include "FindMinima.h"

FindMinima::FindMinima(){

}

FindMinima::~FindMinima(){

}

void FindMinima::ActionUp(){
	std::cout << "I am in FindMinima and can't ActionUp from here" << std::endl;
}

void FindMinima::ActionDown(){
	std::cout << "I am in FindMinima and can't ActionDown from here" << std::endl;
}

void FindMinima::ActionNext(){
	std::cout << "I am in FindMinima and can't ActionNext from here" << std::endl;
}

void FindMinima::ActionStart(){
	std::cout << "merp" << std::endl;
}

void FindMinima::GoMaxima(Context*){
	std::cout << "merp" << std::endl;
}

void FindMinima::GoMinima(Context*){
	//std::cout << "merp" << std::endl;
}

void FindMinima::ReturnResult(Context* c, double){
	std::cout << "ReturnResult" << std::endl;
	ChangeState(c, new Setup());
}
