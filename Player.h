#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"
#include "MoveMaker.h"

using namespace std;

class Player
{
    protected:
        string name;
        Move move;
        
    public:
        Player();
        const string& getName() const;
        virtual Move* makeMove() = 0; // Pure virtual function as player is abstract class
        Player(string name);
};

#endif

