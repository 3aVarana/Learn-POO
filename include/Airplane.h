#pragma once
#include <string>
#include <iostream>
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

    int getState()
    {
        return currentStatus;
    }

    void showInfo()
    {
        cout << "Airplane info" << endl;
        cout << "Identifier: " << identifier << endl;
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Model: " << model << endl;
    }
};
