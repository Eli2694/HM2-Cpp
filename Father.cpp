#include "Father.h"
#include <stdio.h>
#include <string.h>

void Father::fatherFunc()
{
	printf("name: %s\nage: %d\n", this->name, this->age);
}

void Father::currentYear(int birthYear)
{
	this->cYear = additionAge(birthYear);
}
int Father::additionAge(int birthYear)
{
	return this->age + birthYear;
}

void Father::calcAge(int currYear)
{
	this->age = currYear - 1950;
}

void Father::updatePersonalInfo(int currYear, char name[10], int aWeight)
{
	calcAge(currYear);
	strcpy_s(this->name, name);
	weight = aWeight;
}
