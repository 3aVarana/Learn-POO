#include "Bird.h"
#include <iostream>

Bird::Bird(int identifier, string name, float age, float wingsSize, string wingsColor) : Animal(identifier, name, age), wingsSize(wingsSize), wingsColor(wingsColor)
{
}

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
