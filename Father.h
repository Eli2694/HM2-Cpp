#pragma once
class Father
{
public:
	char name[10];
	int age;
	int weight;
	int cYear;

	void currentYear(int birthYear);
	int  additionAge(int birthYear);
	void fatherFunc();

	void virtual calcAge(int currYear);
	void updatePersonalInfo(int currYear, char name[10], int aWeight);

	

};

