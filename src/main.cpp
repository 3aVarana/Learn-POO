#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Bird.h"
#include "Fish.h"

using namespace std;

int main()
{
    Animal a1(1, "Pucca", 1.5);
    a1.showInfo();

    Dog d1(2, "Rocco", 6, "Cooker", true);
    d1.showInfo();

    Bird b1(4, "Larry", 3, 10, "Brown");
    b1.showInfo();

    Fish f1(10, "Perry", 1, 4, "Coral Reef");
    f1.showInfo();
    return 0;
}