/***********************************************

	Class DoublyList

************************************************/

#include "DoublyList.h"
#include "Functions.cpp"

#include <iostream>
using namespace std;

int main()
{
	DoublyList intList;

	intList.insertInOrder(37);
	intList.insertInOrder(53);
	intList.insertInOrder(21);
	intList.insertInOrder(18);
	intList.insertInOrder(73);
	intList.insertInOrder(49);
	
	cout << "TESTING: insertInOrder() and print()" 
		<< "\n\nEXPECTED OUTPUT: "
		<< "\nList 1: 18  21  37  49  53  73\n\n";
	cout << "\nACTUAL OUTPUT:";
	cout << "\nList 1: ";
	intList.print();

	cout << "\n\n-----------------------------------------------------\n";
	cout << "TESTING: printReverse()" 
		<< "\n\nEXPECTED OUTPUT: "
		<< "\nList 2: 73  53  49  37  21  18\n";
	cout << "\nACTUAL OUTPUT:";
	cout << "\nList 2: ";
	intList.reversePrint();

	cout << "\n\n-----------------------------------------------------\n";
	cout << "FINAL TESTING: Check first and last nodes" 
		<< "\n\nEXPECTED OUTPUT: "
		<< "\nList 2 first node data: 18"
		<< "\nList 2 last node data: 73\n";
	cout << "\nACTUAL OUTPUT:";
	cout << "\nList 2 first node data: "
		<< intList.front()
		<< "\nList 2 last node data: "
		<< intList.back();

	intList.destroyList();

	cout << endl << endl;
	system("Pause");
	return 0;
}
