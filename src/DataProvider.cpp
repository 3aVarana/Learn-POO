#include "DataProvider.h"
#include <fstream>

vector<Student> DataProvider::loadStudentsFrom(string filename)
{
    vector<Student> students;
    ifstream file(filename);

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

vector<Teacher> DataProvider::loadTeachersFrom(string filename)
{
    vector<Teacher> teachers;
    ifstream file(filename);

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

vector<Subject> DataProvider::loadSubjectsFrom(string filename)
{
    vector<Subject> subjects;
    ifstream file(filename);

    string code, classroom, name;
    while (file.good())
    {
        getline(file, code);
        getline(file, classroom);
        getline(file, name);
        subjects.push_back(Subject(code, classroom, name));
    }

    return subjects;
}
