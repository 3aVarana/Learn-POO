#include "Bird.h"
#include <iostream>

void Bird::fly()
{
    cout << "Bird is flying...\n";
}

void Bird::showInfo()
{
    cout << "Bird info\n";
    Animal::showInfo();
    cout << "Bird's wings size: " << wingsSize << endl;
    cout << "Bird's wings color: " << wingsColor << endl;
}
