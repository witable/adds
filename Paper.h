#ifndef PAPER_H
#define PAPER_H
#include "Move.h"
using namespace std;

class Paper : public Move
{
    protected:
    public:
        Paper();
        const string& getName() const;
    };

#endif