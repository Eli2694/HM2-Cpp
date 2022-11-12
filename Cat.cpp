#include "Cat.h"

#include <stdio.h>
#include <string.h>

void Cat::eGurimCount(int aGurimCount)
{
	this->GurimCount = aGurimCount;
}
void Cat::printGurimCount()
{
	printf("code %d", this->GurimCount);
}
void Cat::printAll()
{
	printf("code %d\nname: %s\nnumber of puppies: %d\n", this->code, this->name, this->GurimCount);
}
void Cat::enterAge(int age)
{
	this->age = age;
}
