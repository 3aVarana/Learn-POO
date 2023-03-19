#include "Author.h"
#include <iostream>
using namespace std;

Author::Author(string fullname, string nationality)
{
	this->fullname = fullname;
	this->nationality = nationality;
}

void Author::showInfo()
{
	cout << "Author" << endl;
	cout << fullname << endl;
	cout << nationality << endl;
}
