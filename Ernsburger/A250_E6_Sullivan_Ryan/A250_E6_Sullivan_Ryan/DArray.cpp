#include "DArray.h"

template<typename T>
DArray<T>::DArray()
{
	capacity = 50;
	a = new T[capacity];
	used = 0;
}

/*template<typename T>
DArray<T>::DArray(int newCapacity)
{
	capacity = newCapacity;
	a = new T[capacity];
	used = 0;
}*/

template<typename T>
void DArray<T>::addElement(T element) {
	/*if (used >= capacity)
	{
		cerr << "Attempt to exceed capacity in DArray.\n";
		exit(0);
	}
	a[used] = element;
	++used;*/
	a.push(element);
}

template<typename T>
ostream& operator<<(ostream& out, const DArray<T>& a) {
	for (int i = 0, used = a.getUsed(); i < used; ++i) {
		out << a[i] << " ";
	}
	return out;
}

template<typename T>
int DArray<T>::getCap() const {
	return capacity;
}

template<typename T>
int DArray<T>::getUsed() const {
	return used;
}

template<typename T>
bool DArray<T>::isEmpty() const {
	return used == 0;
}

template<typename T>
bool DArray<T>::isFull() const {
	return used == capacity;
}

template<typename T>
T& DArray<T>::operator[](int index) const {
	return a[index];
}

template<typename T>
void DArray<T>::deleteElem(T elem) {
	int i = 0; bool found = false;
	while (i < used && !found) {
		if (a[i] == elem) found = true;
		else ++i;
	}
	if (found) {

		for (int j = i; j < used - 1; ++j) {
			a[j] = a[j + 1];
		}
		--used;
	}
}

template<typename T>
void DArray<T>::emptyArray() {
	used = 0;
}

template<typename T>
DArray<T>::~DArray()
{
	delete[] a; //delete the array
	a = NULL;	 //null the pointer
}

