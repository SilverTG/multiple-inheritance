#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Point
{
protected:
	double x;
	double y;
public:
	Point();
	Point(double x,double y);

	void setX(double x);
	double getX()const;

	void setY(double y);
	double getY()const;

	void showInfo()const;

	double area()const;//просто возвращаю ноль ибо не понимаю какую площадь может занимать 1 точка
};

