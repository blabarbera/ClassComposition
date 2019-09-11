#include "personalInfo.h"
#include <iostream>

using namespace std;

personalInfo::personalInfo(string first, string last, int month, int day, int year, int ID) : name(first, last), bDay(month, day, year)
{
	personID = ID;
}

void personalInfo::setPersonalInfo(string first, string last, int month, int day, int year, int ID)
{
	name.setName(first, last);
	bDay.setDate(month, day, year);
	personID = ID;
}

void personalInfo::printPersonalInfo() const
{
	name.print();
	cout << "'s Date of Birth is: ";
	bDay.printDate();
	cout << endl;
	cout << "and personal ID is: " << personID;
}
