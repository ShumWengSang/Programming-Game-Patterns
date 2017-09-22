#pragma once
#include "GameObject.h"
#include "Events.h"

class Observer
{
public:
	virtual ~Observer();
	virtual void OnNotify(const GameObject& go, Event var_event) = 0;
};

