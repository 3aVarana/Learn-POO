#pragma once
#include "Animal.h"

class Fish : public Animal
{
private:
    int finNumber;
    string habitat;

public:
    void swim();
    void showInfo();
};
