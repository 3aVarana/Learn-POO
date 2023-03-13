#pragma once

#include <string>
using namespace std;

class Person
{
protected:
    int id;
    string name;

public:
    Person(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
};
