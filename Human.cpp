#include <iostream>
#include "Human.h"
#include "Player.h"
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

    string moveInput;
    cout << "Enter move: ";
    cin >> moveInput;
    cout << "\n";
    move = moveMaker.stringToMove(moveInput);
    return &move;
}