/*
 * mainThread.h
 *
 *  Created on: 4 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_MAINTHREAD_H_
#define SRC_MAINTHREAD_H_

#include <Thread.h>

class mainThread: public AbstractOS::Thread {
public:
	mainThread();
	virtual ~mainThread();

	void run();
};

#endif /* SRC_MAINTHREAD_H_ */