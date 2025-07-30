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
    
    //h.makeMove();
    Referee r;
    Computer c;

    Player* result = r.refGame(&h, &c);
    if (result == &h)
    {
        cout << "Player " << h.getName() << " wins!" << endl;
    }
    else if (result == &c)
    {
        cout << "Player " << c.getName() << " wins!" << endl;
    }
    else
    {
        cout << "It's a tie!" << endl;
    }
}