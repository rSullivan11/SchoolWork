/* Interface of the class Person */
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
public:
    Person();

    void setName(const std::string&, const std::string&);

    Person::Person(const string&, const string&);

    std::string getLastName() const;

    void getName(std::string&,std::string&) const;

    void printName() const;

    ~Person();

private:
    std::string lastName;
    std::string firstName;

};

#endif
