#include <iostream>
#include "Player.h"
#include "Referee.h"

Player* Referee::refGame(Player * player1, Player * player2)
{
    char P1 = player1->makeMove();
    char P2 = player2->makeMove();
    if (P1 == P2)
    {
        return nullptr;
    } else if (P1 == 'S')
    {
        return player2;
    } else if (P1 == 'P')
    {
        return player1;
    }
};