#pragma once

#include <string>
#include <vector>
#include "Author.h"
using namespace std;

class Book
{
public:
	string title;
	string editorial;
	int publishYear;
	vector<Author*> authors;

	Book(string title, string editorial, int publishYear);

	void addAuthor(Author* author);

	void showInfo();
};

