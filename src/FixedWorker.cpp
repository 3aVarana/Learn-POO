#include "FixedWorker.h"

FixedWorker::FixedWorker(int id, string name, string address, string career, float monthlySalary) : Worker(id, name, address, career)
{
    this->monthlySalary = monthlySalary;
}

float FixedWorker::getSalary()
{
    return monthlySalary;
}
