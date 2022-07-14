#pragma once
#include <iostream>
#include <string>

using namespace std;

class Product
{
	string name;
	float price;
	float weight;
public:
	Product();
	Product(string name,float price,float weight);

	void setName(string name);
	string getName()const;

	void setPrice(float price);
	float getPrice()const;

	void setWeight(float weight);
	float getWeight()const;

	void showInfo()const;
};

