#pragma once
#include <string>
#include <vector>

using namespace std;

class Classroom
{
private:
    char building;
    char floor;
    char number;
    vector<string> assets;

public:

    Classroom(char building, char floor, char number, vector<string> assets = vector<string>())
    {
        this->building = building;
        this->floor = floor;
        this->number = number;
        this->assets = assets;
    }

    string getCompleteName()
    {
        string completeName;
        completeName.push_back(building);
        completeName.push_back('-');
        completeName.push_back(floor);
        completeName.push_back('_');
        completeName.push_back(number);
        return completeName;
    }
};
