#include "Buy.h"

Buy::Buy(Product p, int amount):Product(p)
{  
    this->amount = amount;
}

void Buy::setAmount(int amount)
{
    this->amount = amount;
}

int Buy::getAmount() const
{
    return amount;
}

float Buy::calcTotalPrice() const
{
    return this->getPrice() * amount;
}

float Buy::calcTotalWeight() const
{
   
    return this->getWeight() * amount;
}

void Buy::showInfo() const
{
    Product::showInfo();
    cout << "\nAmount: " << amount
        << "\nTotal price: " << calcTotalPrice()
        << "\nTotal weight: " << calcTotalWeight() << endl;
}
