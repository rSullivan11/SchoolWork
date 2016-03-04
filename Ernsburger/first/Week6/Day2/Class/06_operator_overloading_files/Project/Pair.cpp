#include "Pair.h"

// Definition of overloaded insertion stream operator as a friend functionn
ostream& operator<<(ostream& out, const Pair& p)
{
	// NOTE: A friend function can access private member variables of the class
	//       (no need to call an accessor function)
	out << "(" << p.first << "," << p.second << ")";
	return out;
}

// Default constructor
Pair::Pair( )
{ 
	first = 0;
	second = 0;
}

// Overloaded constructor
Pair::Pair(int firstValue, int secondValue)
{
    first = firstValue;
    second = secondValue;
}

// Definition function setFirst
void Pair::setFirst(int newValue)
{
    first = newValue;
}

// Definition function setSecond
void Pair::setSecond(int newValue)
{
    second = newValue;
}

// Definition function getFirst
int Pair::getFirst() const
{
	return first;
}

// Definition function getSecond
int Pair::getSecond( ) const
{
    return second;
}

// Definition of overloaded multiplication operator as a member function
Pair Pair::operator*(const Pair& p) const
{
	Pair temp(first * p.first, second * p.second);
	return temp;
}

// Destructor
Pair::~Pair(){ }
