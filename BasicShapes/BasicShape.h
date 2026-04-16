#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string>
using namespace std;

class BasicShape
{
	private:
		double area;
		string name;	
public:
	BasicShape() : area(0.0), name("Basic Shape") {}

	//Getter
	double getArea() const { return area; }
	string getName() const { return name; }

	//Setter
	void setArea(double a) { area = a; }
	void setName(const string& n) { name = n; }

	//Virtual function to calculate area (to be overridden by derived classes)	
	virtual void calcArea() = 0; // Pure virtual function
	//Virtual destructor
	virtual ~BasicShape() {}

};

#endif
