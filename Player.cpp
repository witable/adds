#include <iostream>
#include "Human.h"
#include "Player.h"

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

char Player::makeMove()
{
    char a;
    cout << "Enter move ";
    cin >> a;
    return a;
}