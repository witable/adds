#ifndef MOVEMAKER_H
#define MOVEMAKER_H
#include <string>
#include <unordered_map>
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Robot.h"
#include "Zombie.h"
#include "Monkey.h"

using namespace std;

class MoveMaker
{
private:
    unordered_map<string, Move> possibleMoves;
    Rock rock;
    Paper paper;
    Scissors scissors;
    Monkey monkey;
    Robot robot;
    Zombie zombie;
    Ninja ninja;
    Pirate pirate;
    
public:
    MoveMaker();
    Move stringToMove(string input);
};


#endif