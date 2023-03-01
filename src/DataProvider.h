#include <string>
#include <vector>
#include "Student.h"
#include "Teacher.h"
#include "Subject.h"
#include <fstream>
using namespace std;

#pragma once
class DataProvider
{
private:
    string studentFile = "students.data";
    string teacherFile = "teachers.txt";
    string subjectFile = "subjects.txt";

public:
    vector<Student> loadStudents()
    {
        vector<Student> students;
        ifstream file(studentFile);

        int id;
        string name;
        while (file.good())
        {
            file >> id;
            getline(file, name);
            getline(file, name);
            students.push_back(Student(id, name));
        }

        return students;
    }

    vector<Teacher> loadTeachers()
    {
        vector<Teacher> teachers;
        ifstream file(teacherFile);

        int id;
        string name;
        while (file.good())
        {
            file >> id;
            getline(file, name);
            getline(file, name);
            teachers.push_back(Teacher(id, name));
        }

        return teachers;
    }
    vector<Subject> loadSubjects()
    {
        vector<Subject> subjects;
        ifstream file(subjectFile);

        string code, name;
        string classroomLine;

        while (file.good())
        {
            getline(file, code);
            getline(file, classroomLine);
            getline(file, name);

            Classroom classroom(classroomLine[0], classroomLine[3], classroomLine[6]);

            subjects.push_back(Subject(code, classroom, name));
        }

        return subjects;
    }
};
