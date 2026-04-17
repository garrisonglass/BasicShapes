#include "Circle.h"
#include <cmath>

Circle::Circle(double x, double y, double r, const string& n) : xCenter(x), yCenter(y), radius(r)
{
	setName(n);
	calcArea();//Calculate area when the circle is created
}

void Circle::setX(double x)
{
	xCenter = x;
}

void Circle::setY(double y)
{
	yCenter = y;
}

void Circle::setR(double r)
{
	radius = r;
	calcArea();//Recalculate area whenever the radius is updated
}

void Circle::calcArea()
{
	double a = 3.14159 * pow(radius, 2.0);
	setArea(a);
}
