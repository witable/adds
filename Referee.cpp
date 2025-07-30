#include <iostream>
#include "Referee.h"

#include "Player.h"
using namespace std;

Player* Referee::refGame(Player * player1, Player * player2)
{
    char P1 = player1->makeMove();
    char P2 = player2->makeMove();

    if (P1 == P2) {
        return nullptr;
    }

    if (P1 == 'R' && P2 == 'S')
    {
        return player1;
    } else if (P1 == 'S' && P2 == 'P')
    {
        return player1;
    }
    else if (P1 == 'P' && P2 == 'R') 
    {
        return player1;
    } 
    else {
        return player2;
    }
};

Referee::Referee()
{
}