#pragma once
#include "Printer.h"
#include "Scanner.h"

class MFU :
    public Printer,
    public Scanner
{
public:
    MFU();

    void copyText(string fileName,int amount = 1);
};

