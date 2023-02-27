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
