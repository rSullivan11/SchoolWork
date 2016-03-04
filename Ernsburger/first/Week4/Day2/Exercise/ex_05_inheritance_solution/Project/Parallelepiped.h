#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H

#include "Rectangle.h"

class Parallelepiped : public Rectangle
{
public:
	Parallelepiped();
	Parallelepiped(double newWidth, double newLength, 
		double newHeight);
	
	double getHeight() const;

	void setHeight(double newHeight);
	void setDimensions(double newWidth, double newLength, 
		double newHeight);
	
	double calculateVolume() const;

	void print() const; 
	
	~Parallelepiped();

private:
	double height;
};

#endif