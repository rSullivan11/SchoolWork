/*
* Sullivan, Ryan
* CS 250
* August 27, 2015
*
* Program to create, print, and manipulate arrays.
*/

#include <string>
#include <iostream>
using namespace std;

const int CAPACITY = 20;

//Declaration function fillArray
void fillArray(int a[], int& numOfElem);	// fills an array of integer, takes an array and number of elements

											//Declaration function printArray
void printArray(const int a[], const int& numOfElem);	// prints an array, takes an array and a constant integer reference number of elements

														//Declaration function insertAtIndex
void insertAtIndex(int a[], int& numOfElem, int insertNum, int insertAtIndex);	// inserts integer into array, takes array, integer refernce number of elements, number to insert, index to insert at


int main()
{
	int numArray[CAPACITY], numOfElements;

	fillArray(numArray, numOfElements);

	cout << "\nArray elements: ";
	printArray(numArray, numOfElements);

	char repeat = 'y';
	int number = 0;
	int index = 0;

	cout << "\n\nTEST insertAtIndex ----------------------------\n";
	while (repeat == 'y')
	{
		cout << "\nEnter a number to insert: ";
		cin >> number;
		cout << "Enter the index where to place the number: ";
		cin >> index;
		insertAtIndex(numArray, numOfElements, number, index);

		cout << "\nArray is now: ";
		printArray(numArray, numOfElements);

		cout << "\n\nAgain (y/n)? ";
		cin >> repeat;
	}

	cout << endl;
	system("Pause");
	return 0;
}

//Definition function fillArray
void fillArray(int a[], int& numOfElem) {
	cout << "Enter no more than " << CAPACITY << " positive integers, enter -1 to end input: ";		// prompts user to fill array
	int i = 0; numOfElem = 0;	// integer i to hold user input		// make sure number of elements is initialized
	while (numOfElem < CAPACITY) {	// fill array until reaching capacity
		cin >> i;	// put next user input into i
		if (i != -1) a[numOfElem] = i;	// check if user entered -1 to stop input
		else break;		// if the user enters -1, leave the loop
		++numOfElem;	// incriment number of elements for every successful input
	}
}


//Definition function printArray
void printArray(const int a[], const int& numOfElem) {
	if (numOfElem == 0) cerr << "Array is empty.";		// check if array is empty
	for (int i = 0; i < numOfElem; ++i) {		// for loop to process array
		cout << a[i] << ' ';	// output each element in array followed by a space
	}
}


//Definition function insertAtIndex
void insertAtIndex(int a[], int& numOfElem, int insertNum, int insertAtIndex) {
	if (insertAtIndex <= numOfElem && numOfElem != CAPACITY) {		// check if user is trying to insert beyond the bounds of the array, make sure array is not full
		for (int i = (numOfElem + 1); i >= insertAtIndex; --i) {	// loop to process array, starting at last element
			if (i > numOfElem) ++numOfElem;		// increment number of elements for inserted element 
			a[i] = a[(i - 1)];		// copy elements into new space
			if (i == insertAtIndex) a[insertAtIndex] = insertNum;	// insert number into desired index
		}
	}
	else {	// if number could not be inserted, check the following
		if (numOfElem == CAPACITY) cerr << "Array is full. Cannot insert another element.";		// if the array was full
		else if (insertAtIndex > numOfElem)
			cerr << "You can only insert contiguous elements in the array.";	// if the index was out of the arrays bounds
		else cerr << "The array cannot have more than " << CAPACITY << " elements.";		// if the index is beyond the capacity of the array
	}
}
