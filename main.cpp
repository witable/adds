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
    r.refGame(&h, &c);
}