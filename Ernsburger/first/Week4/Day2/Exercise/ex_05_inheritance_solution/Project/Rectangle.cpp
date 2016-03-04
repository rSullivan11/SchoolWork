#include "Rectangle.h"

Rectangle::Rectangle()
{
	width = 0.0;
	length = 0.0;
}

Rectangle::Rectangle(double newWidth, double newLength)
{
	width = newWidth;
	length = newLength;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getLength() const
{
	return length;
}

void Rectangle::setWidth(double newWidth)
{
	width = newWidth;
}

void Rectangle::setLength(double newLength)
{
	length = newLength;
}

double Rectangle::calculatePerimeter() const
{
	return (2 * width + 2 * length);
}

double Rectangle::calculateArea() const
{
	return (width * length);
}

void Rectangle::print() const
{
	cout << "Width = " << width 
		<< "\nLenght = " << length << endl;
}

Rectangle::~Rectangle()
{}



