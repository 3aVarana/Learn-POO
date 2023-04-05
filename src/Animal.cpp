#include "Animal.h"
#include <iostream>

Animal::Animal(int identifier, string name, float age) : identifier(identifier), name(name), age(age)
{
}

void Animal::showInfo()
{
    cout << "Id: " << identifier << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years." << endl;
}
