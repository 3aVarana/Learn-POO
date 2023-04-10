#pragma once
#include <string>
using namespace std;

class Worker
{
private:
    int id;
    string name;
    string address;
    string career;

public:
    Worker(int id, string name, string address, string career);

    virtual float getSalary() = 0;
};
