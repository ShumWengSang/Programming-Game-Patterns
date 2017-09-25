#include "Subject.h"



Subject::Subject() : num_of_obs(0)
{
}


Subject::~Subject()
{
}

void Subject::notify(const GameObject& go, Event event_)
{
	for (std::vector<Observer*>::iterator var = _Observer.begin(); var != _Observer.end(); var++)
	{
		Observer * temp = *(var);
		temp->OnNotify(go, event_);
	}
}

void Subject::AddObserver(Observer *obs)
{
	_Observer.push_back(obs);
}

void Subject::RemoveObserver(Observer * obs)
{
	auto it = std::find(_Observer.begin(), _Observer.end(), obs);
	if (it != _Observer.end())
		_Observer.erase(it);
}