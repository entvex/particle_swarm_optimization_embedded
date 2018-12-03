/*
 * simCount.cpp
 *
 *  Created on: 3 Dec 2018
 *      Author: Entvex
 */

#include "simCount.h"

simCount* simCount::_instance = 0;

simCount* simCount::Instance()
{
	if (_instance == 0) {
		_instance = new simCount();
	}
	return _instance;
}

void simCount::increment()
{
	counter++;
}

int simCount::getCount()
{
	return counter;
}

simCount::simCount()
{
	counter = 0;
}

simCount::~simCount()
{

}
