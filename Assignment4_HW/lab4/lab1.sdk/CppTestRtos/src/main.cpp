/*
 * Empty C++ Application
 */

#include "UserThread.h"
#include "FreeRTOS.h"
#include "os/Thread.h"
#include <iostream>
#include "mainThread.h"
#include "activeObject/ThreadManager.h"

int main()
{
	ThreadManager::Instance();

	mainThread myMainThread = mainThread();
	myMainThread.runThread(Thread::PRIORITY_NORMAL, "mainThread");

	/* Start FreeRTOS, the tasks running. */
	vTaskStartScheduler();


	/* If all is well, the scheduler will now be running, and the following line
	will never be reached.  If the following line does execute, then there was
	insufficient FreeRTOS heap memory available for the idle and/or timer tasks
	to be created.  See the memory management section on the FreeRTOS web site
	for more details. */
	for( ;; );
}