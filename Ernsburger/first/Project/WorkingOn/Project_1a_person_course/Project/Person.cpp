/* Implementation of the class Person */
using namespace std;

#include "Person.h"

Person::Person() {
	firstName = "N/A";
	lastName = "N/A";
}

// overloaded constructor
Person::Person(const string& newFirstName, const string& newLastName)
{
	firstName = newFirstName;
	lastName = newLastName;
}

void Person::setName(const string& newFirstName, const string& newLastName) {
	firstName = newFirstName;
	lastName = newLastName;
}

string Person::getLastName() const {
	return lastName;
}

void Person::getName(string& changeFirstName, string& changeLastName) const {
	changeFirstName = firstName;
	changeLastName = lastName;
}

void Person::printName() const {
	cout << lastName << ", " << firstName << endl;
}

Person::~Person() {}
