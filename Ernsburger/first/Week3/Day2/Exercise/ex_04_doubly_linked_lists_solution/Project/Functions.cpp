/*
	Name header
*/

#include "DoublyList.h"

//insertInOrder
void DoublyList::insertInOrder(int insertItem)
{
	Node *newNode;      //pointer to create a node
	newNode = new Node; //create the node
	newNode->setData(insertItem);  //store the new item in the node

	/*
		If using the overloaded constructor of the class Node,
		then creating a node can be simplified to one statement only:

		Node *newNode = new Node(insertItem, NULL, NULL);
	*/

	//if the list is empty, the new node will be the first and only node
	if (first == NULL)
	{
		first = newNode;
		last = newNode;
	}
	//else if the new node needs to be inserted before the first node
	else if (insertItem < first->getData())
	{
		newNode->setNextLink(first);
		first->setPreviousLink(newNode);
		first = newNode;
	}
	//else the new node needs to be inserted somewhere after the first node
	else
	{
		Node *current;      //pointer to traverse the list
		bool found = false;

		current = first;

		while (current != NULL && !found) //search the list
		{
			if (current->getData() >= insertItem)
				found = true;
			else
				current = current->getNextLink();
		}

		//insert the new node somewhere in the middle of the list
		if (current != NULL)
		{
			newNode->setPreviousLink(current->getPreviousLink());
			newNode->setNextLink(current);
			current->getPreviousLink()->setNextLink(newNode);
			current->setPreviousLink(newNode);
		}
		//insert newNode at the end of the list
		else
		{
			last->setNextLink(newNode);
			newNode->setPreviousLink(last);
			last = newNode;
		}
	}

	++count;
	newNode = NULL;
}

//print
void DoublyList::print() const
{
	Node *current; //pointer to traverse the list

	current = first;  //set current to point to the first node

	while (current != NULL)
	{
		cout << current->getData() << "  ";  //output info
		current = current->getNextLink();
	}
}

//reversePrint
void DoublyList::reversePrint() const
{
	Node *current; //pointer to traverse
	//the list

	current = last;  //set current to point to the
	//last node

	while (current != NULL)
	{
		cout << current->getData() << "  ";
		current = current->getPreviousLink();
	}
}

//front
int DoublyList::front() const
{
	if (first == NULL)
	{
		cerr << "List is empty. Cannot access front node." << endl;
		exit(1);
	}

	return first->getData();
}

//back
int DoublyList::back() const
{
	if (first == NULL)
	{
		cerr << "List is empty. Cannot access back node." << endl;
		exit(1);
	}

	return last->getData();
}
