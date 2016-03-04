/***********************************************************

	CASE 1: Passing a parameter whose type in the 
			function definition does not match the 
			function declaration.

***********************************************************/

//#include <iostream>
//using namespace std;
//
//void myFunction(double n); //this is DOUBLE
//
//int main( )
//{
//	double n = 3;
//
//	myFunction(n);
//
//  cout << endl;
//	system("Pause");
//  return 0;
//}
//
//void myFunction(int n) //change this to INT
//{
//	cout << n;
//}


/***********************************************************

	CASE 2: Passing a parameter by value in the 
			function declaration and by reference
			in the function definition.

***********************************************************/

//#include <iostream>
//using namespace std;
//
//void myFunction(double);
//
//int main( )
//{
//	double n = 3;
//
//	myFunction(n);
//
//  cout << endl;
//	system("Pause");
//  return 0;
//}
//
//void myFunction(double& n) //change to: (double& n)
//{
//	cout << n;
//}

/***********************************************************

	STOP! Before going to the next case, search the Internet
		  for "error LNK2019: unresolved external symbol"

***********************************************************/


/***********************************************************

	CASE 3: Forgetting to write the function declaration.

***********************************************************/
//
//#include <iostream>
//using namespace std;
//
//void myFunction(double);  //remove declaration
//
//int main( )
//{
//	double n = 3;
//
//	myFunction(n);
//
//  cout << endl;
//	system("Pause");
//  return 0;
//}
//
//void myFunction(double n) 
//{
//	cout << n;
//}


/***********************************************************

	CASE 4: Forgetting the semicolon at the end of 
			the definition of the class MyClass.

***********************************************************/

//#include "MyClass.h"
//
//#include <iostream>
//using namespace std;
//
//int main( )
//{
//	MyClass myNumber(3);
//
//	myNumber.print();
//
//  cout << endl;
//	system("Pause");
//  return 0;
//}


/***********************************************************

	CASE 5: Copying from other editors that have characters
			which are different from this editor. For example, 
			quotes in Microsoft Word.

***********************************************************/
//
//#include "MyClass.h"
////replace with 
///*#include “MyClass.h” */ 
//
//#include <iostream>
//using namespace std;
//
//int main( )
//{
//	MyClass myNumber(3);
//
//	myNumber.print();
//
//  cout << endl;
//	system("Pause");
//  return 0;
//}

/***********************************************************

	CASE 6: Forgetting to close a curly bracket anywhere
			in the class. Try: MyClass.cpp overloaded 
			constructor final bracket

***********************************************************/

//#include "MyClass.h"  
//
//#include <iostream>
//using namespace std;
//
//int main( )
//{
//	MyClass myNumber(3);
//
//	myNumber.print();
//
//  cout << endl;
//	system("Pause");
//  return 0;
//}

/***********************************************************

	CASE 7: Forgetting to include the class you are using.

***********************************************************/

//#include "MyClass.h"  //omit this
//
//#include <iostream>
//using namespace std;
//
//int main( )
//{
//	MyClass myNumber(3);
//
//	myNumber.print();
//
//  cout << endl;
//	system("Pause");
//  return 0;
//}


/***********************************************************

	CASE 8: Forgetting to include the class header in the
			class implementation.
			Remove #include "MyClass.h" in MyClass.cpp

***********************************************************/

//#include "MyClass.h"  
//
//#include <iostream>
//using namespace std;
//
//int main( )
//{
//	MyClass myNumber(3);
//
//	myNumber.print();
//
//  cout << endl;
//	system("Pause");
//  return 0;
//}


/***********************************************************

	CASE 9: Forgetting to add the class name and scope
			resolution in the function definition.
			Remove MyClass:: from the print function 
			implemented in MyClass.cpp

***********************************************************/

//#include "MyClass.h"  
//
//#include <iostream>
//using namespace std;
//
//int main( )
//{
//	MyClass myNumber(3);
//
//	myNumber.print();
//
//	cout << endl;
//	system("Pause");
//	return 0;
//}


/***********************************************************

	CASE 10: Forgetting to make a function const in both
			 the declaration and definition.
			 Remove "const" in the declaration of print().

***********************************************************/

#include "MyClass.h"  

#include <iostream>
using namespace std;

int main( )
{
	MyClass myNumber(3);

	myNumber.print();

	cout << endl;
	system("Pause");
	return 0;
}