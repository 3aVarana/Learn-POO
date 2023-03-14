#include "Author.h"
#include "Book.h"

Author::Author(string fullname) : fullname(fullname), books(vector<Book *>())
{
}

Author::Author(string fullname, vector<Book *> books) : fullname(fullname), books(books)
{
}

void Author::addBook(Book *book)
{
    books.push_back(book);
}

string Author::getName()
{
    return fullname;
}

void Author::showInfo()
{
    cout << "Author's name: " << fullname << endl;
    cout << "Books:\n";
    for (Book *book : books)
    {
        cout << book->getTitle() << endl;
    }
    cout << endl;
}

void Author::setNewName(string newName)
{
    fullname = newName;
}
