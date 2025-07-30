#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include "Player.h"
using namespace std;

class Human : public Player
{
    protected:
    
    public:
        Human(string name);
        Human();
        char makeMove();
};

#endif