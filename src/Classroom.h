#include <string>
#include <vector>
using namespace std;

class Classroom
{
private:
    string building;
    int floor, number;
    vector<string> assets;

public:
    Classroom(string building, int floor, int number, vector<string> assets);
};
