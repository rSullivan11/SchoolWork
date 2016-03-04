#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle
{
public:
	// Default constructor
	Rectangle();

	// Overloaded constructor with two parameters for width and height values.
	Rectangle(double newWidth, double newLength);

	// Function getWidth
	double getWidth() const;

	// Function getLength
	double getLength() const;

	// Function setWidth
	void setWidth(double newWidth);

	// Function setLength
	void setLength(double newLength);

	// Function calculatePerimeter
	double calcularePerimeter() const;

	// Function calculateArea
	double calculateArea() const;

	// Function print
	void print() const;

	// Destructor
	~Rectangle();

protected:
	double width;

private:
	double length;
};

#endif