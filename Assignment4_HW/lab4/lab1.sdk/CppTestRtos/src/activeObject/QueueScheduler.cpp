/*
 * QueueScheduler.cpp
 *
 *  Created on: 3 Dec 2018
 *      Author: Entvex
 */

#include "QueueScheduler.h"
#include "ThreadManager.h"
#include <iostream>

QueueScheduler::QueueScheduler() : Thread()
{
	my_mut = Mutex("QueueScheduler");
}

QueueScheduler::~QueueScheduler() {

}

void QueueScheduler::run()
{
	if(!sim_queue.empty())
	{
		take();
		ThreadManager::Instance()->_simulation.runThread(Thread::PRIORITY_LOW, "SimulationThread");
	}
}

void QueueScheduler::put(std::string s)
{
	my_mut.Acquire();
	sim_queue.push(s);
	my_mut.Release();
	this->run();
}

std::string QueueScheduler::take()
{
	my_mut.Acquire();
	std::string sim = sim_queue.front();
	sim_queue.pop();
	my_mut.Release();
	return sim;
}

