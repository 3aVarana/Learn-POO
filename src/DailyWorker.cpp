#include "DailyWorker.h"

DailyWorker::DailyWorker(int id, string name, string address, string career, float dailySalary, int workedDays) : Worker(id, name, address, career)
{
    this->dailySalary = dailySalary;
    this->workedDays = workedDays;
}

float DailyWorker::getSalary()
{
    return dailySalary * workedDays;
}
