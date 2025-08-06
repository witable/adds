#ifndef ROBOT_H
#define ROBOT_H
#include "Move.h"
using namespace std;

class Robot : public Move
{
    protected:
    public:
        Robot();
        string getName();
    };

#endif