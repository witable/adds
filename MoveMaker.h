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

class MoveMaker // Seperate class for movemaker to ensure single responsiblity principle is followed
{
private:
    unordered_map<string, Move> possibleMoves; // Unordered map used to have constant lookup time complexity
    // A copy of all the possible moves must be kept within the move maker logic
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