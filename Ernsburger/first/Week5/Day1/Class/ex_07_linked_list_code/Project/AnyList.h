#ifndef ANYLIST_H
#define ANYLIST_H

#include<iostream>
#include <string>		//Need to include for NULL			
using namespace std;

class Node
{
public:
	Node() : data(0), next(NULL) {}
	Node(int theData, Node *newNext) : data(theData), next(newNext){}
	Node* getNext() const { return next; }
	int getData() const { return data; }
	void setData(int theData) { data = theData; }
	void setNext(Node *newNext) { next = newNext; }
	~Node(){}
private:
    int data;		
    Node *next;	//pointer that points to next node
};


class AnyList
{
public:
	AnyList();	

	void createList();

	void destroyList();
	~AnyList();

private:
	Node *first;	//pointer to point to the first node in the list
	int count;		//keeps track of number of nodes in the list
};

#endif