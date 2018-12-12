#pragma once
class EmbeddedSystemX;

class StateEmbeddedSystemX {
	public:
		virtual void SelfTestFailed(EmbeddedSystemX*, int ErrorNo);
		virtual void restart(EmbeddedSystemX*);
		virtual void SelftestOk(EmbeddedSystemX*);
	    virtual void Initalized(EmbeddedSystemX*);
		virtual void Configure(EmbeddedSystemX*);
		virtual void ConfigurationEnded(EmbeddedSystemX*);
		virtual void Start(EmbeddedSystemX*);
		virtual void Stop(EmbeddedSystemX*);
		virtual void Suspend(EmbeddedSystemX*);
		virtual void Resume(EmbeddedSystemX*);
		virtual void chMode(EmbeddedSystemX*);
		virtual void ConfigX();
		virtual void EventX();
		virtual void EventY();
	protected:
		static void ChangeState(EmbeddedSystemX*, StateEmbeddedSystemX*);
	};