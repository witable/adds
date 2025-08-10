#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"
using namespace std;

class Scissors : public Move
{
    protected:
    public:
        Scissors();
        const string& getName() const;
    };

#endif