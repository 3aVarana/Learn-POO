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
    Teacher *substituteTeacher;

    vector<Student> students;

public:
    Subject(string code, Classroom *classroom, string name)
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

    void assignSubstituteTeacher(Teacher *substituteTeacher)
    {
        this->substituteTeacher = substituteTeacher;
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
