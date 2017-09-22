#pragma once
#include "Example_Base.h"
#include "World.h"
//Flyweight example
//A world made of 4 different terrains

class Flyweight_Example :
	public Example_Base
{
private:
	World world;
public:
	Flyweight_Example();
	~Flyweight_Example();

	void Start_Example();
};

