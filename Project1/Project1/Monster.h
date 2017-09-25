#pragma once
#include <iostream>
using namespace std;

class Monster
{
public:
	virtual ~Monster() {};
	virtual Monster * clone() = 0;
};

