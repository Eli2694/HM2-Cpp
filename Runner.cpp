#include "Runner.h"
#include "Father.h"
#include "Child.h"
#include <string.h>
#include "Dog.h"
#include "Cat.h"
#include "Animal.h"
void Runner :: run()
{
	//1
	Child Bill;
	Bill.age = 8;
	strcpy_s(Bill.name, "Bill");
	Bill.fatherFunc();

	//3
	Dog Rex;
	Rex.code = 11;
	strcpy_s(Rex.name, "Rex");
	Rex.printName();
	Rex.eGurimCount(2);
	//3
	Cat Lilly;
	Lilly.code = 22;
	char n[6] = "Lilly";
	Lilly.insName(n);
	Lilly.eGurimCount(10);
	Lilly.enterAge(6);
	//3
	Cat Mosh;
	char n1[5] = "Mosh";
	Mosh.insName(n1);
	Mosh.Code(33);
	Mosh.eGurimCount(5);
	Mosh.enterAge(4);
	Mosh.printName();

	//4
	Child Ben;
	char n2[4] = "Ben";
	Ben.updatePersonalInfo(2022, n2, 60);
	Ben.childFunc();






}
