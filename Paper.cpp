#include "Paper.h"
using namespace std;

Paper::Paper()
{
    name = "Paper";
    vulnerable = {"Scissors"}; // Scissors cuts Paper
}

string Paper::getName() {
    return name;
}
