#include <iostream>
#include "Computer.h"
#include "Player.h"
using namespace std;

Computer::Computer() : Player("Computer") {}

char Computer::makeMove()
{
    return 'R';
}