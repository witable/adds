#include "Paper.h"
using namespace std;

Paper::Paper()
{
    name = "Paper";
    vulnerable = {"Scissors"}; // Scissors cuts Paper
}

const string& Paper::getName() const {
    return this->name;
}