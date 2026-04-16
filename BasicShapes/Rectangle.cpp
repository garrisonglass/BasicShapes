#include "Rectangle.h"

Rectangle::Rectangle(double l, double w, const string& n) : length(l), width(w)
{
	setName(n);
	calcArea();//Calculate area when the rectangle is created
}

void Rectangle::setLength(double l)
{
	length = l;
	calcArea();//Recalculate area whenever the length is updated
}

void Rectangle::setWidth(double w)
{
	width = w;
	calcArea();//Recalculate area whenever the width is updated
}

void Rectangle::calcArea() { setArea(length * width); }