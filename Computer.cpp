#include <iostream>
#include "Computer.h"
#include "Player.h"
using namespace std;

Computer::Computer()
{
    this->name = "Computer";
}

char Computer::makeMove()
{
    return 'R';
}