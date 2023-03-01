#include <string>
#include "Classroom.h"
using namespace std;

#pragma once
class Subject
{
private:
    string code, name;
    Classroom classroom;

public:
    Subject(string code, Classroom classroom, string name)
    {
        this->code = code;
        this->classroom = classroom;
        this->name = name;
    }
    string getCode()
    {
        return code;
    }
    string getClassroom()
    {
        return classroom.getCompleteName();
    }
    string getName()
    {
        return name;
    }
};
