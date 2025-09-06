#include "RecursiveBinarySearch.h"

RecursiveBinarySearch::RecursiveBinarySearch()
{

};

RecursiveBinarySearch::~RecursiveBinarySearch()
{

};
 
bool RecursiveBinarySearch::search(std::vector<int> list, int num)
{
    return searchHelper(list, num, 0, list.size()-1);
}

bool RecursiveBinarySearch::searchHelper(std::vector<int> list, int num, int low, int high)
{

    int middle = low+(high-low)/2;
    if (low > high)
    {
        return 0;
    } else if (list[middle] < num)
    {
        return searchHelper(list,num,middle+1,high);
    } else if (list[middle] > num)
    {
        return searchHelper(list,num,low,middle-1);
    } else if (num == list[middle])
    {
        return 1;
    } else 
    {
        return 0;
    }
}