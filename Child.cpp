#include "Child.h"
#include <stdio.h>

void Child::childFunc()
{
	printf("name: %s\nage: %d\n", this->name, this->age);
}

int Child::additionAge(int birthYear)
{
	return this->age + birthYear;
}

void Child::calcAge(int currYear)
{
	this->age = currYear - 2000;
}

