#pragma once
#include "Animal.h"

class Bird : public Animal
{
private:
    float wingsSize;
    string wingsColor;

public:
    void fly();
    void showInfo();
};
