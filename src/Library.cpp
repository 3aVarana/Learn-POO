#include "Library.h"
#include <iostream>
using namespace std;

Library::~Library()
{
    for (Author *a : authors)
    {
        delete a;
    }
}

void Library::loadData()
{
    Author *author1 = new Author("Edgar Allan Poe", "British");
    authors.push_back(author1);

    authors.push_back(new Author("Daniel Asin", "Colombian"));
    authors.push_back(new Author("Gabiel Garcia Marquez", "Spanish"));
    authors.push_back(new Author("Jose Miguel", "Mexican"));

    Book book1("The Red Death", "Santillana", 1990);
    book1.addAuthor(authors[0]);
    book1.addAuthor(authors[1]);
    Book book2("Dracula", "Santillana", 2000);
    book2.addAuthor(authors[2]);
    Book book3("Sherlock Holmes", "Mc Grew", 1995);
    book3.addAuthor(authors[1]);
    Book book4("American Dinasty", "La Salle", 2010);
    book4.addAuthor(authors[1]);
    book4.addAuthor(authors[2]);
    book4.addAuthor(authors[3]);

    books.push_back(book1);
    books.push_back(book2);
    books.push_back(book3);
    books.push_back(book4);
}

void Library::showMenu()
{
    int option;
    do
    {
        cout << "1.Show books\n";
        cout << "2.Show authors\n";
        cout << "0.Salir\n";
        cin >> option;

        switch (option)
        {
        case 0:
            cout << "Bye\n";
            break;

        case 1:
            showBooks();
            break;

        case 2:
            showAuthors();
            break;

        default:
            cout << "Invalid option\n";
            break;
        }
    } while (option != 0);
}

void Library::showBooks()
{
    cout << "Books" << endl;
    for (Book book : books)
    {
        book.showInfo();
    }
    cout << endl;
}

void Library::showAuthors()
{
    cout << "Authors" << endl;
    for (Author *a : authors)
    {
        a->showInfo();
    }
    cout << endl;
}
