#pragma once
#include <string>
using namespace std;

enum Status
{
    active,
    inMaintenance,
    outOfService
};

class Airplane
{
private:
    int identifier;
    string manufacturer;
    string model;
    Status currentStatus;

public:
    Airplane()
    {
    }

    bool isActive()
    {
        return currentStatus == Status::active;
    }

    int getIdentifier()
    {
        return identifier;
    }
};
