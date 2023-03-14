#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book;

class Author
{
private:
    string fullname;
    vector<Book *> books;

public:
    Author(string fullname);

    Author(string fullname, vector<Book *> books);

    void addBook(Book *book);

    string getName();

    void showInfo();
};