#include "Author.h"
#include "Book.h"

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