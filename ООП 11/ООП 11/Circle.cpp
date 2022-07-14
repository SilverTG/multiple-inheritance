#include "Circle.h"

Circle::Circle(Point a, double radius):Point(a)
{
    this->radius = radius;
}

void Circle::setRadius(double radius)
{
    this->radius = radius;
}

double Circle::getRadius() const
{
    return radius;
}

double Circle::area() const
{
    return 3.14*pow(radius,2);
}

void Circle::showInfo() const
{
    cout << "\nRadius:" << radius
        << "\nArea: " << this->area() << endl;
        Point::showInfo();
}
