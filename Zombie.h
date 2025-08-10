#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Move.h"
using namespace std;

class Zombie : public Move
{
    protected:
    public:
        Zombie();
        const string& getName() const;
    };

#endif