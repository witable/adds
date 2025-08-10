#include "Zombie.h"
using namespace std;

Zombie::Zombie()
{
    name = "Zombie";
    vulnerable = {"Robot", "Ninja"}; // Robot crushes Zombie and Ninja decapitates Zombie

}

const string& Zombie::getName() const {
    return this->name;
}