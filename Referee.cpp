#include <iostream>
#include "Referee.h"

#include "Player.h"
#include <bits/stdc++.h>
using namespace std;

Player* Referee::refGame(Player * player1, Player * player2)
{
    Move playerOneMove = *player1->makeMove();
    Move playerTwoMove = *player2->makeMove();

    vector<string> playerOneVulnerable = playerOneMove.getVulnerable();
    vector<string> playerTwoVulnerable = playerTwoMove.getVulnerable();


    auto it = find(playerOneVulnerable.begin(), playerOneVulnerable.end(), playerTwoMove.getName()); 
    if (playerOneMove.getName() == playerTwoMove.getName())
    {
        return nullptr;
    } 
    if (it != playerOneVulnerable.end())
    {
        return player2;
    }
    auto it = find(playerTwoVulnerable.begin(), playerTwoVulnerable.end(), playerOneMove.getName());

    if (it != playerTwoMove.getVulnerable().end())
    {
        std::cout << player1->getName() << " beats " << player2->getName() << " with " << playerOneMove.getName() << " beating " << playerTwoMove.getName() << "\n";
        return player1;
    } else 
    {
        return nullptr;
    }
    

};
