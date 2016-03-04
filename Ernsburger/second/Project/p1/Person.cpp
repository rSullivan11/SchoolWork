#include "Person.h"

using namespace std;

Person::Person() {
    ssn = 0;
}

Person::Person(const string& newFirstName, const string& newLastName, int newSSN) {
    firstName = newFirstName; lastName = newLastName;
    ssn = newSSN;
}

void Person::setPersonInfo(const string& newFirstName, const string& newLastName, int newSSN) {
    firstName = newFirstName; lastName = newLastName;
    ssn = newSSN;
}

string Person::getFirstName() const {
    return firstName;
}

string Person::getLastName() const {
    return lastName;
}

int Person::getSSN() const {
    return ssn;
}

void Person::printName() const {
    cout << lastName << ", " << firstName;
}

void Person::printPersonInfo() const {
    printSSN(); cout << ' ' << firstName << ' ' << lastName << endl;
}

void Person::printSSN() const {
    bool done = false; int a[9]; int i = 8, tempSSN = getSSN();
    while (!done) {
        a[i] = tempSSN % 10;
        --i; tempSSN /= 10;
        if (tempSSN == 0) done = true;
    }
    for (int i = 0; i < 9; ++i) {
        if (i == 3) cout << '-';
        else if (i == 5) cout << '-';
        cout << a[i];
    }
}

Person::~Person() {}
