#include "Library.h"
#include <iostream>
using namespace std;

Library::~Library()
{
    for (Author *a : authors)
    {
        delete a;
    }
    for (Book *b : books)
    {
        delete b;
    }
}

void Library::loadData()
{
    Author *author1 = new Author("Edgar Allan Poe", "British");
    authors.push_back(author1);

    authors.push_back(new Author("Daniel Asin", "Colombian"));
    authors.push_back(new Author("Gabiel Garcia Marquez", "Spanish"));
    authors.push_back(new Author("Jose Miguel", "Mexican"));

    Book *book1 = new Book("The Red Death", "Santillana", 1990);
    book1->addAuthor(authors[0]);
    book1->addAuthor(authors[1]);
    authors[0]->addBook(book1);
    authors[1]->addBook(book1);

    Book *book2 = new Book("Dracula", "Santillana", 2000);
    book2->addAuthor(authors[2]);
    authors[2]->addBook(book2);

    Book *book3 = new Book("Sherlock Holmes", "Mc Grew", 1995);
    book3->addAuthor(authors[1]);
    authors[1]->addBook(book3);

    Book *book4 = new Book("American Dinasty", "La Salle", 2010);

    (*book4).addAuthor(authors[1]);
    book4->addAuthor(authors[2]);
    book4->addAuthor(authors[3]);

    authors[1]->addBook(book4);
    authors[2]->addBook(book4);
    authors[3]->addBook(book4);

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
        cout << "3.Add new author\n";
        cout << "4.Add new book\n";
        cout << "5.Add book to author\n";
        cout << "6.Add author to book\n";
        cout << "7.Edit an author\n";
        cout << "8.Edit a book\n";
        cout << "9.Search author by their name\n";
        cout << "10.Search book ty title\n";
        cout << "11.Save authors and books in a txt file\n";
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

        case 3:
            addNewAuthor();
            break;

        case 4:
            cout << "Not implemented yet - Homework\n";
            break;

        case 5:
            addBookToAuthor();
            break;

        case 6:
            cout << "Not implemented yet - Homework\n";
            break;

        case 7:
            editAuthor();
            break;

        case 8:
            cout << "Not implemented yet - Homework\n";
            break;

        case 9:
            cout << "Not implemented yet - Homework\n";
            break;

        case 10:
            cout << "Not implemented yet - Homework\n";
            break;

        case 11:
            cout << "Not implemented yet - Homework\n";
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
    for (Book *book : books)
    {
        book->showInfo();
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

void Library::addNewAuthor()
{
    string name, nationality;
    cout << "Ingrese nombre del nuevo autor: ";
    cin >> name;
    cout << "Ingrese nacionalidad del nuevo autor: ";
    cin >> nationality;

    authors.push_back(new Author(name, nationality));
}

void Library::addBookToAuthor()
{
    cout << "Select an author" << endl;
    int authorPos, bookPos;

    for (int i = 0; i < authors.size(); i++)
    {
        cout << "[" << i << "] - " << authors[i]->fullname << endl;
    }
    cin >> authorPos;
    // validar authorPos

    for (int i = 0; i < books.size(); i++)
    {
        cout << "[" << i << "] - " << books[i]->title << endl;
    }
    cin >> bookPos;
    // validar bookPos

    authors[authorPos]->addBook(books[bookPos]);
    books[bookPos]->addAuthor(authors[authorPos]);
}

void Library::editAuthor()
{
    cout << "Select an author" << endl;
    int authorPos;
    string newName, newNationality;

    for (int i = 0; i < authors.size(); i++)
    {
        cout << "[" << i << "] - " << authors[i]->fullname << endl;
    }
    cin >> authorPos;
    // validar authorPos

    // cout - Ingrese nuevo nombre
    cin >> newName;
    // cout - Ingrese nueva nacionalidad
    cin >> newNationality;

    authors[authorPos]->setFullname(newName);
    authors[authorPos]->setNationality(newNationality);

    authors[authorPos]->updateInfo(newName, newNationality);
}
