/*
* Sullivan, Ryan
* CS A250
* April 6, 2016
*
* In-Class ex6
*/
//This program creates partially-filled arrays
//  of integers.

#include "DArray.h"
#include "DArray.cpp"

#include "Movie.h"

#include <iostream>
using namespace std;

template<typename T>
bool operator==(const DArray<T>&, const DArray<T>&);

int main()
{
	/*
	//Ask the user to enter the capacity
	cout << "Enter the capacity of the array: ";
	int cap;
	cin >> cap;

	//Create the new array
	DArray<int> a1(cap);

	//Ask the user to enter values for the array
	cout << "\nEnter positive numbers "
	<< "(enter -1 to quit)" << endl;
	int n;
	cin >> n;
	while(n != -1)
	{
	a1.addElement(n);
	cin >> n;
	}

	cout << "The list is: " << a1 << endl;
	cout << endl;
	cout << "Manipulate list\n"
	<< "-----------------\n"
	<< "Choice 1: Add to list.\n"
	<< "Choice 2: Remove from list.\n"
	<< "Choice 3: Empty list.\n"
	<< "Choice 4: To quit." << endl;

	bool done = false;
	do {
	cout << "\nEnter choice (1 - 4): ";
	cin >> n;
	switch (n) {
	case 1: cout << "Enter number to add: ";
	if (a1.isFull()) cerr << "Full";
	else cin >> n; a1.addElement(n);
	cout << "\nThe list is now: " << a1;
	break;
	case 2: cout << "Enter element to remove: ";
	if (a1.isEmpty()) cerr << "Empty";
	else cin >> n; a1.deleteElem(n);
	cout << "\nThe list is now: " << a1;
	break;
	case 3: a1.emptyArray();
	cout << "The list is now: " << a1
	<< endl;
	case 4: done = true;
	break;
	default: "Not a choice.\n";
	break;
	}
	} while (!done);*/

	//Ask the user to enter the capacity
	cout << "Enter the capacity of the array: ";
	int cap;
	cin >> cap;

	//Create the new array
	DArray<Movie> a1(cap);

	//Ask the user to enter values for the array
	cout << "\nEnter a movie title, followed by a space, and then a year. "
		<< "(enter\"done -1\" to quit)" << endl;
	string title; int year = 0;
	cin >> title >> year;

	while (year != -1)
	{
		Movie m = Movie(title, year);

		a1.addElement(m);
		cin >> title >> year;
	}

	cout << "The list is:\n" << a1 
		 << "------------\n" << endl;
	cout << endl;
	cout << "Manipulate list\n"
		<< "-----------------\n"
		<< "Choice 1: Add to list.\n"
		<< "Choice 2: Remove from list.\n"
		<< "Choice 3: Empty list.\n"
		<< "Choice 4: To quit." << endl;

	int n = 0; Movie m;
	bool done = false;
	do {
		cout << "\nEnter choice (1 - 4): ";
		cin >> n;
		switch (n) {
		case 1: cout << "Enter movie to add: ";
			if (a1.isFull()) cout << "Full";
			else {
				cin >> title >> year;
				m = Movie(title, year);

				a1.addElement(m);
				cout << "\nThe list is now:\n" << a1
					<< "--------------------" << endl;
			}
			break;
		case 2: cout << "Enter movie to remove: ";
			if (a1.isEmpty()) cout << "Empty";
			else {
				cin >> title >> year;
				m = Movie(title, year);
				int tempUsed = a1.getUsed();

				a1.deleteElem(m);
				if (tempUsed != a1.getUsed()) {
					cout << "\nThe list is now:\n" << a1
						<< "-------------------\n" << endl;
				} else cout << "\nNot in list.\n" << endl;
			}
			break;
		case 3: a1.emptyArray();
			cout << "The list is now:\n"
				 << "-----------------\n" 
				 << a1 << endl;
			break;
		case 4: done = true;
			break;
		default: "Not a choice.\n";
			break;
		}
	} while (!done);

	cout << endl;
	system("Pause");
	return 0;
}

template<typename T>
bool operator==(const DArray<T>& a1, const DArray<T>& a2) {
	if (a1.getCap() != a2.getCap() && a1.getUsed() != a2.getUsed()) return false;
	else {
		for (int i = 0, used = a1.getUsed(); i < used; ++i) {
			if (a1[i] != a2[i]) return false;
		}
		return true;
	}
}