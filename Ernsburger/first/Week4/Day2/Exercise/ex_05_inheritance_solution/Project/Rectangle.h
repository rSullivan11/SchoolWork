#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle 
{
public:
	Rectangle();
	Rectangle(double newWidth, double newLength);

	double getWidth() const;
	double getLength() const;

	void setWidth(double newWidth);
	void setLength(double newLength);
	
	double calculatePerimeter() const;
	double calculateArea() const;

	void print() const;

	~Rectangle();

protected:
	double width;

private:
	double length;
};

#endif