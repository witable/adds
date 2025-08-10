#ifndef MOVE_H
#define MOVE_H
#include <string>
#include <vector>
using namespace std;

class Move
{
    protected:
        string name;
        vector<string> vulnerable; //A vector of strings containing the names of the moves that this move will lose to

    public:
        Move();
        virtual const string& getName() const; //To check the if the move of the opponent is within the moves vulnerable vector
        const vector<string>& getVulnerable() const;
};
#endif