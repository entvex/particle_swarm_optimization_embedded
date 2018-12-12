/*
 * MainThread.h
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_MAINTHREAD_H_
#define SRC_MAINTHREAD_H_

#include "xparameters.h"
#include "xgpio.h"

#include "Thread.h"
#include "../stateMachine/Context.h"
using namespace AbstractOS;

class MainThread : public Thread
{
public:
	MainThread(ThreadPriority pri, string name) :
		 Thread(pri, name)
	 {

	 }
	void run();

private:

	void buttonCommand(Context*, u32);
	Context* _context;
};

#endif /* SRC_MAINTHREAD_H_ */
