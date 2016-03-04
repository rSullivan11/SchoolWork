#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() {
	width = 0.0; length = 0.0;
}

// Overloaded constructor with two parameters for width and height values.
Rectangle::Rectangle(double newWidth, double newLength) {
	width = newWidth; length = newLength;
}

// Function getWidth
double Rectangle::getWidth() const {
	return width;
}

// Function getLength
double Rectangle::getLength() const {
	return length;
}

// Function setWidth
void Rectangle::setWidth(double newWidth) {
	width = newWidth;
}

// Function setLength
void Rectangle::setLength(double newLength) {
	length = newLength;
}

// Function calculatePerimeter
double Rectangle::calcularePerimeter() const {
	return (2 * length) + (2 * width);
}

// Function calculateArea
double Rectangle::calculateArea() const {
	double area = length * width;
	return area;
}

// Function print
void Rectangle::print() const {
	cout << "Width = " << width << "\n";
	cout << "Length = " << length << "\n";
}

// Destructor
Rectangle::~Rectangle() {}