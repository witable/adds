#include <iostream>
#include "Player.h"
using namespace std;

Player::Player()
{
    this->name = "Human";
}

Player::Player(string name)
{
    this->name = name;
}

string Player::getName()
{
    return this->name;
}

