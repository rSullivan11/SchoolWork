
#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class PersonType {
    public:
        PersonType();
        PersonType(const std::string&, const std::string&, int);

        void setPersonInfo(const std::string&, const std::string&, int);

        std::string getFirstName() const;
        std::string getLastName() const;
        int getSSN() const;

        void printName() const;
        void printPersonInfo() const;
        void printSSN() const;

        ~PersonType();

    private:
        std::string firstName;
        std::string lastName;
        int ssn;
};

#endif
