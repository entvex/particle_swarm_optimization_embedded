#pragma once
class embbeded_system_xx;

class StateEmbeddedSystemX {
	public:
		virtual void SelfTestFailed(embbeded_system_xx*, int ErrorNo);
		virtual void restart(embbeded_system_xx*);
		virtual void SelftestOk(embbeded_system_xx*);
	    virtual void Initalized(embbeded_system_xx*);
		virtual void Configure(embbeded_system_xx*);
		virtual void ConfigurationEnded(embbeded_system_xx*);
	protected:
		static void ChangeState(embbeded_system_xx*, StateEmbeddedSystemX*);
	};