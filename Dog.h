#pragma once
#include "Animal.h"
class Dog : public Animal
{

public:
	void eGurimCount(int aGurimCount);
private:
	int GurimCount;
	void printGurimCount();
	void printAll();

};

