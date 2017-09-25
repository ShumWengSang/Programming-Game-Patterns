#include "Observer_Example.h"



Observer_Example::Observer_Example()
{
	subject.AddObserver(&Achievement_system);
}


Observer_Example::~Observer_Example()
{
	subject.RemoveObserver(&Achievement_system);
}


void Observer_Example::Start_Example()
{
	b_end_example = false;

	cout << endl;
	cout << "Starting observer example " << endl;
	cout << "Press 1. to activate first achievement." << endl;
	cout << "Press 2. to activate second achievement." << endl;
	cout << "Press 3 to end example" << endl;

	int input;
	while (!b_end_example)
	{
		cin >> input;
		switch (input)
		{
		case 1:
			subject.notify(go, COOL_EVENT);
			break;
		case 2:
			subject.notify(go, NUM_1_EVENT);
			break;
		case 3:
			b_end_example = true;
			break;
		default:
			break;
		}
	}

	cout << "Observer example has ended" << endl;
}