#include "DataProvider.h"
#include <fstream>

DataProvider::DataProvider(string filename)
{
    this->filename = filename;
}

vector<Student> DataProvider::loadStudents()
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
