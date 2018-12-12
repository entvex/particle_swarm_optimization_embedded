/*
 * MainThread.cpp
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#include "MainThread.h"

void MainThread::run()
{
	printf("Welcome to Particle Swarm Optimization Embedded \r\n");
	printf("Use the switches to control the menu \r\n");

	_context = new Context;

	_context->ActionUp();
	_context->ActionDown();
	_context->ActionNext();

}
