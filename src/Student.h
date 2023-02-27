#include <string>
using namespace std;
class Student
{
private:
    int id;
    string name;

public:
    Student(int id, string name);
    int getId();
    string getName();
};
