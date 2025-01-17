/*
 * Empty C++ Application
 */

/*
 * main.cpp
 *
 *  Created on: 20. July 2018
 *      Author: Kim Bjerge
 */



#include "threads/MainThread.h"

//static XGpioPs psGpioInstancePtr;
//static int iPinNumber = 7; /*Led LD9 on ZedBoard and LD4 on Zybo is connected to MIO pin 7*/

//====================================================

int main (void)
{

	xil_printf("MMMMAAAIINNNS\n");
	MainThread tMainThread(Thread::PRIORITY_NORMAL, "MainThread");

	/* Start FreeRTOS, the tasks running. */
	vTaskStartScheduler();
}

/*#include "UserThread.h"

int main()
{

	UserThread mUserThread(Thread::PRIORITY_NORMAL, "UserControlThread");


	vTaskStartScheduler();


	for( ;; );
}*/
