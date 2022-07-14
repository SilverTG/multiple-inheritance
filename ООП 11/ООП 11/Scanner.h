#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class Scanner
{
	string text;
public:
	Scanner();

	void setText(string text);
	string getText()const;

	void scanText(string fileName);
};

