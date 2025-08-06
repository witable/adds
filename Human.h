#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include "Player.h"
#include "Move.h"
using namespace std;

class Human : public Player
{
    protected:
    public:
        Human(string name);
        Human();
        Move* makeMove();
};

#endif