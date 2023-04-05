#include "Fish.h"
#include <iostream>

Fish::Fish(int identifier, string name, float age, int finNumber, string habitat) : Animal(identifier, name, age), finNumber(finNumber), habitat(habitat)
{
}

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
