#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H

#include <cmath>>

#include "Rectangle.h"

// Class definition that inherits from the Rectangle class
class Parallelepiped : public Rectangle
{
public:
	// Default constructor
	Parallelepiped();

	// Overloaded constructor with three parameters: width, length, height.
	Parallelepiped(double newWidth, double newLength, double newHeight);

	// Function getHeight
	double getHeight() const;

	// Function setHeight
	void setHeight(double newHeight);

	// Function setDimensions
	void setDimensions(double newWidth, double newLength, double newHeight);

	// Function calculateVolume
	double calculateVolume() const;

	// Function print
	void print() const;

	// Destructor
	~Parallelepiped();

private:
	double height;	// This is the ONLY member variable in this class.
};

#endif
