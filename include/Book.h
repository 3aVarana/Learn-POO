#pragma once

#include <string>
#include <vector>
using namespace std;

class Author;

class Book
{
public:
	string title;
	string editorial;
	int publishYear;
	vector<Author *> authors;

	Book(string title, string editorial, int publishYear);

	void addAuthor(Author *author);

	void showInfo();
};
