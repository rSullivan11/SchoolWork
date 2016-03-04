#include "AnyList.h"

	//constructor
AnyList::AnyList()
{
	first = NULL;
	count = 0;
}

	//createList
void AnyList::createList()
{	
	/*
		Question 1
		Declare a pointer pNode that points to objects of class Node.
	*/


	/*
		Question 2
		Use the default constructor to create a new node and make 
		pNode point to it.
	*/


	/*
		Question 3
		What is the value of the data stored in the node pointed by pNode?
		
		Answer: 
	*/

	/*
		Question 4
		Store integer 2 in the node you just created.
	*/
	

	/*
		Question 5
		Make the node you just created the first node in the list.
	*/
	

	/*
		Did you update the count?
	*/

	/*
		Question 6
		Using pointer pNode, create another Node, but this time 
		use the overloaded constructor and assign to the member 
		variable data the value 4 and to the pointer next the 
		value NULL.
	*/


	/*
		Question 7
		Make the first node of your list point to the newly
		created node, and then make pNode point to the first node.
	*/


	/*
		Did you forget to increment the count?
	*/


	/*
		Question 7
		What does your list look like now?

		Answer: (first)
	*/

	/*
		Question 8
		Move pointer pNode forward to the next node.


	*/

	/*
		Question 9
		Using only pointer pNode add a new node to the 
		back of the list, storing the value 6, and 
		increment the member variable member count.
		Use only a total of 2 statements.

	*/


	/*
		Question 10
		Using only pointer pNode add three additional 
		nodes to the list, so that the list becomes:

		(first) 2 4 6 3 8 9

	*/


	/*
		Question 11
		Delete the node that stores 4 (second node), 
		without creating additional pointers.

	*/

	/*
		Question 12
		Now your list looks like this:

		(first) 2 6 3 8 9

		Using a while loop, print all elements in the 
		list, except the last, without creating any 
		new pointers and without using the member 
		variable count.

	*/


	/*
		Question 13
		
		Your list still looks like this:

		(first) 2 6 3 8 9

		To which node is pointer pNode pointing?

		Answer: 
	*/

	/*
		Question 14

		Your list still looks like this:

		(first) 2 6 3 8 9

		Delete the first node.
	*/

	/*
		Did you update the count?
	*/

	/*
		Question 15

		After deleting the first node, your list looks like this:

		first 6  3  8  9

		In a single statement, add a new node in front of the list, 
		making it the first node of the list. Your node should 
		store the value 1. Use a second statement to update the 
		member variable count.

	*/

	/*

		Check the debugger to see if your list looks as expected.
	*/
}


	//destroyList
void AnyList::destroyList()
{ 
    Node  *current;
	
    while (first != NULL)
    {
        current = first;
        first = first->getNext();
        delete current;
		current = NULL;
    }

	count = 0;
}

	//destructor
AnyList::~AnyList()
{
	destroyList();
}