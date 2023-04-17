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
    Airplane(int identifier, string manufacturer, string model)
    {
        this->identifier = identifier;
        this->manufacturer = manufacturer;
        this->model = model;
        this->currentStatus = Status::active;
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
