#pragma once
#include <Worker.h>

class FixedWorker : public Worker
{
private:
    float monthlySalary;

public:
    FixedWorker(int id, string name, string address, string career, float monthlySalary);

    float getSalary();
};
