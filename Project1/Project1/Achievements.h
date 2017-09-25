#pragma once
#include "Observer.h"
#include <iostream>
#include <vector>

using namespace std;

enum Achievement_Name
{
	PLAYER_UNLOCK_KEYBOARD_BY_PRESSING_ONE = 0,
	PLAYER_UNLOCK_THIS_PATTERN
};

struct Achievement
{
	Achievement(Achievement_Name name, char * display) : name(name) , display_string(display)
	{
		
	}
	~Achievement()
	{
		if (display_string != NULL)
			delete display_string;
	}

	Achievement_Name name;
	char * display_string;
	virtual void Render()
	{
		cout << "Unlocked " << display_string << " !" << endl;
		cout << "RENDERING ACHIEVEMENT" << endl;
	}
};

class Achievements :
	public Observer
{
private:
	vector<Achievement *> list_of_achievemnt;
public:
	Achievements();
	~Achievements();

	void OnNotify(const GameObject& go, Event var_event);

	void UnlockAcheivement(Achievement_Name achiemvent, char * message, char * failMessage = "Unlocked Already");
};

