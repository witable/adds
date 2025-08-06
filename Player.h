#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include "Move.h"
#include "MoveMaker.h"

using namespace std;

class Player
{
    protected:
        string name;
        MoveMaker moveMaker;
        Move move;
        
    public:
        Player();
        string getName();
        virtual Move* makeMove() = 0;
        Player(string name);
};

#endif