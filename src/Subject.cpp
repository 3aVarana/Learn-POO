#include "Subject.h"

Subject::Subject(string code, Classroom *classroom, string name)
{
    this->code = code;
    this->classroom = classroom;
    this->name = name;
    this->teacher = nullptr;
}

string Subject::getCode()
{
    return code;
}

string Subject::getClassroom()
{
    string classroomStr = "Classroom: ";
    classroomStr.push_back(classroom->getBuilding());
    classroomStr.push_back(classroom->getFloor());
    classroomStr.push_back(classroom->getNumber());
    return classroomStr;
}

string Subject::getName()
{
    return name;
}

void Subject::assignTeacher(Teacher *teacher)
{
    this->teacher = teacher;
}

Teacher *Subject::getTeacher()
{
    return teacher;
}
