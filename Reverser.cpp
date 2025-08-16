#include <iostream>
#include <cmath>

using namespace std;

class Reverser
{
private:
public:
    string reverseString(string str);
    int reverseDigits(int num);
};

int Reverser::reverseDigits(int num)
{
    if ((floor(log10(num)) + 1) == 1 )
    {
        return num;
    } else
    {
        return (num % 10) * pow(10,(floor(log10(num)))) + reverseDigits(num / 10);
    }

};

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

int main()
{
    Reverser reverse;
    cout << reverse.reverseString("abcdefghijk") << "\n";
    cout << reverse.reverseDigits(123456789) << "\n";
    return 0;
}