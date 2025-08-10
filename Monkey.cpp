#include "Monkey.h"
using namespace std;

Monkey::Monkey()
{
    name = "Monkey";
    vulnerable = {"Zombie", "Pirate"}; // Zombie savages Monkey and Pirate skewers Monkey
}

string Monkey::getName() {
    return name;
}
