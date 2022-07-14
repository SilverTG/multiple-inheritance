#include "Book.h"

Book::Book(string author, string name, Date publication)
{
    this->author = author;
    this->name = name;
    this->publication = publication;
    this->ibsn = rand() % 1001+1000;
}

void Book::setAuthor(string author)
{
    this->author = author;
}

string Book::getAuthor() const
{
    return author;
}

void Book::setName(string name)
{
    this->name = name;
}

string Book::getName() const
{
    return name;
}

void Book::setPublication(Date publication)
{
    this->publication = publication;
}

Date Book::getPublication() const
{
    return publication;
}

long Book::getIbsn() const
{
    return ibsn;
}

void Book::showInfo() const
{
    cout << "\nAuthor: " << author
        << "\nName: " << name
        << "\nPublication date: " << publication
        << "\nISBN: " << ibsn;
}
