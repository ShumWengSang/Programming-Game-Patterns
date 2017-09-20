#pragma once
#include "Command.h"

/////////////////////////////////////////////
//			H FILE FOR ALL COMMANDS        //
//										   //
/////////////////////////////////////////////

class Jump_Command : public Command
{
private:
	void jump(GameObject& obj)
	{ 
		cout << "Player " << obj.GetName() << " jumps!" << endl;
	};
public:
	Jump_Command() {};
	~Jump_Command() {};

	void execute(GameObject& obj)
	{
		jump(obj);
	}
};


class Attack_Command : public Command
{
private:
	void attack(GameObject& obj)
	{
		cout << "Player " << obj.GetName() << " attacks your enemy!" << endl;
	};
public:
	Attack_Command() {};
	~Attack_Command() {};
	
	void execute(GameObject& obj)
	{
		attack(obj);
	}
};

class SpecialAttack_Command :public Command
{
private:
	void specialattack(GameObject& obj)
	{
		cout << "Player " << obj.GetName() << " HADOUKEENs your enemy!" << endl;
	};
public:
	SpecialAttack_Command() {};
	~SpecialAttack_Command() {};

	void execute(GameObject& obj)
	{
		specialattack(obj);
	}
};

class Runaway_Command : public Command
{
private:
	void run(GameObject& obj)
	{
		cout << "Player " << obj.GetName() << " runs for his life!" << endl;
	};
public:
	Runaway_Command() {};
	~Runaway_Command() {};

	void execute(GameObject& obj)
	{
		run(obj);
	}
};
