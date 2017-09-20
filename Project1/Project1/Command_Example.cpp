#include "Command_Example.h"

Command_Example::Command_Example()
{
	One = new Attack_Command();
	Two = new Jump_Command();
	Three = new SpecialAttack_Command();
	Four = new Runaway_Command();
}


Command_Example::~Command_Example()
{
	delete One;
	delete Two;
	delete Three;
	delete Four;
}

void Command_Example::Start_Example()
{
	cout << "Beginning Command pattern example" << endl;
	Stop_Program = false;
	while (!Stop_Program) {

		cout << endl;
		cout << "You have four options." << endl;
		cout << "1. Attack" << endl;
		cout << "2. Jump" << endl;
		cout << "3. Special Attack" << endl;
		cout << "4. Run Away" << endl;
		cout << "5. End Example" << endl;

		Command * command = handleInput();
		if (command != NULL)
		{
			command->execute(Actor);
		}
	}
	cout << endl;
}

Command* Command_Example::handleInput()
{
	int CommandInt = 0;
	cin >> CommandInt;
	switch (CommandInt)
	{
	case 1:
		return One;
		break;
	case 2:
		return Two;
		break;
	case 3:
		return Three;
		break;
	case 4:
		return Four;
		break;
	case 5:
		Stop_Program = true;
	default:
		return NULL;
		break;
	}
}