// BasicShapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main()
{
	BasicShape* shapes[3];

	shapes[0] = new Circle(0, 0, 5, "Circle");
	shapes[1] = new Rectangle(10, 5, "Rectangle");
	shapes[2] = new Square(5, "Square");

	cout << "Shape areas:" << "\n\n"; 

	for (int i = 0; i < 3; i++) {
		cout << shapes[i]->getName() << " area: " 
			 << shapes[i]->getArea() << "\n\n";
	}

	for (int i = 0; i < 3; i++) {
		delete shapes[i];
	}

	return 0;
}