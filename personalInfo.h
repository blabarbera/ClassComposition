#pragma once
#ifndef personalInfo_H
#define personalInfo_H

#include <string>
#include "personType.h"
#include "dateType.h"

using namespace std;

class personalInfo
{
public:
	void setPersonalInfo(string first, string last, int month, int day, int year, int ID);
		//Function to set personal information. 
		//The member variables are set according to the parameters. 
		//Postcondition: firstName = first; lastName = last; dMonth = month; dDay = day; dYear = year;
		//				personID = ID; If no values are specified the default vals are used to initialize
		//				the member variables.

	void printPersonalInfo() const;
		//Function to print the personal information.

	personalInfo(string first = "", string last = "", int month = 1, int day = 1, int = 1900, int ID = 0);
		//Constructor
		//The member variables are set according to the parameters. 
		//Postcondition: firstName = first; lastName = last; dMonth = month;
		//				dDay = day; dYear = year; personID = ID; 
		//				If no values are specified, the default values are 
		//				to intialize the member variables.

private:
	personType name;
	dateType bDay;
	int personID;
};

#endif // !personalInfo_H