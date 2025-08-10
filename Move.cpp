#include "Move.h"
using namespace std;

Move::Move()
{
    name = "Move"; // Default name for move

}

const vector<string>& Move::getVulnerable() const {
    return vulnerable;
}

const string& Move::getName() const {
    return this->name;
}