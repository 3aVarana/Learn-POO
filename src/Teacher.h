#include <string>
using namespace std;

#pragma once
class Teacher
{
private:
    int id;
    string name;

public:
    Teacher(int id, string name)
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
