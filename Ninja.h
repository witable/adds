#ifndef NINJA_H
#define NINJA_H
#include "Move.h"
using namespace std;

class Ninja : public Move
{
    protected:
    public:
        Ninja();
        string getName();
    };

#endif