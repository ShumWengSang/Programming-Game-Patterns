#pragma once
#include "Monster.h"
typedef Monster * (*SpawnCallBack)();
class Spawner_Function_Prototypes
{
public:
	Spawner_Function_Prototypes(SpawnCallBack spawn_function_s) : spawn_function(spawn_function_s) {}
	~Spawner_Function_Prototypes()
	{

	}
	Monster * spawnMonster()
	{
		return spawn_function();
	}
private:
	SpawnCallBack spawn_function;
};