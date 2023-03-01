#include <string>
#include <vector>
using namespace std;

class Classroom
{
private:
    char building, floor, number;
    vector<string> assets;

public:
    Classroom(char building, char floor, char number, vector<string> assets = vector<string>());
    char getBuilding();
    char getFloor();
    char getNumber();
    vector<string> getAssets();
};
