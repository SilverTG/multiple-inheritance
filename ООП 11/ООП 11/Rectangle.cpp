#include "Rectangle.h"

Rectangle::Rectangle(Point a, double width, double height) :Point(a)
{
	this->width = width;
	this->height = height;
}

void Rectangle::setWidth(double width)
{
	this->width = width;
}

double Rectangle::getWidth() const
{
	return width;
}

void Rectangle::setHeight(double height)
{
	this->height = height;
}

double Rectangle::getHeight() const
{
	return height;
}

double Rectangle::area() const
{
	return width *height;
}

void Rectangle::showInfo() const
{
	cout << "\nHeight: " << height
		<< "\nWidth: " << width
		<< "\nArea: " << this->area();
		Point::showInfo();
}
