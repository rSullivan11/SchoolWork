#ifndef PAIR_H
#define PAIR_H

#include <iostream>
using namespace std;

class Pair
{
	// Declaration of overloaded insertion stream operator as a friend function
	friend ostream& operator<<(ostream& out, const Pair& p);

public:
    Pair( );	
	Pair(int firstValue, int secondValue);

    void setFirst(int);
    void setSecond(int);

    int getFirst( ) const;
    int getSecond( ) const;

	// Declaration of overloaded multiplication operator as a member function
	Pair operator*(const Pair& p) const;

	~Pair();
	
private:
    int first;
    int second;
};

#endif 



