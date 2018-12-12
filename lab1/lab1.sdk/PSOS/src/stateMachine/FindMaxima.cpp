/*
 * FindMaxima.cpp
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#include "FindMaxima.h"

FindMaxima::FindMaxima() {
	// TODO Auto-generated constructor stub

}

FindMaxima::~FindMaxima() {
	// TODO Auto-generated destructor stub
}

void FindMaxima::ActionUp(){
	std::cout << "I am in FindMaxima and can't ActionUp from here" << std::endl;
}

void FindMaxima::ActionDown(){
	std::cout << "I am in FindMaxima and can't ActionDown from here" << std::endl;
}

void FindMaxima::ActionNext(){
	std::cout << "I am in FindMaxima and can't ActionNext from here" << std::endl;
}

void FindMaxima::ActionStart(){
	std::cout << "merp" << std::endl;
}

void FindMaxima::GoMaxima(Context*){
	//std::cout << "merp" << std::endl;
}

void FindMaxima::GoMinima(Context*){
	std::cout << "merp" << std::endl;
}

void FindMaxima::ReturnResult(Context* c, double){
	std::cout << "ReturnResult" << std::endl;
	ChangeState(c, new Setup());
}
