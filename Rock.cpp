#include "Rock.h"
using namespace std;

Rock::Rock()
{
    name = "Rock";
    vulnerable = {"Paper"}; // Paper covers Rock

}

string Rock::getName() {
    return name;
}
