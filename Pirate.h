#ifndef PIRATE_H
#define PIRATE_H
#include "Move.h"
using namespace std;

class Pirate : public Move
{
    protected:
    public:
        Pirate();
        string getName();
    };

#endif