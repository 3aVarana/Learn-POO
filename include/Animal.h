#pragma once
#include <string>
using namespace std;

class Animal
{
protected:
    int identifier;
    string name;
    float age;

public:
    Animal(int identifier, string name, float age);

    void showInfo();
};
