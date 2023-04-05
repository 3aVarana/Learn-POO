#pragma once
#include "Animal.h"

class Fish : public Animal
{
private:
    int finNumber;
    string habitat;

public:
    Fish(int identifier, string name, float age, int finNumber, string habitat);

    void swim();
    void showInfo();
};
