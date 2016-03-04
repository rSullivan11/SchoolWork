//Interface of the class Employee
//Base class, from which we will derive subsets of employees.

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;

class Employee
{
public:
    Employee();
    Employee(const string& newName, int newID);

    string getName() const;
	int getID() const;

	void setName(const string& newName);
	void setID(int newID);
	
	void print() const;	
	
	~Employee();

private:
    string name; 
	int id;
};

#endif 