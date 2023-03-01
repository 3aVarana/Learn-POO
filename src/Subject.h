#include <string>
#include "Classroom.h"
using namespace std;

class Subject
{
private:
    string code, name;
    Classroom *classroom;

public:
    Subject(string code, Classroom *classroom, string name);
    string getCode();
    string getClassroom();
    string getName();
};
