#include "Paper.h"
using namespace std;

Paper::Paper()
{
    name = "Paper";
    vulnerable = {"Scissors"};

}

string Paper::getName() {
    return name;
}
