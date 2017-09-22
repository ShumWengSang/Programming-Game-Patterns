#pragma once
#include "Observer.h"
#include "Events.h"
#define MAX_OBS 10
class Subject
{
private:
	Observer * _Observer[MAX_OBS];
	int num_of_obs;
protected:
	void notify(const GameObject& go, Event event_);
public:
	Subject();
	~Subject();

	void AddObserver(Observer * obs);
	void RemoveObserver(Observer * obs);
};

