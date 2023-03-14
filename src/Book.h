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
    Book(string title)
    {
        this->title = title;
        this->genre = BookGenre::unknown;
        this->authors = vector<Author *>();
    }
    Book(string title, BookGenre genre)
    {
        this->title = title;
        this->genre = genre;
        this->authors = vector<Author *>();
    }

    Book(string title, BookGenre genre, vector<Author *> authors)
    {
        this->title = title;
        this->genre = genre;
        this->authors = authors;
    }

    string getTitle()
    {
        return title;
    }

    string getEditorial()
    {
        return editorial;
    }

    string getGenre()
    {
        switch (genre)
        {
        case fiction:
            return "Fiction";
            break;

        case historic:
            return "Historic";
            break;

        case educative:
            return "Educative";
            break;

        default:
            return "Unknown";
        }
    }

    void addAuthor(Author *author)
    {
        authors.push_back(author);
    }

    void showInfo()
    {
        cout << "Book's title: " << title << endl;
        cout << "Book's editorial: " << editorial << endl;
        cout << "Book's genre: " << getGenre() << endl;
        cout << "Athors:\n";
        for (Author *author : authors)
        {
            cout << author->getName() << endl;
        }
        cout << endl;
    }
};
