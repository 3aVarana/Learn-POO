#pragma once
#include <string>
using namespace std;

enum Status
{
    active,
    vacances,
    fired,
    retired,
    medicalSickLeave
};

class Worker
{
protected:
    int id;
    string name;
    string address;
    string career;

    Status status = Status::active;

public:
    Worker(int id, string name, string address, string career);

    virtual float getSalary() = 0;
};
