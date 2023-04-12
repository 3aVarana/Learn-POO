#pragma once
#include "Flight.h"
#include "Package.h"
#include <vector>

class Cargo : public Flight
{
private:
    vector<Package> packages;

public:
};
