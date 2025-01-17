#include "FreeRTOS.h"
#include "os/Thread.h"
#include <iostream>
#include "threads/mainThread.h"

int main()
{

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
