#pragma once
#include <string>
using namespace std;

class Person
{
protected:
    int id;
    string fullname;
    int age;

public:
    Person(int id, string fullname, int age)
    {
        this->id = id;
        this->fullname = fullname;
        this->age = age;
    }

    int getIdentifier()
    {
        return id;
    }
    string getFullname()
    {
        return fullname;
    }
};
