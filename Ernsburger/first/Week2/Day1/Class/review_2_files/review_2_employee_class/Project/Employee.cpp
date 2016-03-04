/*
	HourlyEmployee.cpp
	Implementation of class HourlyEmployee
*/

#include "Employee.h"

Employee::Employee( )
{
	//NOTE: Not necessary to give a value to a string, because 
	//		it will be initialized by the default constructor 
	//		of the STL string class	
	name = "No name yet";

	id = 0;
}

Employee::Employee(const string& newName, int newID) 
{			
    name = newName;
	id = newID;
}

string Employee::getName( ) const 
{
    return name;
}

int Employee::getID() const
{
	return id;
}

void Employee::setName(const string& newName)
{
    name = newName;
}

void Employee::setID(int newID)
{
	id = newID;
}

void Employee::print( ) const
{
	cout << "Employee: " << name << endl
		<< "ID: " << id << endl;
}

Employee::~Employee( )
{
}