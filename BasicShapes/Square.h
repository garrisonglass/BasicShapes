#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle
{
private:
		double side;
public:
	Square(double s, const string& n = "Square");

	//Getter
	double getSide() const { return side; }
	//Setter
	void setSide(double s);
	
};
#endif
