#pragma once
#include "ApplyFuncEvents.h"
#include "KeyEvent.h"
#include <vector>

//Class isn't really in full use yet

class EventManager{
public:
	EventManager();
	~EventManager();

	static void RegisterForApplyEvents(void (*functionToCall)());
};

extern EventManager global_EventManager;