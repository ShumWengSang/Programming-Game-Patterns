#pragma once
#include <stdlib.h>
class GameObject
{
private:
	static int GiveID;
	int CurrentID;
	char Name;
public:

	GameObject() {
		CurrentID = GiveID;
		GiveID++;

		_itoa_s(CurrentID, &Name, 2, 10);
	};
	char GetName()
	{
		return Name;
	}

	int GetID()
	{
		return CurrentID;
	}

	~GameObject() { };
};