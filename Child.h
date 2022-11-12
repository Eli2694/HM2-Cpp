#pragma once
#include "Father.h"
class Child : public Father
{
public:
	void childFunc();
	int additionAge(int birthYear);
	void calcAge(int currYear);
};

