#pragma once
#include "Person.h"
#include <string>
#include <vector>
using namespace std;

class CrewMember : public Person
{
private:
    vector<string> abilities;

public:
    CrewMember(int identifier, string fullname, int age) : Person(identifier, fullname, age)
    {
    }

    void addAbility(string ability)
    {
        if (ability != "")
        {
            abilities.push_back(ability);
        }
    }
};
