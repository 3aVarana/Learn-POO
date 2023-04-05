#pragma once
#include "Animal.h"

class Dog : public Animal
{
private:
    string race;
    bool hasPedigree;

public:
    Dog(int identifier, string name, float age, string race, bool hasPedigree);

    void walk();
    void showInfo();
};
