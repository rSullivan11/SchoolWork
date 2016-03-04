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
int AnyList::getNumOfItems() const
{
	return count;
}

//Definition of function insertBack()
void AnyList::insertBack(int newData)
{
	Node *newNode;			//pointer to create the new node
	newNode = new Node;		//create the new node

	newNode->setData(newData);		//store new data in the node
	newNode->setPtrToNext(NULL);	//set new node to point to NULL

	/*
		By using the overloaded constructor, we can combine the
		previous four statements in one single statement.

		Node *newNode = new Node(newData, NULL);
	*/


	if (ptrToFirst == NULL)		//if the list is empty, newNode
								//  becomes first node
	{
		ptrToFirst = newNode;
	}
	else if (ptrToFirst->getPtrToNext() == NULL)	//if the list has only one node...
													//not necessary to check this condition => why?
	{
		ptrToFirst->setPtrToNext(newNode);
	}
	else						//the list is not empty, traverse the list,
								//  insert newNode after the last node
	{
		Node *current;			//create a pointer to traverse the list
		current = ptrToFirst->getPtrToNext();		//set the current pointer to point to the second node

		while (current->getPtrToNext() != NULL)	    //move current to the last node of the list
			current = current->getPtrToNext();

		current->setPtrToNext(newNode);
	}

	++count;
}

//Definition function deleteFirstNode
void AnyList::deleteFirstNode()
{
	//Case: List is empty
	if (ptrToFirst == NULL)
	{
		cerr << "Cannot delete from an empty list.";
	}
	else
	{
		Node *current = ptrToFirst;
		ptrToFirst = ptrToFirst->getPtrToNext();
		delete current;
		current = NULL;
		--count;
	}
}
