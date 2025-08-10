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

const string& Player::getName() const
{
    return this->name; // Returns the name of the player for announcement of the winner
}

