#include "Robot.h"
using namespace std;

Robot::Robot()
{
    name = "Robot";
    vulnerable = {"Monkey", "Pirate"};

}

string Robot::getName() {
    return name;
}
