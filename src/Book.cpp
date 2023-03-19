#include "Book.h"
#include <iostream>

Book::Book(string title, string editorial, int publishYear)
{
	this->title = title;
	this->editorial = editorial;
	this->publishYear = publishYear;
}

void Book::addAuthor(Author* author)
{
	authors.push_back(author);
}

void Book::showInfo()
{
	cout << "Book" << endl;
	cout << title << endl;
	cout << editorial << endl;
	cout << publishYear << endl;
	for (Author* a : authors)
	{
		cout << a->fullname << endl;
	}
}
