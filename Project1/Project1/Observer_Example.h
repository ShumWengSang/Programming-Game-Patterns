#pragma once
#include "Example_Base.h"
#include "Achievements.h"
#include "Subject.h"
class Observer_Example :
	public Example_Base
{
private:
	Achievements Achievement_system;
	GameObject go;
	Subject subject;
	bool b_end_example;
public:

	void Start_Example();
	Observer_Example();
	~Observer_Example();
};

