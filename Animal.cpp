#include "Animal.h"
#include <stdio.h>
#include <string.h>

void Animal::Code(int aCode)
{
	this->code = aCode;
}

void Animal :: printCode()
{
	printf("code %d\n",this->code );
}

void Animal::insName(char aName[100])
{
	strcpy_s(name, aName);
}
void Animal::printName()
{
	printf("Name %s\n", this->name);
}