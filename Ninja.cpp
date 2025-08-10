#include "Ninja.h"
using namespace std;

Ninja::Ninja()
{
    name = "Ninja";
    vulnerable = {"Monkey", "Robot"}; // Robot chokes Ninja and Monkey fools Ninja

}

string Ninja::getName() {
    return name;
}
