#include <string>
#include <vector>
#include "Student.h"
#include "Teacher.h"
using namespace std;

class DataProvider
{
public:
    vector<Student> loadStudentsFrom(string filename);
    vector<Teacher> loadTeachersFrom(string filename);
};
