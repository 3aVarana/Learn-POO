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
    Author(string fullname) : fullname(fullname), books(vector<Book *>())
    {
    }

    Author(string fullname, vector<Book *> books) : fullname(fullname), books(books)
    {
    }

    void addBook(Book *book)
    {
        books.push_back(book);
    }

    string getName()
    {
        return fullname;
    }

    void showInfo();
};