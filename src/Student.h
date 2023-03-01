#include <string>
using namespace std;

#pragma once
class Student
{
private:
    int id;
    string name;

public:
    Student(int id, string name)
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
