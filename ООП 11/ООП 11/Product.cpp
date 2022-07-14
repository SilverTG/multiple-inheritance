#include "Product.h"

Product::Product()
{
    name = "Coffee";
    price = 50;
    weight = 0.3;
}

Product::Product(string name, float price, float weight)
{
    this->name = name;
    this->price = price;
    this->weight = weight;
}

void Product::setName(string name)
{
    this->name = name;
}

string Product::getName() const
{
    return name;
}

void Product::setPrice(float price)
{
    this->price = price;
}

float Product::getPrice() const
{
    return price;
}

void Product::setWeight(float weight)
{
    this->weight = weight;
}

float Product::getWeight() const
{
    return weight;
}

void Product::showInfo() const
{
    cout << "\nName: " << name
        << "\nPrice: " << price
        << "\nWeight: " << weight << endl;
}
