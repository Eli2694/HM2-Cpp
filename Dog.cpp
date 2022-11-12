#include "Dog.h"
#include <stdio.h>
#include <string.h>

void Dog::eGurimCount(int aGurimCount)
{
	this->GurimCount = aGurimCount;
}
void Dog::printGurimCount()
{
	printf("code %d\n", this->GurimCount);
}
void Dog::printAll()
{
	printf("code %d\nname: %s\nnumber of puppies: %d\n", this->code,this->name,this->GurimCount);
}
