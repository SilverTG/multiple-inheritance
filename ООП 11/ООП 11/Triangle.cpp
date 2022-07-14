#include "Triangle.h"

Triangle::Triangle(Point a, double side1, double side2, double angle):Point(a)
{
    this->side1 = side1;
    this->side2 = side2;
    this->angle = angle;
}

void Triangle::setSide1(double side1)
{
    this->side1 = side1;
}

double Triangle::getSide1() const
{
    return side1;
}

void Triangle::setSide2(double side2)
{
    this->side2 = side2;
}

double Triangle::getSide2() const
{
    return side2;
}

void Triangle::setAngle(double angle)
{
    this->angle = angle;
}

double Triangle::getAngle() const
{
    return angle;
}

double Triangle::area() const
{
    return 0.5*side1*side2*sin(angle);
}

void Triangle::showInfo()
{
    cout << "\n1st side: " << side1
        << "\n2nd side: " << side2
        << "\nAngle: " << angle
        << "\nArea: " << this->area() << endl;
    Point::showInfo();
}
