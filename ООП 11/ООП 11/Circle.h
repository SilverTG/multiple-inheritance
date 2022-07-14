#pragma once
#include "Point.h"
class Circle :
    public Point
{
protected:
    double radius;
public:
    Circle(Point a,double radius);

    void setRadius(double radius);
    double getRadius()const;

    double area()const;

    void showInfo()const;
};

