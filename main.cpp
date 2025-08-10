#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"
using namespace std;
 
int main()
{
    string name;
    cout << "Enter name: ";
    cin >> name;
    cout << "\n";
    Human  h(name);
    
    string name2;
    cout << "Enter name: ";
    cin >> name2;
    cout << "\n";
    Human  h2(name2);
    
    Referee r;

    Player* result = r.refGame(&h, &h2);
    if (result == &h)
    {
        cout << "Player " << h.getName() << " wins!" << endl;
    }
    else if (result == &h2)
    {
        cout << "Player " << h2.getName() << " wins!" << endl;
    }
    else
    {
        cout << "It's a tie!" << endl;
    }
}