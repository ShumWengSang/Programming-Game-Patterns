#include "Prototype_Example.h"

Monster * spawnGhost()
{
	cout << "Creating Ghost from function" << endl;
	return new Ghost(11, 16);
}

Monster * spawnTiger()
{
	cout << "Creating Tiger from function" << endl;
	return new Tiger(10, 15);
}

Prototype_Example::Prototype_Example()
{
	Monster * TigerPrototype = new Tiger(10, 15);
	TigerSpawner = new Spawner_BaseClass(TigerPrototype);

	GhostSpawnerPrototype = new Spawner_Function_Prototypes(spawnGhost);
	TigerSpawnerPrototype = new Spawner_Function_Prototypes(spawnTiger);

	ghostSpawner = new SpawnerFor<Ghost>();
	//ghost_callback_spawner = new SpawnerFor<SpawnCallBack>();
}


Prototype_Example::~Prototype_Example()
{
	if (TigerSpawner != NULL)
		delete TigerSpawner;
}

void Prototype_Example::Start_Example()
{
	cout << endl;
	cout << "Starting Prototype Example" << endl;

	cout << "There are two ways to do prototyping" << endl;
	cout << "Here we demonstrate a base class containing function 'Clone'" << endl;
	cout << "As well as function spawners" << endl;
	cout << endl;
	cout << "Press 1. to use base class spawner" << endl;
	cout << "Press 2. to use function spawners for tigers." << endl;
	cout << "Press 3. to use function spawners for ghosts." << endl;
	cout << "Press 4. to use templated spawner, with template as ghost" << endl;
	cout << "Press 5. to use templated spawner, with template as function callback" << endl;
	cout << "Press 6. to end example." << endl;
	int input;
	bool end_example = false;

	Monster * tiger = NULL;
	Monster * ghost = NULL;
	while (!end_example)
	{
		cin >> input;
		switch (input)
		{
		case 1:
			tiger = TigerSpawner->spawnMonster();
			break;
		case 2:
			tiger = TigerSpawnerPrototype->spawnMonster();
			break;
		case 3: 
			ghost = GhostSpawnerPrototype->spawnMonster();
			break;
		case 4:
			ghost = ghostSpawner->spawnMonster();
			break;
		case 5:
			cout << "Not possible at my level yet LMAO. " << endl;
			break;
		case 6:
			end_example = true;
		default:
			break;
		}

		if (tiger != NULL) {
			delete tiger;
			tiger = NULL;
		}
		if (ghost != NULL) {
			delete ghost;
			ghost = NULL;
		}
	}
	cout << endl;
}
