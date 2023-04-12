#include <SalesWorker.h>

SalesWorker::SalesWorker(int id, string name, string address, string career, float baseSalary, float totalSales) : Worker(id, name, address, career)
{
    this->baseSalary = baseSalary;
    this->totalSales = totalSales;
}

float SalesWorker::getSalary()
{
    return baseSalary + totalSales * 0.08f;
}
