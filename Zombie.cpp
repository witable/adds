#include "Zombie.h"
using namespace std;

Zombie::Zombie()
{
    name = "Zombie";
    vulnerable = {"Robot", "Ninja"};

}

string Zombie::getName() {
    return name;
}
