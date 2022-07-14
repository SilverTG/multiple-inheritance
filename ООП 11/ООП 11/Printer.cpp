#include "Printer.h"

void Printer::printText(string text, string fileName, int amount)
{
	ofstream fout;
	for (int i = 0; i < amount; i++) {
		fout.open(to_string(i+1)+" copy "+fileName);
		if (fout.is_open()) {

			fout << text;

			fout.close();
		}
		else cout << "\nFile error!\n";
	}
}
