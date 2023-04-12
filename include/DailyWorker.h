#pragma once
#include "Worker.h"

class DailyWorker : public Worker
{
private:
    float dailySalary;
    int workedDays;

public:
    DailyWorker(int id, string name, string address, string career, float dailySalary, int workedDays);

    float getSalary();
};
