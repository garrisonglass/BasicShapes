// BasicShapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"


using namespace std;
void printShapeAreas(BasicShape* shapes[], int size);

int main()
{
	BasicShape* shapes[3];

	shapes[0] = new Circle(0, 0, 5, "Circle");
	shapes[1] = new Rectangle(10, 5, "Rectangle");
	shapes[2] = new Square(5, "Square");
	
	cout << "Shape areas Test 1" << "\n\n";
	
	printShapeAreas(shapes, 3);
	//verify that areas are updated when dimensions change
	shapes[0] = new Circle(0, 0, 10, "Circle");
	shapes[1] = new Rectangle(10, 10, "Rectangle");
	shapes[2] = new Square(10, "Square");
	
	cout << "Shape areas Test 2" << "\n\n";

	printShapeAreas(shapes, 3);

	for (int i = 0; i < 3; i++) { delete shapes[i]; }

	return 0;
}