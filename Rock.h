#ifndef ROCK_H
#define ROCK_H
#include "Move.h"
using namespace std;

class Rock : public Move
{
    protected:
    public:
        Rock();
        const string& getName() const;
    };

#endif