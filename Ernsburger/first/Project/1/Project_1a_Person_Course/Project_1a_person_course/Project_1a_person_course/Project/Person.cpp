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

void Person::getName(string& newFirstName, string& newLastName) const {
    newFirstName = firstName;
    newLastName = lastName;
}

void Person::printName() const {
    cout << lastName << ", " << firstName << endl;
}

Person::~Person() {}
