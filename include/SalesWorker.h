#pragma once
#include <Worker.h>

class SalesWorker : public Worker
{
private:
    float baseSalary;
    float totalSales;

public:
    SalesWorker(int id, string name, string address, string career, float baseSalary, float totalSales);

    float getSalary();
};