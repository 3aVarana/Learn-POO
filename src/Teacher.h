#include <string>
using namespace std;

#pragma once
class Teacher
{
private:
    int id;
    string name;

public:
    Teacher(int id, string name);
    int getId();
    string getName();
};
