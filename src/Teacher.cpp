#include "Teacher.h"

Teacher::Teacher(int id, string name)
{
    this->id = id;
    this->name = name;
}

int Teacher::getId()
{
    return id;
}

string Teacher::getName()
{
    return name;
}
