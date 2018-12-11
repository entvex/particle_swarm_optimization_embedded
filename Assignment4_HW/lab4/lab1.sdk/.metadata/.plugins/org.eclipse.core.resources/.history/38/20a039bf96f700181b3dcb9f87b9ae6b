/*
 * Empty C++ Application
 */

#include "UserThread.h"
#include "EmbeddedSystemX.h"

int main()
{

	EmbeddedSystemX em;

	em.SelfTestFailed(29);

	UserThread mUserThread(Thread::PRIORITY_NORMAL, "UserControlThread");

	/* Start FreeRTOS, the tasks running. */
	vTaskStartScheduler();

	/* If all is well, the scheduler will now be running, and the following line
	will never be reached.  If the following line does execute, then there was
	insufficient FreeRTOS heap memory available for the idle and/or timer tasks
	to be created.  See the memory management section on the FreeRTOS web site
	for more details. */
	for( ;; );
}
