#include "Pirate.h"
using namespace std;

Pirate::Pirate()
{
    name = "Pirate";
    vulnerable = {"Zombie", "Ninja"};

}

string Pirate::getName() {
    return name;
}
