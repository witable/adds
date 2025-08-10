#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"
using namespace std;

class Monkey : public Move
{
    protected:
    public:
        Monkey();
        const string& getName() const;
    };

#endif