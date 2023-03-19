#pragma once

#include <vector>
#include "Book.h"
#include "Author.h"

class Library
{
private:
    vector<Author *> authors;
    vector<Book> books;

public:
    ~Library();

    void loadData();
    void showMenu();
    void showBooks();
    void showAuthors();
};
