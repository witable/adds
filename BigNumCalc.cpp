#include "BigNumCalc.h"

BigNumCalc::BigNumCalc()
{

}

BigNumCalc::~BigNumCalc()
{
    
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2)
{
    int digit = num2.front();
    if ((num1.size() == 1 && num1.front() == 0) || num2.empty())
    {
        return {0};
    }
    std::list<int> num;
    int carry = 0;
    int product;


    if(digit == 0)
    {
        return {0};
    }
    auto l1 = num1.rbegin();

    while(l1 != num1.rend())
    {
        int digit1 = *l1;
        l1++;
        product = (digit1 * digit) + carry;
        carry = product / 10;
        num.push_front(product % 10);
    }

    if(carry > 0)
    {
        num.push_front(carry);
    }
    if(num.empty())
    {
         num.push_back(0);
    }
    return num;

}
std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2)
{
    num1.reverse();
    num2.reverse();
    
    int carry = 0;
    int sum = 0;

    std::list<int> num;

    auto iter1 = num1.begin();
    auto iter2 = num2.begin();

    while (iter1 != num1.end() || iter2 != num2.end() || carry !=0)
    {
        int sum = carry;
        if (iter1 != num1.end())
        {
            sum += *iter1++;
        }
        if (iter2 != num2.end())
        {
            sum += *iter2++;
        }
        carry = sum/10;
        num.push_front(sum%10);
    }
    return num;

}
std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2)
{
    std::list<int> num;

    num1.reverse();
    num2.reverse();

    auto iter1 = num1.begin();
    auto iter2 = num2.begin();

    int carry = 0;

    while (iter1 != num1.end())
    {
        int diff = *iter1 - carry - (iter2 != num2.end() ? *iter2 : 0);
        if (carry < 0)
        {
            diff += 10;
            carry = 1;
        } else
        {
            carry = 0;
        }
        num.push_front(diff);
        ++iter1;
        if (iter2 != num2.end())
        {
            ++iter2;
        }

        while (!num.empty() && num.front() == 0)
        {
            num.pop_front();
        }
        if (num.empty())
        {
            num.push_back(0);
        }

    }
}

std::list<int> BigNumCalc::buildBigNum(std::string string)
{
    std::list<int> num;
    for(int i = 0; i < string.length(); i++){
        num.push_back(string[i] - '0');
    }
    while (num.size() > 1 && num.front() == 0) {
        num.pop_front();
   }
    return num;

}