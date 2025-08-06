#include "MoveMaker.h"


MoveMaker::MoveMaker()
{
    possibleMoves["Rock"] = rock;
    possibleMoves["Scissors"] = scissors;
    possibleMoves["Paper"] = paper;
}

Move MoveMaker::stringToMove(string input)
{
    return possibleMoves[input];
}