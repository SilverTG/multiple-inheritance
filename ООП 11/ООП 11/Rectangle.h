#pragma once
#include "Point.h"
class Rectangle :
    public Point
{
protected:
    double width;
    double height;
public:
    Rectangle(Point a,double width,double height);

    void setWidth(double width);
    double getWidth()const;

    void setHeight(double height);
    double getHeight()const;

    double area()const;

    void showInfo()const;
};

