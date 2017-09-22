#pragma once
#include "Example_Base.h"
#include "Achievements.h"
class Observer_Example :
	public Example_Base
{
private:
	Achievements Achievement_system;

public:

	void Start_Example();
	Observer_Example();
	~Observer_Example();
};

