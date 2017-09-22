#include "Header.h"

using namespace std;

int GameObject::GiveID = 2;

void main()
{
	cout << "Program has started" << endl;
	cout << endl;
	cout << "We start with Command pattern" << endl;

	Command_Example commandPattern;
	commandPattern.Start_Example();


	cout << endl;
	cout << "Next is the flyweight pattern" << endl;
	Flyweight_Example flywieght;
	flywieght.Start_Example();

	cout << endl;
	cout << "Now we demonstrate the Observer Pattern" << endl;
	Observer_Example obs;
	obs.Start_Example();

	system("pause");

}