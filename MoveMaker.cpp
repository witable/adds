#include "MoveMaker.h"


MoveMaker::MoveMaker()
{
    possibleMoves["Rock"] = r;
    possibleMoves["Scissors"] = s;
    possibleMoves["Paper"] = p;
}

Move MoveMaker::stringToMove(string input)
{
    return possibleMoves[input];
}