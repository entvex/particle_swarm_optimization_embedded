/*
 * ApplicationModeSettingThread.h
 *
 *  Created on: 3 Dec 2018
 *      Author: Entvex
 */

#ifndef SRC_ACTIVEOBJECT_APPLICATIONMODESETTINGTHREAD_H_
#define SRC_ACTIVEOBJECT_APPLICATIONMODESETTINGTHREAD_H_

#include "../os/Mutex.h"
#include "../os/Thread.h"
#include "xgpio.h"

using namespace AbstractOS;

class ApplicationModeSettingThread :public Thread {
public:
	static int simCount;
	ApplicationModeSettingThread();
	virtual void run();

	void chMode();
	void EventX();
	void EventY();

	void reset();

private:
	int _state;
	Mutex _mut;
	bool _newCmd = false;
	int _cmdNum;
};
#endif /* SRC_ACTIVEOBJECT_APPLICATIONMODESETTINGTHREAD_H_ */