#pragma once

#include <string>
#include <vector>
#include "Book.h"
using namespace std;

class Author
{
public:
	vector<Book *> books;
	string fullname, nationality;

	Author(string fullname, string nationality);

	void addBook(Book *book);

	void showInfo();

	void setFullname(string newName);
	void setNationality(string newNationaliy);

	void updateInfo(string newName, string newNationality);
};
