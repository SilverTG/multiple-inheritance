#include "Point.h"

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

void Point::setX(double x)
{
    this->x = x;
}

double Point::getX() const
{
    return x;
}

void Point::setY(double y)
{
    this->y = y;
}

double Point::getY() const
{
    return y;
}

void Point::showInfo() const
{ 
    cout << "\nX: " << x <<" Y: " << y << endl;
}

double Point::area() const//просто возвращаю ноль ибо не понимаю какую площадь может занимать 1 точка
{
    return 0.0;
}
