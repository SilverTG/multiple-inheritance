#pragma once
#include "Product.h"

class Buy :
    public Product
{
    int amount;
public:
    Buy(Product p,int amount);

    void setAmount(int amount);
    int getAmount()const;

    float calcTotalPrice()const;
    float calcTotalWeight()const;

    void showInfo()const;

};

