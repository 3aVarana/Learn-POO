#include <string>
#include "Classroom.h"
using namespace std;

#pragma once
class Subject
{
private:
    string code, name;
    Classroom *classroom;
    vector<Subject> requiredSubjects;
    Teacher *assignedTeacher;

    vector<Student *> students;

public:
    Subject(string code, Classroom *classroom, string name)
    {
        this->code = code;
        this->classroom = classroom;
        this->name = name;
    }

    ~Subject()
    {
        if (classroom != nullptr)
        {
            delete classroom;
        }
    }

    string getCode()
    {
        return code;
    }

    string getClassroom()
    {
        if (classroom == nullptr)
        {
            return "Virtual";
        }
        else
        {
            return classroom->getCompleteName();
        }
    }

    string getName()
    {
        return name;
    }

    void assignTeacher(Teacher *assignedTeacher)
    {
        this->assignedTeacher = assignedTeacher;
    }

    void addStudent(Student student)
    {
        students.push_back(student);
    }

    void freeClassroomMemory()
    {
        if (classroom != nullptr)
        {
            delete classroom;
        }
    }
};
