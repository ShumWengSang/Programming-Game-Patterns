#pragma once
#include "Monster.h"
class Spawner
{
public:
	~Spawner() {}
	virtual Monster *  spawnMonster() = 0;
};

template <class T>
class SpawnerFor : public Spawner
{
public:
	virtual Monster * spawnMonster()
	{
		return new T(5, 10);
	}
};
