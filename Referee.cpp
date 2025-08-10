#include "Referee.h"
#include <algorithm>
#include <iostream>
using namespace std;

Player* Referee::refGame(Player * player1, Player * player2)
{
    Move playerOneMove = *player1->makeMove();
    Move playerTwoMove = *player2->makeMove();

    vector<string> playerOneVulnerable = playerOneMove.getVulnerable();
    vector<string> playerTwoVulnerable = playerTwoMove.getVulnerable();


    auto it = find(playerOneVulnerable.begin(), playerOneVulnerable.end(), playerTwoMove.getName()); // Iterates through the Vulnerable vector of Player One's move to check if Player Two's move will defeat Player Two
    if (playerOneMove.getName() == playerTwoMove.getName()) //Check if the two moves are the same if so then output nullptr which is considered a draw
    {
        return nullptr;
    } 
    if (it != playerOneVulnerable.end()) // If the iterator 'it' is the end iterator then PLayer 2's move was not found within the vulnerable vector of Player 1 otherwise Player 2 wins this round
    {
        return player2;
    }
    it = find(playerTwoVulnerable.begin(), playerTwoVulnerable.end(), playerOneMove.getName()); // Iterates through the Vulnerable vector of Player Two's move to check if Player One's move will defeat Player One

    if (it != playerTwoVulnerable.end()) // If the iterator 'it' is the end iterator then PLayer 1's move was not found within the vulnerable vector of Player 2 otherwise Player 1 wins this round
    {
        return player1;
    } else 
    {
        return nullptr; //Return nullptr for any other inputs which resulted from a bug or undefined behaviour such as Rock vs Pirate
    }
    

};
