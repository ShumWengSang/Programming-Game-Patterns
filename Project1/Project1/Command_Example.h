#pragma once
#include "Example_Base.h"
#include "commands.h"

/////////////////////////////////////////////
//
//             COMMAND PATTERN
//    http://gameprogrammingpatterns.com/command.html
//        Reified Callbacks
//
//////////////////////////////////////////////

class Command_Example : Example_Base
{
private:
	Command * One;
	Command * Two;
	Command * Three;
	Command * Four;

	Command * handleInput();

	GameObject Actor;

	bool Stop_Program;
public:
	Command_Example();
	~Command_Example();

	void Start_Example();
};

