#include <iostream>
#include "Application.h"
#include "DataProvider.h"
using namespace std;

void Application::run()
{
    DataProvider dataProvider("students.txt");
    vector<Student> students = dataProvider.loadStudents();
    cout << "Students\n";
    for (Student student : students)
    {
        cout << student.getName() << endl;
    }
}