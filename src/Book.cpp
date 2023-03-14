#include "Book.h"

Book::Book(string title)
{
    this->title = title;
    this->genre = BookGenre::unknown;
    this->authors = vector<Author *>();
}

Book::Book(string title, BookGenre genre)
{
    this->title = title;
    this->genre = genre;
    this->authors = vector<Author *>();
}

Book::Book(string title, BookGenre genre, vector<Author *> authors)
{
    this->title = title;
    this->genre = genre;
    this->authors = authors;
}

string Book::getTitle()
{
    return title;
}

string Book::getEditorial()
{
    return editorial;
}

BookGenre Book::getGenre()
{
    return genre;
}

string Book::getGenreTitle()
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

void Book::addAuthor(Author *author)
{
    authors.push_back(author);
}

void Book::showInfo()
{
    cout << "Book's title: " << title << endl;
    cout << "Book's editorial: " << editorial << endl;
    cout << "Book's genre: " << getGenreTitle() << endl;
    cout << "Athors:\n";
    for (Author *author : authors)
    {
        cout << author->getName() << endl;
    }
    cout << endl;
}