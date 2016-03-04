#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <string>
#include <iostream>
using namespace std;

class Node
{
public:
    Node () : data(0), nextLink(NULL), previousLink(NULL) {}
    Node (int theData, Node *previous, Node *next)
            : data(theData), nextLink(next), previousLink(previous) {}
    Node *getNextLink( ) const { return nextLink; }
    Node *getPreviousLink( ) const { return previousLink; }
    int getData( ) const { return data; }
    void setData(int theData) { data = theData; }
    void setNextLink(Node *pointer) { nextLink = pointer; }
    void setPreviousLink(Node *pointer) { previousLink = pointer; }
	~Node(){}
private:
    int data;
    Node *nextLink;
    Node *previousLink;
};


class DoublyList
{
public:
	DoublyList(); 
		// constructor
	
	void insertFront(int newData);
		// insertFront - Inserts a node to the front of the list
		// @param int - The data to insert in the node

	bool search(int searchData) const;
		// search const - Searches a node with the given data
		// @param int - The data to search for
		// @return bool - Returns true if the data is found, 
		//                  false otherwise.

	void deleteNode(int deleteData);
		// deleteNode - Deletes the node that contains the given data
		// @param int - The data in the node that needs to be deleted
	
	void destroyList();
		// destroyList - Destroys the entire list

	~DoublyList();
		// destructor - Calls the function destroyList

private:
    Node *first;	// pointer to the first node on the list
    Node *last;		// pointer to the last node on the list
	int count;		// number of nodes in the list
};

#endif