#pragma once

#include <string>
using namespace std;

class Author
{
public:
	string fullname, nationality;

	Author(string fullname, string nationality);

	void showInfo();
};
