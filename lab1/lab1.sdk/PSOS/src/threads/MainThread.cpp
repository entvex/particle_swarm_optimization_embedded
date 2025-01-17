/*
 * MainThread.cpp
 *
 *  Created on: 11 Dec 2018
 *      Author: Entvex
 */

#include "MainThread.h"

void MainThread::run()
{
	xil_printf("Welcome to Particle Swarm Optimization Embedded \r\n");

	XGpio dip, push;
	int i, psb_check, dip_check;
	int value, skip, Status;
	int timer_state = 0;
	int red_led_counter = 0;

	XGpio_Initialize(&dip, XPAR_SWITCHES_DEVICE_ID);
	XGpio_SetDataDirection(&dip, 1, 0xffffffff);

	XGpio_Initialize(&push, XPAR_BUTTONS_DEVICE_ID);
	XGpio_SetDataDirection(&push, 1, 0xffffffff);




	xil_printf("Use the switches to control the menu \r\n");

	_context = new Context;


	while (true){

		//dip_check = XGpio_DiscreteRead(&dip, 1);
		switch (XGpio_DiscreteRead(&dip, 1)) {
			case 0:
				_context->ReturnResult(10);
				buttonCommand(_context, XGpio_DiscreteRead(&push, 1));
				break;
			case 1:
				_context->GoMinima();
				buttonCommand(_context, XGpio_DiscreteRead(&push, 1));
				break;
			case 2:
				_context->GoMaxima();
				buttonCommand(_context, XGpio_DiscreteRead(&push, 1));
				break;
			default:
				break;
		}
		//psb_check = XGpio_DiscreteRead(&push, 1);
		//xil_printf("Push Buttons Status %x\r\n", psb_check);

		//xil_printf("DIP Switches Status %x\r\n", dip_check);

		for (i = 0; i < 9999999; ++i);
	}

}


void MainThread::buttonCommand(Context* cont, u32 button){
	switch (button) {
		case 1:
			cont->ActionStart();
			break;

		case 2:
			cont->ActionNext();
			break;

		case 4:
			cont->ActionDown();
			break;

		case 8:
			cont->ActionUp();
			break;

		default:
			break;
	}
}
