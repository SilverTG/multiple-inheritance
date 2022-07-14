#include "Check.h"



Check::Check(Buy p):Buy(p)
{
}

void Check::printCheck()
{
	ofstream fout;
	fout.open(this->getName()+".txt");
	if (fout.is_open())
	{
		fout << "\nName: " << this->getName() << endl
			<< "Price: " << this->getPrice() << endl
			<< "Weight: " << this->getWeight() << endl
			<< "Amount: " << this->getAmount() << endl
			<< "Total price: " << this->calcTotalPrice() << endl
			<< "Total weight: " << this->calcTotalWeight() << endl;
	}
	else cout << "\nFile error!\n";
}
