#pragma once
#include <iostream>
#include <string>
#include "Date.h"
#include <ctime>

using namespace std;

class Book
{
protected:
	string author;
	string name;
	Date publication;
	long ibsn; //generate random

public:
	Book(string author,string name,Date publication);

	void setAuthor(string author);
	string getAuthor()const;

	void setName(string name);
	string getName()const;

	void setPublication(Date publication);
	Date getPublication()const;

	long getIbsn()const;

	void showInfo()const;

};

