#pragma once
#include "Buy.h"
#include <fstream>
class Check :
    public Buy
{
public:
    Check(Buy p);
    void printCheck();
};

