#include "MoveMaker.h"


MoveMaker::MoveMaker()
{
    possibleMoves["Rock"] = rock;
    possibleMoves["Scissors"] = scissors;
    possibleMoves["Paper"] = paper;
    possibleMoves["Ninja"] = ninja;
    possibleMoves["Pirate"] = pirate;
    possibleMoves["Robot"] = robot;
    possibleMoves["Zombie"] = zombie;
    possibleMoves["Monkey"] = monkey;
}

Move MoveMaker::stringToMove(string input)
{
    return possibleMoves[input];
}