#include "Rock.h"
using namespace std;

Rock::Rock()
{
    name = "Rock";
    vulnerable = {"Paper"};

}

string Rock::getName() {
    return name;
}
