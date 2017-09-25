#pragma once
#include "Monster.h"

class Tiger : public Monster
{
public:
	Tiger(int health, int speed) : health(health), speed(speed) {}
	~Tiger()
	{
		cout << "Deleting Tiger." << endl;
	}
	Monster * clone()
	{
		cout << "Cloning tiger. Health : " << health << " : Speed " << speed << endl;
		return new Tiger(health, speed);
	}
private:
	int health;
	int speed;
};

class Ghost : public Monster
{
public:
	Ghost(int health, int speed) : health(health), speed(speed) {}
	~Ghost()
	{
		cout << "Deleting Ghost." << endl;
	}
	Monster * clone()
	{
		cout << "Cloning Ghost. Health : " << health << " : Speed " << speed << endl;
		return new Ghost(health, speed);
	}
private:
	int health;
	int speed;
};