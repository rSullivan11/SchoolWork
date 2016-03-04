/*
	Smith, Jane
	CS A250
	January 1, 2025
	
	Program to compute the perimeter and the area of a rectangle.
*/

#include <iostream>
#include <iomanip> // to format decimals
using namespace std;

// NOTE: Function declarations must be written before the main() function

void welcomeMessage();
	// welcomeMessage - Displays a message when starting the program.

void setDimensions(double& height, double& width);
	// setDimensions - Asks the user to enter the rectangle
	//					heigth and width.
	// @param double& - The height of the rectangle.
	// @param double& - The width of the rectangle.

double perimeter(double height, double width);
	// perimeter - Computes the perimeter of a rectangle using
	//				given height and width.
	// @param double - The height of the rectangle.
	// @param double - The width of the rectangle.
	// @return double - The perimeter of the rectangle

double area(double height, double width);
	// area - Computes the area of a rectangle using
	//				given height and width.
	// @param double - The height of the rectangle.
	// @param double - The width of the rectangle.
	// @return double - The perimeter of the rectangle.

int main()
{
	welcomeMessage();
	
	double height = 0.0,	// NOTE: Always initialize variables
		    width = 0.0;	// NOTE: Improve readability by writing 0.0 instead of .0
							//		 and 3.0 instead of 3
	
	setDimensions(height, width);

	// NOTE: If you are calculating the perimeter and area only once, 
	//		there is NO need to create additional variables to store
	//		the perimeter and the area.

	cout << fixed << showpoint << setprecision(2);	// format decimals

	cout << "\nPerimeter = " << perimeter(height, width)
		<< "\nArea = " << area(height, width) << endl;

	// NOTE: At the end of the main() function you 
	//		are required always to add these 3 statements

	cout << endl;
	system("Pause");
	return 0;
}

void welcomeMessage()
{
	// NOTE: Split long sentences to avoid horizontal scrolling

	cout << "*** Program to calculate the area and "
		<< " perimeter of a rectangle. ***\n\n";
}

void setDimensions(double& height, double& width)
{
	cout << "Enter the height and the width of the rectangle: ";
	cin >> height >> width;
}

double perimeter(double height, double width)
{
	// NOTE: Simplify AS LONG AS it is easy to read

	return (2 * (height + width));
}

double area(double height, double width)
{
	// NOTE: Simplify AS LONG AS it is easy to read

	return (height * width);
}
