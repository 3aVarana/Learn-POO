#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Author.h"
using namespace std;

enum BookGenre
{
    fiction,
    historic,
    educative,
    unknown
};

class Book
{
private:
    string title;
    string editorial;
    BookGenre genre;
    vector<Author *> authors;

public:
    Book(string title);
    Book(string title, BookGenre genre);
    Book(string title, BookGenre genre, vector<Author *> authors);

    string getTitle();
    string getEditorial();
    BookGenre getGenre();
    string getGenreTitle();
    void addAuthor(Author *author);
    void showInfo();
};
