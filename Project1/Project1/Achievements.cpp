#include "Achievements.h"



Achievements::Achievements()
{
}


Achievements::~Achievements()
{
	list_of_achievemnt.clear();
}

void Achievements::OnNotify(const GameObject& go, Event var_event)
{
	switch (var_event)
	{
	case COOL_EVENT:
		if (go.GetID() == 2)
		{
			UnlockAcheivement(PLAYER_UNLOCK_KEYBOARD_BY_PRESSING_ONE, "UNLOCKED BY PRESSING ONE");
		}
		break;
	case NUM_1_EVENT:
	{
		UnlockAcheivement(PLAYER_UNLOCK_THIS_PATTERN, "PATTERN UNLOCKED");
	}
	break;
	case NO_EVENT:
		break;
	default:
		break;
	}
}

void Achievements::UnlockAcheivement(Achievement_Name achiemvent, char * message, char * failMessage)
{
	//might need optimization. keep for now
	bool found = false;
	for ( std::vector<Achievement *>::iterator it = list_of_achievemnt.begin(); it != list_of_achievemnt.end(); it++)
	{
		Achievement * temp = *(it);
		if (achiemvent == temp->name)
		{
			//Found achievement, don't need to show.
			cout << "Achievement already unlocked. Custom message: " << failMessage << endl;
			found = true;
			break;
		}
	}

	if (!found)
	{
		//not found. unlock it.
		Achievement * temp = new Achievement(achiemvent, message);
		list_of_achievemnt.push_back(temp);
		temp->Render();
	}
}