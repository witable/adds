#include "Ninja.h"
using namespace std;

Ninja::Ninja()
{
    name = "Ninja";
    vulnerable = {"Monkey", "Robot"};

}

string Ninja::getName() {
    return name;
}
