#include "Rock.h"
using namespace std;

Rock::Rock()
{
    name = "Rock";
    vulnerable = {"Paper"}; // Paper covers Rock

}

const string& Rock::getName() const {
    return this->name;
}