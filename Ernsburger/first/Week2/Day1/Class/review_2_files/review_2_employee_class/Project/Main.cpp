#include <iostream>
#include <string>

#include "Employee.h"

using namespace std;

int main()
{
	cout << "CLASS EMPLOYEE\n\n";

	cout << "\n*** TEST: Default constructor / function print ***\n\n";

	// Create an object of the class Employee using the default constructor
	Employee bob;

	// Print obj bob	
	bob.print();
	
	cout << "\n*** TEST: Functions setName / setID / print ***\n\n";

	// Set information to object bob	
	bob.setName("Bob");
	bob.setID(111);

	// Print obj bob
	bob.print();

	cout << "\n*** TEST: Overloaded constructor / function print ***\n\n";
	
	// Create an object of the class Employee using the overloaded constructor
	Employee jane("Jane",222);

	// Print obj jane
	jane.print();

	cout << "\n*** TEST: Functions setID / print ***\n\n";
	
	// Change object's ID to 333
	jane.setID(333);

	// Print obj jane
	jane.print();

    cout << endl;
    system("Pause");
    return 0;
}
