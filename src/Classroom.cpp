#include "Classroom.h"

Classroom::Classroom(string building, int floor, int number, vector<string> assets)
{
    this->building = building;
    this->floor = floor;
    this->number = number;
    this->assets = assets;
}