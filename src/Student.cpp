#include "Student.h"

Student::Student(int id, string name)
{
    this->id = id;
    this->name = name;
}

int Student::getId()
{
    return id;
}

string Student::getName()
{
    return name;
}