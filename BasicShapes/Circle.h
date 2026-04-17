#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"

class Circle : public BasicShape
{
private:
	
    double xCenter;
	double yCenter;
    double radius;

public:
    Circle(double x, double y, double r, const string& n = "Circle");

    //Getters
    double getX() const { return xCenter; }
    double getY() const { return yCenter; }
    double getR() const { return radius;  }

    //Setters
    void setX(double x); 
    void setY(double y); 
    void setR(double r); 

    void calcArea() override;
};

#endif