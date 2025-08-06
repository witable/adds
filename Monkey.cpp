#include "Monkey.h"
using namespace std;

Monkey::Monkey()
{
    name = "Monkey";
    vulnerable = {"Zombie", "Pirate"};

}

string Monkey::getName() {
    return name;
}
