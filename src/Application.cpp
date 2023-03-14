#include "Application.h"

Application::~Application()
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

void Application::showAuthors()
{
    cout << "AUTHORS\n";
    for (Author *a : authors)
    {
        a->showInfo();
    }
}

void Application::showBooks()
{
    cout << "BOOKS\n";
    for (Book *b : books)
    {
        b->showInfo();
    }
}

void Application::loadData()
{
    authors.push_back(new Author("Edgar Allan Poe"));
    authors.push_back(new Author("Gabriel Garcia Marquez"));
    authors.push_back(new Author("James Patterson"));

    books.push_back(new Book("100 años de Soledad"));
    books.push_back(new Book("Dracula", historic));
    books.push_back(new Book("Sherlock Holmes", educative));
    books.push_back(new Book("Don Quijote de la mancha"));
    books.push_back(new Book("The Red Death", fiction));

    authors[0]->addBook(books[0]);
    books[0]->addAuthor(authors[0]);

    authors[1]->addBook(books[1]);
    books[1]->addAuthor(authors[1]);

    authors[2]->addBook(books[2]);
    books[2]->addAuthor(authors[2]);

    authors[2]->addBook(books[3]);
    books[3]->addAuthor(authors[2]);

    authors[2]->addBook(books[4]);
    books[4]->addAuthor(authors[2]);
}

void Application::run()
{
    loadData();

    int option;
    do
    {
        cout << "1.Show authors\n";
        cout << "2.Show books\n";
        cout << "3.Add new author\n";
        cout << "4.Add new book\n";
        cout << "5.Add book to existing author\n";
        cout << "6.Add author to existing book\n";
        cout << "0.Salir\n";
        cin >> option;

        switch (option)
        {
        case 1:
            showAuthors();
            break;

        case 2:
            showBooks();
            break;

        case 3:
            addNewAuthor();
            break;

        case 4:
            addNewBook();
            break;

        case 5:
            addBookToAuthor();
            break;

        case 6:
            addAuthorToBook();
            break;

        default:
            break;
        }
    } while (option != 0);
}

void Application::addNewAuthor()
{
    string authorName;
    cout << "Enter author's name: ";
    getline(cin, authorName);
    getline(cin, authorName);
    Author *author = new Author(authorName);
    authors.push_back(author);
}

void Application::addNewBook()
{
    string bookTitle;
    cout << "Enter book's title name: ";
    getline(cin, bookTitle);
    getline(cin, bookTitle);
    Book *book = new Book(bookTitle);
    books.push_back(book);
}

void Application::addBookToAuthor()
{
    int bookPos, authorPos;
    cout << "Select book\n";
    for (int i = 0; i < books.size(); i++)
    {
        cout << "[" << i << "] - " << books[i]->getTitle() << endl;
    }
    cin >> bookPos;

    if (bookPos < 0 || bookPos >= books.size())
    {
        cout << "Invalid option\n";
        return;
    }

    cout << "Select author\n";
    for (int i = 0; i < authors.size(); i++)
    {
        cout << "[" << i << "] - " << authors[i]->getName() << endl;
    }
    cin >> authorPos;

    if (authorPos < 0 || authorPos >= authors.size())
    {
        cout << "Invalid option\n";
        return;
    }

    authors[authorPos]->addBook(books[bookPos]);
    books[bookPos]->addAuthor(authors[authorPos]);
}

void Application::addAuthorToBook()
{
    int bookPos, authorPos;
    cout << "Select author\n";
    for (int i = 0; i < authors.size(); i++)
    {
        cout << "[" << i << "] - " << authors[i]->getName() << endl;
    }
    cin >> authorPos;

    if (authorPos < 0 || authorPos >= authors.size())
    {
        cout << "Invalid option\n";
        return;
    }

    cout << "Select book\n";
    for (int i = 0; i < books.size(); i++)
    {
        cout << "[" << i << "] - " << books[i]->getTitle() << endl;
    }
    cin >> bookPos;

    if (bookPos < 0 || bookPos >= books.size())
    {
        cout << "Invalid option\n";
        return;
    }

    authors[authorPos]->addBook(books[bookPos]);
    books[bookPos]->addAuthor(authors[authorPos]);
}
