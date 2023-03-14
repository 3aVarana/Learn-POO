#pragma once

#include "Author.h"
#include "Book.h"
#include <iostream>
using namespace std;

class Application
{
private:
    vector<Author *> authors;
    vector<Book *> books;

public:
    ~Application();

    void showAuthors();
    void showBooks();

    void loadData();
    void run();
    void addNewAuthor();
    void addNewBook();
    void addBookToAuthor();
    void addAuthorToBook();
};