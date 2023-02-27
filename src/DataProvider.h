#include <string>
#include <vector>
#include "Student.h"
using namespace std;

class DataProvider
{
private:
    string filename;

public:
    DataProvider(string filename);
    vector<Student> loadStudents();
};
