#pragma once
#include "Point.h"
class Triangle :
    public Point
{
protected:
    double side1;
    double side2;
    double angle;
public:
    Triangle(Point a,double side1,double side2,double angle);

    void setSide1(double side1);
    double getSide1()const;

    void setSide2(double side2);
    double getSide2()const;

    void setAngle(double angle);
    double getAngle()const;

    double area()const;

    void showInfo();
};

