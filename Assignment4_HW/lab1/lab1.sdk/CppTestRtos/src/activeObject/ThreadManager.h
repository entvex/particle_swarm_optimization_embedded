/*
 * ThreadManager.h
 *
 *  Created on: 4 Dec 2018
 *      Author: Entvex
 */


#ifndef SRC_ACTIVEOBJECT_THREADMANAGER_H_
#define SRC_ACTIVEOBJECT_THREADMANAGER_H_

#include "SimulationThread.h"
#include "ApplicationModeSettingThread.h"
#include "QueueScheduler.h"
#include "SimulateRealTimeStateThread.h"

class ThreadManager {
public:
	static ThreadManager* Instance();
	virtual ~ThreadManager();
	ApplicationModeSettingThread _applicationModeSettingThread;
	SimulateRealTimeStateThread _simulateRealTimeStateThread;
	QueueScheduler _queueScheduler;
	SimulationThread _simulation;
private:
	ThreadManager();
	static ThreadManager* _instance;
};

#endif /* SRC_ACTIVEOBJECT_THREADMANAGER_H_ */
