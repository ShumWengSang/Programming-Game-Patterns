#pragma once
#include "Example_Base.h"
#include "Spawner_BaseClass.h"
#include"Spawner_FunctionPrototype.h"
#include "Spawner_Templated.h"
#include "Monsters.h"



class Prototype_Example :
	public Example_Base
{
private:
	//Prototype spawners
	Spawner_BaseClass * TigerSpawner;

	//Function callback spawners
	Spawner_Function_Prototypes * GhostSpawnerPrototype;
	Spawner_Function_Prototypes * TigerSpawnerPrototype;

	//Templated Spawner
	Spawner * ghostSpawner;
	Spawner * ghost_callback_spawner;
public:
	Prototype_Example();
	~Prototype_Example();

	void Start_Example();
};