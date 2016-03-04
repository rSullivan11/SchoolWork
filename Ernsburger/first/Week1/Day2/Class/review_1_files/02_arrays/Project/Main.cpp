/*
	FirstName LastName
	September 2, 2245
	CS A250

	Example: Arrays
*/

#include <iostream>
using namespace std;

const int CAPACITY = 20;

void fillArray (int a[], int& numOfElements);

void printArray(const int a[], int numOfElements);

int main( )
{
	int numOfElements = 0;
	int myArray[CAPACITY];

	fillArray(myArray, numOfElements);

	printArray(myArray, numOfElements);

	cout << endl;
	system("Pause");
    return 0;
}

void fillArray (int a[], int& numOfElements)
{
	int num = 0,
		  i = 0;

	cout << "Enter no more than 20 positive integers (type -1 to quit):\n";
	do
	{		
		cin >> num;
		a[i] = num;
		++i;

	}while (num != -1 && i < 20);
	
	numOfElements = i - 1;
}

void printArray(const int a[], int numOfElements)
{	
	if (numOfElements == 0)
		cout << "No elements in the array.";
	else
		for (int i = 0; i < numOfElements; ++i)
			cout << a[i] << " ";
}