/*
	FirstName LastName
	September 2, 2010
	CS A250

	Example: Vectors
*/

#include <iostream>
#include <vector>
using namespace std;

void fillVector(vector<int>&);

void printVector(const vector<int>&);

int main( )
{
	vector<int> myVector;

	fillVector(myVector);

	printVector(myVector);
	
	cout << endl;
	system("Pause");
    return 0;
}

void fillVector(vector<int>& v)
{
	cout << "Enter a list of positive integers.\n"
		<< "Place a negative number at the end.\n";

	int next;
	cin >> next;
	while (next > 0)
	{
		v.push_back(next);
		cout << next << " added => ";
		cout << "v.size() = " << v.size() << endl;
		cin >> next;
	}
}

void printVector(const vector<int>& v)
{
	cout << "\nVector elements: ";

	if (v.empty())
		cout << "No elements in the vector.";
	else
	{
		unsigned int vectorSize = v.size();

		for (unsigned int i = 0; i < vectorSize; ++i)
			cout << v[i] << " ";
	}
}

