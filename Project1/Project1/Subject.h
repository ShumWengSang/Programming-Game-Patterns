#pragma once
#include "Observer.h"
#include "Events.h"
#include <vector>

#define MAX_OBS 10
using namespace std;

class Subject
{
private:
	vector<Observer*> _Observer;
	int num_of_obs;
public:
	Subject();
	~Subject();

	void notify(const GameObject& go, Event event_);
	void AddObserver(Observer * obs);
	void RemoveObserver(Observer * obs);
};

