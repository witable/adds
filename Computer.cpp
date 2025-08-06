#include <iostream>
#include "Computer.h"
#include "Player.h"
using namespace std;

Computer::Computer() : Player("Computer") 
{
    move = Rock();
}

Move* Computer::makeMove()
{
    return &move;
}