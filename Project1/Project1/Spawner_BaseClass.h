#pragma once
#include "Monster.h"

//Main problems : Contrived problem. What type of cloning?
//NOT RECOMMENDED FOR USE

class Spawner_BaseClass
{
public:
	Spawner_BaseClass(Monster * _prototype) : Prototype(_prototype) {}
	~Spawner_BaseClass()
	{
		if (Prototype != NULL)
			delete Prototype;
	}
	Monster * spawnMonster()
	{
		return Prototype->clone();
	}
private:
	Monster * Prototype;
};