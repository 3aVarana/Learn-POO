#include "Subject.h"

Subject::Subject(string code, string classroom, string name)
{
    this->code = code;
    this->classroom = classroom;
    this->name = name;
}

string Subject::getCode()
{
    return code;
}

string Subject::getClassroom()
{
    return classroom;
}

string Subject::getName()
{
    return name;
}
