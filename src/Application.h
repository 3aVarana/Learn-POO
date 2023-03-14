#pragma once

#include "Author.h"
#include "Book.h"
#include <iostream>
using namespace std;

class Application
{
public:
    void run()
    {
        vector<Author *> authors;
        authors.push_back(new Author("Edgar Allan Poe"));
        authors.push_back(new Author("Gabriel Garcia Marquez"));
        authors.push_back(new Author("James Patterson"));
        authors.push_back(new Author("David Baldacci"));
        authors.push_back(new Author("J D Robb"));

        for (Author *a : authors)
        {
            a->showInfo();
        }

        for (Author *a : authors)
        {
            delete a;
        }
    }
};