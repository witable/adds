#include <iostream>
#include "Player.h"
#include "Computer.h"
using namespace std;

Computer::Computer()
{
    this->name = "Computer";
}

char Computer::makeMove()
{
    return 'R';
}