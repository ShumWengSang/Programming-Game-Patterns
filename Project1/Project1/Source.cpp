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

	system("pause");
}