#pragma once
#include <iostream>
#include "GameObject.h"
using namespace std;

class Command
{
public:
	virtual void execute(GameObject& obj) = 0;
};

