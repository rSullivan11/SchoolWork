/***********************************************

	Class DoublyList

************************************************/

#include "DoublyList.h"
#include "Functions.cpp"

#include <iostream>
using namespace std;

int main()
{
	// Create your testing cases here.
	//------------------{ Start }----------------

	DoublyList myList;

	// Test insert in order
	cout << "\nTESTING - Start inserting...";
	myList.insertInOrder(2);
	myList.insertInOrder(1);
	myList.insertInOrder(5);
	myList.insertInOrder(4);
	myList.insertInOrder(3);
	myList.insertInOrder(3);
	myList.insertInOrder(5);

	// Test print
	cout << "\nInserted: 2 1 5 4 3 3 5";
	cout << "\n\nList is: ";
	myList.print();
	cout << endl;
	
	// Test reverse print
	cout << "The list in reverse is: ";
	myList.reversePrint();
	cout << endl;

	DoublyList myListTwo;
	int x;
	// Test front
	cout << "\nThe first element in the list is: ";
	x = myList.front();
	cout << x;
	cout << endl;
	// Test null
	//x = myListTwo.front(); exit(1);	// uncomment to test program terminate


	// Test back
	cout << "The last element in the list is: ";
	x = myList.back();
	cout << x;
	cout << endl;
	// Test null
	//x = myListTwo.back();	exit(1);	// uncomment to test program terminate

	//------------------{ END }------------------

	cout << endl << endl;
	system("Pause");
	return 0;
}
