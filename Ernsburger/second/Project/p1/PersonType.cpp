#include "PersonType.h"

using namespace std;

PersonType::PersonType() {
    ssn = 0;
}

PersonType::PersonType(const string& firstName, const string& lastName, int ssn) {
    this->firstName = firstName; this->lastName = lastName;
    this->ssn = ssn;
}

void PersonType::setPersonInfo(const string& newFirstName, const string& newLastName, int newSSN) {
    firstName = newFirstName; lastName = newLastName;
    ssn = newSSN;
}

string PersonType::getFirstName() const {
    return firstName;
}

string PersonType::getLastName() const {
    return lastName;
}

int PersonType::getSSN() const {
    return ssn;
}

void PersonType::printName() const {
    cout << lastName << ", " << firstName;
}

void PersonType::printPersonInfo() const {
    printSSN(); cout << ' ' << firstName << ' ' << lastName << endl;
}

void PersonType::printSSN() const {
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

PersonType::~PersonType() {}
