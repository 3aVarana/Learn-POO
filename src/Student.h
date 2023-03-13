#pragma once

#include <string>
using namespace std;

#include "Person.h"

class Student : public Person
{
private:
    string major;

public:
    Student(int id, string name) : Person(id, name)
    {
    }

    string getMajor()
    {
        return major;
    }
};
