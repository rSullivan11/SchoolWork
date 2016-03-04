#include "AnyList.h"

AnyList::AnyList()
{
	first = NULL;
}

void AnyList::insertFront(int newData)
{
	Node *newNode;
	newNode->setData(newData);
	newNode->setLink(first);
	first = newNode;
}

void deleteNode(int deleteData)
{
	if (count == 0)
		cerr << "Cannot delete from an empty list.\n";
	Node *current;
	Node *temp;
	bool found = false;
	if (first->getData() = deleteData)
	{
		first = first->getLink();
		current = first;
		delete current;
		current = NULL;
		found = true;
	}
	else
	{
		temp = first;
		current = first;

		while ((current != NULL) || (!found))
		{
			if(current->getData() == deleteData)
			{
				temp->setLink(current->getLink());
				delete current;
				current = NULL;
				found = true;
			}
			else
			{
				current = current->getLink();
			}
		}
	}
	if (!found)
		cerr << "Item to be deleted is not in the list." << endl;
}

void AnyList::print()
{
	Node *current;
	current = first;

	while (current->getLink() != NULL)	{
		cout << current->getData() << " ";
		current = current->getLink();

}

void AnyList::destroyList()
{
	Node  *temp = NULL;

    while (first != NULL)
    {
        first = first->getLink();
        delete first;
		temp = NULL;
    }
}

void AnyList::~AnyList()
{
	destroyList();
}
