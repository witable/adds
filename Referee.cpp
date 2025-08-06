#include <iostream>
#include "Referee.h"

#include "Player.h"
#include <bits/stdc++.h>
using namespace std;

Player* Referee::refGame(Player * player1, Player * player2)
{
    Move P1 = *player1->makeMove();
    Move P2 = *player2->makeMove();

    //cout << "Confirmed " << player1->getName() << " has made " << P1.getName() << "\n" << "Confirmed " << player2->getName() << " has made " << P2.getName() << "\n";
    //cout << "Confirmed " << P1.getName() << " is vulnerable to " << P1.getVulnerable()[0] << "\n";
    //cout << "Confirmed " << P2.getName() << " is vulnerable to " << P2.getVulnerable()[0] << "\n";

    auto it = find(P1.getVulnerable().begin(), P1.getVulnerable().end(), P2.getName());
    if (P1.getName() == P2.getName())
    {
        //cout << P1.getName() << " " << P2.getName() << "\n";
        return nullptr;
    } 
    if (it != P1.getVulnerable().end())
    {
        //cout << "First activated " << *(find(P1.getVulnerable().begin(), P1.getVulnerable().end(), P2.getName())) << "\n";
        //cout << "Here's what was found " << distance(P1.getVulnerable().begin(),P1.getVulnerable().end()) << "\n";
        //cout << player2->getName() << " beats " << player1->getName() << " with " << P2.getName() << " beating " << P1.getName() << "\n";
        return player2;
    }
    it = find(P2.getVulnerable().begin(), P2.getVulnerable().end(), P1.getName());

    if (it != P2.getVulnerable().end())
    {
        //cout << "Second activated \n";

        std::cout << player1->getName() << " beats " << player2->getName() << " with " << P1.getName() << " beating " << P2.getName() << "\n";

        return player1;
    } else {
        //cout << "Something wrong \n";
        return nullptr;
    }
    

};

Referee::Referee()
{
}