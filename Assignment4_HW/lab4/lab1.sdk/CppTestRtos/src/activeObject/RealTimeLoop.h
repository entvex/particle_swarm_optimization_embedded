#pragma once
#include "../OperatingState.h"
#include "../os/Thread.h"
#include "ApplicationModeSettingThread.h"
#include "SimulateRealTimeStateThread.h"
#include "QueueScheduler.h"
//class ApplicationModeSetting;
//class SimulateRealTimeState;
class RealTimeLoopState;

using namespace AbstractOS;

class RealTimeLoop : public OperatingState
{
private: 
	RealTimeLoop();
	static RealTimeLoop* _instance;
public:
	static RealTimeLoop* Instance();
	void Configure(Operational*) override;
	void ConfigurationEnded(Operational*) override;
	void Start(Operational*) override;
	void Stop(Operational*) override;
	void Suspend(Operational*) override;
	void Resume(Operational*) override;
	void chMode(Operational*) override;
	void ConfigX() override;
	void EventX() override;
	void EventY() override;
	void RunRealTime(Operational*) override;
	void Simulate(Operational*) override;



protected:
	friend class RealTimeLoopState;
	friend class ApplicationModeSetting;
	friend class SimulateRealTimeState;
	ApplicationModeSettingThread _applicationModeSettingThread;
	SimulateRealTimeStateThread _simulateRealTimeStateThread;
	QueueScheduler _queueScheduler;
	RealTimeLoopState* _state;
};
