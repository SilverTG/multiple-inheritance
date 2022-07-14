#include "MFU.h"

MFU::MFU()//:Scanner(),Printer()
{
	Scanner::setText("");
	//this->setText("");
}

void MFU::copyText(string fileName, int amount)
{
	this->scanText(fileName);
	cout << this->getText();
	this->printText(this->getText(), fileName,amount);
}
