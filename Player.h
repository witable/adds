#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Human.h"

class Player : public Human
{
    protected:
        
        string getName();
    public:
        Player();
        virtual char makeMove() = 0;
        Player(string name);
};

#endif