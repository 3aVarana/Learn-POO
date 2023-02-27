#include <string>
using namespace std;

#pragma once
class Student
{
private:
    int id;
    string name;

public:
    Student(int id, string name);
    int getId();
    string getName();
};
