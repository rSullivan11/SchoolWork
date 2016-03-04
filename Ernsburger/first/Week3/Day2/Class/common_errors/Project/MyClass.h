#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
using namespace std;

class MyClass  
{
public:
	MyClass();  
	MyClass(int newNumber); 

	void setNum(int newNumber);

	int getNum() const;

	void print() const;

private:
	int number;
};

#endif
