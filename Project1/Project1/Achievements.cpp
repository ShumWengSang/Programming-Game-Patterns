#include "Achievements.h"



Achievements::Achievements()
{
}


Achievements::~Achievements()
{
}

void Achievements::OnNotify(const GameObject& go, Event var_event)
{
	switch (var_event)
	{
	case COOL_EVENT:
		if (go.GetID == 2)
		{
			UnlockAcheivement(PLAYER_UNLOCK_KEYBOARD_BY_PRESSING_ONE);
		}
		break;
	case NUM_1_EVENT:
	{
		UnlockAcheivement(PLAYER_UNLOCK_THIS_PATTERN);
	}
	break;
	case NO_EVENT:
		break;
	default:
		break;
	}
}

void Achievements::UnlockAcheivement(Achievement_Name achiemvent)
{
	//might need optimization. keep for now
	bool found = false;
	std::vector<Achievement>::iterator it;
	for ( it = list_of_achievemnt.begin(); it != list_of_achievemnt.end(); it++)
	{
		if (achiemvent == it->name)
		{
			//Found achievement, don't need to show.
			cout << "Achievement already unlocked. Fuck off!" << endl;
			found = true;
			break;
		}
	}

	if (!found)
	{
		//not found. unlock it.
		list_of_achievemnt.push_back(Achievement(achiemvent, "TEMPORRAY"));
	}
}