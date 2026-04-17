//loop to print the area of each shape. That was in main()  
#include <iostream>
#include "BasicShape.h"
#include <iomanip>

using namespace std;

void printShapeAreas(BasicShape* shapes[], int size) 
{
for (int i = 0; i < size; i++)
  {
	cout << left << setw(18) << (shapes[i]->getName() + " area: ")
		 << setw(10)
		 << shapes[i]->getArea() << "\n\n";
  }

}