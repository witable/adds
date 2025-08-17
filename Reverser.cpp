#include <iostream>
#include <cmath>
#include "Reverser.h"

using namespace std;


string Reverser::reverseString(string str)
{
    if (str.length() == 1)
    {
        return str;
    } else
    {
        return str[str.length()-1] + reverseString(str.substr(0,str.length()-1));
    }
};

int Reverser::reverseDigit(int num)
{
    if ((floor(log10(num))) == 0)
    {
        return num;
    }
    return (num % 10) * pow(10,floor(log10(num))) + reverseDigit(floor(num/10));
}