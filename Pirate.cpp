#include "Pirate.h"
using namespace std;

Pirate::Pirate()
{
    name = "Pirate";
    vulnerable = {"Zombie", "Ninja"}; // Zombie eats Pirate and Ninja decapitates Zombie

}

const string& Pirate::getName() const {
    return this->name;
}