#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include "Player.h"
using namespace std;

class Human
{
    protected:
        string name;
    
    public:
        Human(string name);
        Human();

};
#endif