#include <string>
using namespace std;

class Subject
{
private:
    string code, classroom, name;

public:
    Subject(string code, string classroom, string name);
    string getCode();
    string getClassroom();
    string getName();
};
