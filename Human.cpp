#include <iostream>
#include "Human.h"
using namespace std;

Human::Human()
{
    this->name = "Human";
}

Human::Human(string name)
{
    this->name = name;
}


   

Move* Human::makeMove()
{
    MoveMaker moveMaker;
    string moveInput;
    cout << "Enter move: ";
    cin >> moveInput;
    cout << "\n";
    move = moveMaker.stringToMove(moveInput); // Converts the input string to the neccesarry Move subclass
    return &move; // Pass by reference to ensure an unnecessary copy is not made
}