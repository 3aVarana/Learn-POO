#include "Fish.h"
#include <iostream>

void Fish::swim()
{
    cout << "Fish is swimming...\n";
}

void Fish::showInfo()
{
    cout << "Fish info\n";
    Animal::showInfo();
    cout << "Fish's fin number: " << finNumber << endl;
    cout << "Fish's habitat: " << habitat << endl;
}
