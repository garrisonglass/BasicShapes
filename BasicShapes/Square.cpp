#include "Square.h"

Square::Square(double s, const string& n) : Rectangle(s, s, n), side(s) 
{
	setName(n);
}

void Square::setSide(double s)
{
	side = s;
	//Updates dimensions
	setLength(s);
	setWidth(s);
}
