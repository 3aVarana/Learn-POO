#include "Dog.h"
#include <iostream>

void Dog::walk()
{
    cout << "Dog is walking...\n";
}

void Dog::showInfo()
{
    cout << "Dog info\n";
    Animal::showInfo();
    cout << "Dog's race: " << race << endl;
    if (hasPedigree)
    {
        cout << "Dog has Pedigree\n";
    }
    else
    {
        cout << "Dog does not have Pedigree\n";
    }
}
