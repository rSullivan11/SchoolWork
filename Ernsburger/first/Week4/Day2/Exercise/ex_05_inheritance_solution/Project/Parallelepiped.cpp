#include "Parallelepiped.h"

Parallelepiped::Parallelepiped()
{
	height = 0.0;
}

Parallelepiped::Parallelepiped(double newWidth, double newLength,
	double newHeight) : Rectangle(newWidth, newLength)
{
	height = newHeight;
}

double Parallelepiped::getHeight() const
{
	return height;
}

void Parallelepiped::setHeight(double newHeight)
{
	height = newHeight;
}

void Parallelepiped::setDimensions(double newWidth, double newLength,
	double newHeight)
{
	width = newWidth;
	setLength(newLength);
	height = newHeight;
}

double Parallelepiped::calculateVolume() const
{
	return (getLength() * width * height);
}

void Parallelepiped::print() const
{
	Rectangle::print();
	cout << endl;

	cout << "Base area: " << calculateArea() << endl;
	cout << "Base Perimeter: " << calculatePerimeter() << endl;

	cout << "Parallelepiped height: " << height << endl;
	cout << "Parallelepiped volume: " << calculateVolume() << endl;
}

Parallelepiped::~Parallelepiped()
{}


