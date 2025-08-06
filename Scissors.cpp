#include "Scissors.h"
using namespace std;

Scissors::Scissors()
{
    name = "Scissors";
    vulnerable = {"Rock"};

}

string Scissors::getName() {
    return name;
}
