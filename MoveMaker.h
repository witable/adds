#ifndef MOVEMAKER_H
#define MOVEMAKER_H
#include <string>
#include <unordered_map>
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"


using namespace std;

class MoveMaker
{
private:
    unordered_map<string, Move> possibleMoves;
    Rock r;
    Paper p;
    Scissors s;
public:
    MoveMaker();
    Move stringToMove(string input);
};


#endif