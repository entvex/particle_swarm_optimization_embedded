/*
 * mainThread.cpp
 *
 *  Created on: 4 Dec 2018
 *      Author: Entvex
 */

#include "mainThread.h"
#include "EmbeddedSystemX.h"
#include <iostream>
#include "StartCommand.h"
#include "ResumeCommand.h"
#include "CommandEventY.h"
#include "CommandEventX.h"
#include "CommandSimulate.h"

#define TIMSZ 100

mainThread::mainThread() {
	// TODO Auto-generated constructor stub

}

mainThread::~mainThread() {
	// TODO Auto-generated destructor stub
}

void mainThread::run() {
	printf("EmbeddedSystemX!!!\n");
	EmbeddedSystemX embeddedSystem;

	std::cout << "\nCmd 1: SelfTestFailed" << std::endl;
	embeddedSystem.SelfTestFailed(404);

	std::cout << "\nCmd 2: Restart" << std::endl;
	embeddedSystem.Restart();

	std::cout << "\nCmd 3: SelfTestOk" << std::endl;
	embeddedSystem.SelftestOk();

	std::cout << "\nCmd 4: Initialized" << std::endl;
	embeddedSystem.Initalized();

	std::cout << "\nCmd 4.1: Configure" << std::endl;
	embeddedSystem.Configure();
	embeddedSystem.ConfigX();

	std::cout << "\nCmd 4.2: ConfigurationEnded" << std::endl;
	embeddedSystem.ConfigurationEnded();

	std::cout << "\nCmd 4.3: Start" << std::endl;
	//embeddedSystem.Start();

	StartCommand startCommand = StartCommand();
	startCommand._embeddedSystemX = &embeddedSystem;
	startCommand.Execute();

	CommandEventX commandEventX = CommandEventX();
	commandEventX._embeddedSystemX = &embeddedSystem;
	commandEventX.Execute();


	std::cout << "\nCmd 4.3.1: chMode" << std::endl;
	embeddedSystem.chMode();

	commandEventX.Execute();

	CommandSimulate commandSimulate = CommandSimulate();
	commandSimulate._embeddedSystemX = &embeddedSystem;
	commandSimulate.Execute();

	CommandEventY commandEventY = CommandEventY();
	commandEventY._embeddedSystemX = &embeddedSystem;
	commandEventY.Execute();

	commandSimulate.Execute();

	std::cout << "\nCmd 4.3.2: chMode" << std::endl;
	embeddedSystem.chMode();
	commandEventX.Execute();
	commandSimulate.Execute();
	commandEventY.Execute();
	commandSimulate.Execute();

	std::cout << "\nCmd 4.3.3: chMode" << std::endl;
	embeddedSystem.chMode();
	commandEventX.Execute();
	embeddedSystem.Simulate();

	std::cout << "\nCmd 4.4: Suspend" << std::endl;
	embeddedSystem.Suspend();

	std::cout << "\nCmd 4.5: Resume" << std::endl;
	ResumeCommand resumeCommand = ResumeCommand();
	resumeCommand.embeddedSystemX = &embeddedSystem;
	resumeCommand.Execute();

	std::cout << "\nCmd 5: Restart" << std::endl;
	embeddedSystem.Restart();
}

