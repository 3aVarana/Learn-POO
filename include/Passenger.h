#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Passenger : public Person
{
private:
    float miles;
    bool isPremium;

public:
    Passenger(int identifier, string fullname, int age, bool isPremium) : Person(identifier, fullname, age)
    {
        this->miles = 0;
        this->isPremium = isPremium;
    }
};
