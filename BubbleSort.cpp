#include "BubbleSort.h"
using namespace std;

std::vector<int> BubbleSort::sort(std::vector<int> list)
{
    bubblesortHelper(list);
    return list;
}

void BubbleSort::bubblesortHelper(std::vector<int>& list)
{
    for (int i = list.size()-1;i > 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (list[j] > list[j+1])
            {
                swap(list[j],list[j+1]);
            }
        }
    }
};

BubbleSort::BubbleSort()
{

}

BubbleSort::~BubbleSort()
{

}