#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Pilot : public Person
{
private:
    int experienceYears;

public:
    Pilot(int id, string fullname, int age, int expeYears) : Person(id, fullname, age)
    {
        this->experienceYears = expeYears;
    }
};
