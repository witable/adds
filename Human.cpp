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


   

char Human::makeMove()
{
     char a;
    cout << "Enter move: ";
    cin >> a;
    cout << "\n";
    return a;
}