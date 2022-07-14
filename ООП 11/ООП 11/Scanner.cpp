#include "Scanner.h"

Scanner::Scanner()
{
    text = "Empty!";
}

void Scanner::setText(string text)
{
    this->text = text;
}

string Scanner::getText() const
{
    return text;
}

void Scanner::scanText(string fileName)
{
    ifstream fin;
    fin.open(fileName);
    if (fin.is_open())
    {
        text = "";
        string tmp;
        while (!fin.eof()) 
        {
            getline(fin, tmp);
            text += tmp + "\n";
        }
        fin.close();
    }
    else cout << "\nFile error!\n";
}
