#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape
{
private:
	double length;
	double width;
public:
	Rectangle(double l, double w, const string& n = "Rectangle");

	// Getters
	double getLength() const { return length; }
	double getWidth() const { return width; }
	// Setters
	void setLength(double l);//Recalculate area when length is updated
	void setWidth(double w);//Recalculate area when width is updated
	//Override the calcArea method to calculate the area of the rectangle
	void calcArea() override;
};
#endif
