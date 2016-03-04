#include "MyClass.h"

MyClass::MyClass()
{
	number = 0;
}

MyClass::MyClass(int newNumber)
{
	number = newNumber;
}

void MyClass::setNum(int newNumber)
{
	number = newNumber;
}

int MyClass::getNum() const
{
	return number;
}

void MyClass::print() const
{
	cout << "Number is: " << number;
}