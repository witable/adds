#include "Move.h"
using namespace std;

Move::Move()
{
    name = "Move"; // Default name for move

}

const vector<string>& Move::getVulnerable() const {
    return vulnerable;
}

string Move::getName() {
    return name;
}