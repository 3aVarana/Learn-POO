#include <string>
#include "Classroom.h"
#include "Teacher.h"
using namespace std;

class Subject
{
private:
    string code, name;
    Classroom *classroom;
    Teacher *teacher;

public:
    Subject(string code, Classroom *classroom, string name);
    string getCode();
    string getClassroom();
    string getName();

    void assignTeacher(Teacher *teacher);
    Teacher *getTeacher();
};
