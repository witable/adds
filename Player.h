#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using namespace std;

class Player
{
    protected:
        string name;
    public:
        Player();
        string getName();
        virtual char makeMove();
        Player(string name);
};

#endif