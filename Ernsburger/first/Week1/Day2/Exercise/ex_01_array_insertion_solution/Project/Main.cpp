//	(name header)

#include <string>
#include <iostream>
using namespace std;

const int CAPACITY = 20;

void fillArray(int a[], int& numOfElements);

void printArray(const int a[] , int numOfElements);

void insertAtIndex(int a[] , int& numOfElements, int element, int idx);

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
		insertAtIndex(numArray,numOfElements,number,index);

		cout << "\nArray is now: ";
		printArray(numArray, numOfElements);

		cout << "\n\nAgain (y/n)? ";
		cin >> repeat;
	}

	cout << endl;
	system("Pause");
	return 0;
}

void fillArray(int a[], int& numOfElements)
{
	cout << "Enter up to " << CAPACITY << "	non-negative integers.\n"
         << "Mark the end of the list with a negative integer.\n";

	int next, index = 0;
    cin >> next;
    while ((next >= 0) && (index < CAPACITY))
    {
        a[index] = next;
        ++index;
        cin >> next;
    }

    numOfElements = index;
}

void printArray(const int a[], int numOfElements)
{
	if (numOfElements == 0)
		cerr << "Array is empty." << endl;
	else
	{
		for (int i = 0; i < numOfElements; ++i)
			cout << a[i] << " ";
	}
}

void insertAtIndex(int a[] , int& numOfElements, int element, int idx)
{
	if (numOfElements == CAPACITY)
		cerr << "Array is full. Cannot insert another element." << endl;
	else if (idx > numOfElements && idx < CAPACITY)
		cerr << "You can only insert contiguous elements in the array." << endl;
	else if (idx >= CAPACITY)
		cerr << "The array cannot have more than " << CAPACITY << " elements." << endl;
	else
	{
		// shift numbers
		int j = numOfElements;
		for (int i = numOfElements - 1; i >= idx; --i)
		{
			a[j] = a[i];
			--j;
		}

		// insert element
		a[idx] = element;

		// update number of elements in the array
		++numOfElements;
	}
}
