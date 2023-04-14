#include <iostream>
#include <typeinfo>
#include "Person.h"
using namespace std;
string get_obj(const type_info *info)
{
    string str = info->name();
    return str;
}

int main()
{
    Person p(0, ", 7", 7);
    size_t pos = get_obj(&typeid(p)).find(" ");
    cout << get_obj(&typeid(p)).substr(pos + 1);
    return 0;
}