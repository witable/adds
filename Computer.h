#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include "Human.h"
#include "Player.h"

using namespace std;

class Computer : public Player
{
    protected:
        string name;
    
    public:
        Computer();
        char makeMove();

};

#endif