#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
#include <stack>
using namespace std;


template<typename T>
class DArray
{
	template<typename T>
	friend ostream& operator<<(ostream&, const DArray<T>&);
public:
	DArray();
	//Default constructor -	initializes array 
	//						with a capacity of 50.

	//DArray(int);
	//Constructor - initializes array with a given capacity.
	//@param int - capacity of the array.

	void addElement(T);
	//addElement - adds an element to the array.
	//@param int - the element to add to the array.

	int getCap() const;
	int getUsed() const;

	bool isEmpty() const;
	//bool isFull() const;

	//T& operator[](int) const;

	void deleteElem(T);

	void emptyArray();

	~DArray();
	//Destructor

private:
	//T *a;			//will point to an int (it will be an array)
	stack<T> a;
	//int capacity;	//capacity of the array
	//int used;		//total number of elements in the array

};

#endif