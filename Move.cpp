#include "Move.h"
using namespace std;

Move::Move()
{
    name = "Move"; // Default name for move

}

vector<string> Move::getVulnerable()
{
  return vulnerable;  
}

string Move::getName() {
    return name;
}