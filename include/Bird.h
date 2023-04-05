#pragma once
#include "Animal.h"

class Bird : public Animal
{
private:
    float wingsSize;
    string wingsColor;

public:
    Bird(int identifier, string name, float age, float wingsSize, string wingsColor);

    void fly();
    void showInfo();
};
