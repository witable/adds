#include "Scissors.h"
using namespace std;

Scissors::Scissors()
{
    name = "Scissors";
    vulnerable = {"Rock"}; // Rock bashes Scissors

}

const string& Scissors::getName() const {
    return this->name;
}