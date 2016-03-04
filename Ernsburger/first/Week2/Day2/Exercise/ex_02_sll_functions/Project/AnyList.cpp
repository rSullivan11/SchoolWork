#include "AnyList.h"

//constructor
AnyList::AnyList()
{
	ptrToFirst = NULL;
	count = 0;
}

//print
void AnyList::print() const
{
	if (ptrToFirst == NULL)
		cerr << "List is empty.";
	else
	{
		Node *current;	//create a pointer to traverse the list
		current = ptrToFirst;	//set the current pointer to point to the first node

		while (current != NULL)	//while the current pointer is not pointing to NULL
		{						//  that is, the current pointer has not reached the
			//  end of the list
			cout << current->getData() << " ";	//output the data
			current = current->getPtrToNext();		//move the current pointer forward
		}
	}
}

//destroyList
void AnyList::destroyList()
{
	Node  *temp; //pointer to delete the node

	while (ptrToFirst != NULL)
	{
		temp = ptrToFirst;
		ptrToFirst = ptrToFirst->getPtrToNext();
		delete temp;
		temp = NULL;
	}

	count = 0;
}

//destructor
AnyList::~AnyList()
{
	destroyList();
}

/*************************************************

		Write your code below this line.

*************************************************/

//Definition function getNumOfItems
int AnyList::getNumOfItems() {
	return count;
}

//Definition of function insertBack()
void AnyList::insertBack(int newData) {
	Node *current = new Node(newData, NULL);

	if (ptrToFirst == NULL) {
		ptrToFirst = current;
		++count;
	}
	else {
		Node *temp = ptrToFirst;
		while (temp->getPtrToNext() != NULL) {
			temp = temp->getPtrToNext();
		}
		temp->setPtrToNext(current);
		++count;
	}
}

//Definition function deleteFirstNode
void AnyList::deleteFirstNode() {
	if (ptrToFirst != NULL) {
		Node *current = ptrToFirst;
		Node *trailCurrent = ptrToFirst;

		current = current->getPtrToNext();
		delete trailCurrent;
		ptrToFirst = current;
		--count;
	}
	else cout << "cannot delete from an empty list.";
}