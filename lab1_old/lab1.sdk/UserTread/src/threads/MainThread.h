/*
 * MainThread.h
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_MAINTHREAD_H_
#define SRC_MAINTHREAD_H_

#include "Thread.h"

#include "../../../../../Assignment4_HW/lab4/lab1.sdk/CppTestRtos/src/stateMachine/Context.h"
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
	Context* _context;
};

#endif /* SRC_MAINTHREAD_H_ */
