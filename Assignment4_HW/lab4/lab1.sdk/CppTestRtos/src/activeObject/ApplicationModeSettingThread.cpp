/*
 * ApplicationModeSettingThread.cpp
 *
 *  Created on: 3 Dec 2018
 *      Author: Entvex
 */
#include <iostream>
#include "ApplicationModeSettingThread.h"
#include "simCount.h"

ApplicationModeSettingThread::ApplicationModeSettingThread() : Thread()
{
	_mut = Mutex("AppMutex");
	_state = 1;
}

void ApplicationModeSettingThread::run()
{
		if(_newCmd)
		{
			_mut.Acquire();
			switch (_cmdNum) {
				case 1:
					std::cout << "ApplicationModeSettingThread:: run CASE 1" << std::endl;
					break;
				case 2:
					switch (_state) {
						case 1: // EventX happens
							//printf("EventX happened from Mode1\n");
							std::cout << "EventX happened from Mode1" << std::endl;
							break;
						case 2: // EventX happens
							//printf("EventX happened from Mode2\n");
							std::cout << "EventX happened from Mode2" << std::endl;
							break;
						case 3: // EventX happens
							//printf("EventX happened from Mode3\n");
							std::cout << "EventX happened from Mode3" << std::endl;
							break;
						default:

							break;
					}
					break;
				case 3:
					switch (_state) {
						case 1: // Nothing shall happen
							std::cout << "EventY called, but can't run from Mode1" << std::endl;
							break;
						case 2: // EventY happens
							std::cout << "EventY happens from Mode2" << std::endl;
							break;
						case 3: // Nothing shall happen
							std::cout << "EventY called, but can't run from Mode3" << std::endl;
							break;
						default:

							break;
					}
					break;
				default:

					break;
			}
			_newCmd = false;
			_mut.Release();
		}
}

void ApplicationModeSettingThread::chMode()
{
	_mut.Acquire();

	switch (_state) {
		case 1:
			_state = 2;
			break;
		case 2:
			_state = 3;
			break;
		case 3:
			_state = 1;
			break;
		default:
			_state = 1;
			break;
	}
	_cmdNum = 1;
	_mut.Release();
}

void ApplicationModeSettingThread::EventX()
{
	_mut.Acquire();
	_cmdNum = 2;
	_newCmd = true;
	_mut.Release();
	this->run();
}

void ApplicationModeSettingThread::EventY()
{
	_mut.Acquire();
	_cmdNum = 3;
	_newCmd = true;
	_mut.Release();
	this->run();
}

void ApplicationModeSettingThread::reset()
{
	_mut.Acquire();
	_state = 1;
	_newCmd = true;
	_mut.Release();
	this->run();
}