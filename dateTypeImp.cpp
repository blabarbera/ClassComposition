#include "dateType.h"
#include <iostream>	
#include <string>

using namespace std;

int dateType::getDay() const
{
	return dDay;
}

int dateType::getMonth() const
{
	return dMonth;
}

int dateType::getYear() const
{
	return dYear;
}

void dateType::setDate(int month, int day, int year)
{
	if (1 <= month && month <=12)
		dMonth = month;
	else
		cout << "Invalid month!";

	if (year > 0)
		dYear = year;
	else
		cout << "Invalid year!";


	if (dMonth <= 7) //Months in range Jan-July: Odd numbered months have 31 days, even months have 30
	{
		if (dMonth % 2 == 1 && (1 <= day && day <= 31)) //make sure dDay is valid
			dDay = day;
		else if ((dMonth % 2 == 0 && dMonth != 2) && (1 <= day && day <= 30))
			dDay = day;
		else if ((dMonth == 2 && isLeapYear()) && (1 <= day && day <= 29)) //During leap year, Feb. has 29 days
			dDay = day;
		else if ((dMonth == 2 && !isLeapYear()) && (1 <= day && day <= 28)) //During normal year, Feb. has 28 days
			dDay = day;
		else
			dDay = 1;
	}
	else //Months in range Aug.-December: Odd numbered months have 30 days, even months have 31 days
	{
		if (dMonth % 2 == 1 && (1 <= day && day <= 30))
			dDay = day;
		else if (dMonth % 2 == 0 && (1 <= day && day <= 31))
			dDay = day;
		else
			dDay = 1;
	}
}

void dateType::printDate() const
{
	cout << dMonth << "-" << dDay << "-" << dYear;
}

dateType::dateType(int month, int day, int year)
{
	dMonth = month;
	dDay = day;
	dYear = year;
}
