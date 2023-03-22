#include "Author.h"
#include <iostream>
using namespace std;

Author::Author(string fullname, string nationality)
{
	this->fullname = fullname;
	this->nationality = nationality;
}

void Author::addBook(Book *book)
{
	books.push_back(book);
}

void Author::showInfo()
{
	cout << "Author" << endl;
	cout << fullname << endl;
	cout << nationality << endl;
	for (Book *b : books)
	{
		cout << b->title << endl;
	}
}

void Author::setFullname(string newName)
{
	this->fullname = newName;
}

void Author::setNationality(string newNationaliy)
{
	this->nationality = newNationaliy;
}

void Author::updateInfo(string newName, string newNationality)
{
	this->fullname = newName;
	this->nationality = newNationality;
}
