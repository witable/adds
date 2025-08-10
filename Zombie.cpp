#include "Zombie.h"
using namespace std;

Zombie::Zombie()
{
    name = "Zombie";
    vulnerable = {"Robot", "Ninja"}; // Robot crushes Zombie and Ninja decapitates Zombie

}

string Zombie::getName() {
    return name;
}
