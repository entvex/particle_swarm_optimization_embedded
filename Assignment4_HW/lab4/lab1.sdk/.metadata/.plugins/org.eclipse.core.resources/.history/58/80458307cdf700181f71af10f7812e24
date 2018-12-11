/*
 * ThreadManager.cpp
 *
 *  Created on: 4 Dec 2018
 *      Author: Entvex
 */

#include "ThreadManager.h"

ThreadManager::ThreadManager() {
	_applicationModeSettingThread = ApplicationModeSettingThread();
	_simulateRealTimeStateThread = SimulateRealTimeStateThread();
	_queueScheduler = QueueScheduler();
	_simulation = SimulationThread();
}

ThreadManager::~ThreadManager() {
	// TODO Auto-generated destructor stub
}

ThreadManager* ThreadManager::_instance = 0;

ThreadManager* ThreadManager::Instance()
{
	if (_instance == 0) {
		_instance = new ThreadManager();
	}
	return _instance;
}
