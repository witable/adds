#include "Player.h"
using namespace std;

Player::Player()
{
    this->name = "Player";
}

Player::Player(string name)
{
    this->name = name;
}

string Player::getName()
{
    return this->name; // Returns the name of the player for announcement of the winner
}

