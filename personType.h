#pragma once
#ifndef personType_H
#define personType_H

#include <string>

using namespace std;

class personType
{
public:
	void print() const;
		//Function to output the first and lastname in the form of firstName lastName.

	void setName(string first, string last);
		//Function to set firstName and lastName according to the parameters.
		//Postcondition: firstName = first; lastName = last;

	string getFirstName() const;
		//Function to return the first name. 
		//Postcondition: The value of firstName is returned.

	string getLastName() const;
		//Function to return the last name. 
		//Postcondition: The value of lastName is returned.

	personType(string first = "", string last = "");
		//Constructor
		//Sets firstName and lastName according to the parameters. 
		//Default values of the parameters are null strings. 
		//Postcondition: firstName = first; lastName = last;

private:
	string firstName;	//Stores the first name
	string lastName;	//Stores the last name
};

#endif // !personType_H