/*
 * Sullivan, Ryan
 * September 23, 2015
 *
 * Exercise 5
 */
#include "Parallelepiped.h"

 // Default constructor
Parallelepiped::Parallelepiped() {
	height = 0;
}

// Overloaded constructor with three parameters: width, length, height.
Parallelepiped::Parallelepiped(double newWidth, double newLength, double newHeight) {
	width = newWidth; height = newHeight;
	setLength(newLength);
}

// Function getHeight
double Parallelepiped::getHeight() const {
	return height;
}

// Function setHeight
void Parallelepiped::setHeight(double newHeight) {
	height = newHeight;
}

// Function setDimensions
void Parallelepiped::setDimensions(double newWidth, double newLength, double newHeight) {
	width = newWidth; height = newHeight;
	setLength(newLength);
}

// Function calculateVolume
double Parallelepiped::calculateVolume() const {
	return abs(height * (width * Rectangle::getLength()));
}

// Function print
void Parallelepiped::print() const {
	Rectangle::print();
	cout << endl;

	cout << "Base area: " << Rectangle::calculateArea() << "\n";
	cout << "Base Perimeter: " << Rectangle::calcularePerimeter() << "\n";
	cout << "Parallelepiped height: " << height << "\n";
	cout << "Parallelepiped volume: " << calculateVolume() << "\n";
}

// Destructor
Parallelepiped::~Parallelepiped() {}
