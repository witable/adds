#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"
using namespace std;

class Monkey : public Move
{
    protected:
    public:
        Monkey();
        string getName();
    };

#endif