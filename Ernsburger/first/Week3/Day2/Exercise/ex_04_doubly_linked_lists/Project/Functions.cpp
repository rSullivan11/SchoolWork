/*
 * Sullivan, Ryan
 * CS A250
 * September 21, 2015
 *
 * Exercise 4
 */

#include "DoublyList.h"

 // insertInOrder
void DoublyList::insertInOrder(int insertItem) {
	if (count == 0) {
		Node *newNode;
		newNode = new Node;
		newNode->setData(insertItem);

		first = newNode;
		last = newNode;
		++count;
	}
	else {
		if (first->getData() > insertItem) {
			insertFront(insertItem);
		}
		else {
			Node *newNode;
			newNode = new Node;
			newNode->setData(insertItem);
			if (insertItem > last->getData()) {
				newNode->setPreviousLink(last);

				last->setNextLink(newNode);
				last = newNode;
				++count;
			}
			else {
				Node *temp = first;
				do temp = temp->getNextLink();
				while (temp->getData() < insertItem);

				newNode->setNextLink(temp);
				newNode->setPreviousLink(temp->getPreviousLink());

				temp->setPreviousLink(newNode);
				temp = newNode->getPreviousLink();
				temp->setNextLink(newNode);
				++count;
			}
		}
	}
}

// print
void DoublyList::print() const {
	if (first == NULL) cerr << "List is empty.";
	else {
		Node *current;
		current = first;

		while (current != NULL) {
			cout << current->getData() << " ";
			current = current->getNextLink();
		}
	}
}

// reversePrint
void DoublyList::reversePrint() const {
	if (first == NULL) cerr << "List is empty.";
	else {
		Node *current;
		current = last;

		while (current != NULL) {
			cout << current->getData() << " ";
			current = current->getPreviousLink();
		}
	}
}

// front
int DoublyList::front() const {
	if (first != NULL) return first->getData();
	else return 1;
}

// back
int DoublyList::back() const {
	if (last != NULL) return last->getData();
	else return 1;
}