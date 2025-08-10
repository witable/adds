#include "Ninja.h"
using namespace std;

Ninja::Ninja()
{
    name = "Ninja";
    vulnerable = {"Monkey", "Robot"}; // Robot chokes Ninja and Monkey fools Ninja

}

const string& Ninja::getName() const {
    return this->name;
}