#include <iostream>
#include "Referee.h"

#include "Player.h"
#include <bits/stdc++.h>
using namespace std;

Player* Referee::refGame(Player * player1, Player * player2)
{
    Move P1 = *player1->makeMove();
    Move P2 = *player2->makeMove();
    if (P1.getName() == P2.getName())
    {
        return nullptr;
    } else if (find(P1.getVulnerable().begin(), P1.getVulnerable().end(), P2.getName()) != P1.getVulnerable().end())
    {
        cout << "First activated \n";
        cout << "Here's what was found " << find(P1.getVulnerable().begin(), P1.getVulnerable().end(), P2.getName()) << "\n";
        cout << player1->getName() << " beats " << player2->getName() << " with " << P1.getName() << " beating " << P2.getName() << "\n";
        return player1;
    } else if (find(P2.getVulnerable().begin(), P2.getVulnerable().end(), P1.getName()) != P2.getVulnerable().end())
    {
        cout << "Second activated \n";

        std::cout << player2->getName() << " beats " << player1->getName() << " with " << P2.getName() << " beating " << P1.getName() << "\n";

        return player2;
    } else {
        return nullptr;
    }
    

};

Referee::Referee()
{
}