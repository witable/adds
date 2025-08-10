#ifndef PLAYER_H
#define PLAYER_H

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
        virtual Move* makeMove() = 0; // Pure virtual function as player is never 
        Player(string name);
};

#endif