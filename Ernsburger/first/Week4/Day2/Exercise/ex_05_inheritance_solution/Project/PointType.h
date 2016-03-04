#ifndef POINTTYPE_H
#define POINTTYPE_H

#include <iostream>

using namespace std;

class PointType
{
public:
	PointType();
	PointType(double x, double y);

	double getX() const;
	double getY() const;

	void setPoint(double x, double y);
	void print() const;

    ~PointType();

protected:
	double xCoordinate;
	double yCoordinate;
};

#endif


