#ifndef MOVE_H
#define MOVE_H
#include <string>
#include <vector>
using namespace std;

class Move
{
    protected:
        string name;
        vector<string> vulnerable;

    public:
        Move();
        virtual string getName();
        virtual vector<string> getVulnerable();
    };

#endif