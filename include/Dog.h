#pragma once
#include "Animal.h"

class Dog : public Animal
{
private:
    string race;
    bool hasPedigree;

public:
    void walk();
    void showInfo();
};
