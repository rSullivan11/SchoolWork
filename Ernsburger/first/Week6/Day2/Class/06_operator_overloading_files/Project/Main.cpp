/*************************************************
	Operator Overloading
*************************************************/

#include "Pair.h"

#include <iostream>
using namespace std;

// Declaration of overloaded comparison operator
bool operator==(const Pair& p1, const Pair& p2);

int main()
{
	Pair p1(4, 3);
	Pair p2(10, 20);

	cout << "TEST: Ostream operator <<\n";
	cout << "\n\tP1: " << p1;
	cout << "\n\tP2: " << p2;
	cout << endl;

	cout << "\n\nTEST: Multiplication operator\n";
	Pair p4 = p1 * p2;
	cout << "\n\tP1 * P2 = " << p4 << endl;

	cout << "\n\nTEST: Comparison operator ==\n";
	Pair p6(10, 20);
	cout << "\n\tP1: " << p1;
	cout << "\n\tP2: " << p2;
	cout << "\n\tP6: " << p6;

	// compare...
	if (p1 == p2) 
		cout << "\n\tP1 == P2";
	else 
		cout << "\n\tP1 != P2";

	if (p1 == p6) 
		cout << "\n\tP1 == P6";
	else 
		cout << "\n\tP1 != P6";

	if (p2 == p6)
		cout << "\n\tP2 == P6";
	else
		cout << "\n\tP2 != P6";
	cout << endl;

	cout << endl;
	system("Pause");
	return 0;
}

// Definition of overloaded comparison operator
bool operator==(const Pair& p1, const Pair& p2)
{
	return (p1.getFirst() == p2.getFirst() &&
		p1.getSecond() == p2.getSecond());
}