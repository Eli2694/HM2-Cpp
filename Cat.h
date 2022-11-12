#pragma once
#include "Animal.h"
class Cat : public Animal
{
public:
	void eGurimCount(int aGurimCount);
	void enterAge(int age);
private:
	int GurimCount;
	int age;
	void printGurimCount();
	void printAll();
};

