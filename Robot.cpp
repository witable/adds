#include "Robot.h"
using namespace std;

Robot::Robot()
{
    name = "Robot";
    vulnerable = {"Monkey", "Pirate"}; // Monkey unplugs Robot and Pirate drowns Robot

}

const string& Robot::getName() const {
    return this->name;
}