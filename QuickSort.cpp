#include "QuickSort.h"
#include <vector>
#include <algorithm>

QuickSort::QuickSort()
{

}

QuickSort::~QuickSort()
{

}

std::vector<int> QuickSort::sort(std::vector<int> list)
{
    quicksorthelper(list,0,list.size()-1);
    return list;
}

void QuickSort::quicksorthelper(std::vector<int>& list, int low, int high)
{
    if (high-low <= 0)
    {
        return;
    }
    if (high-low == 1)
    {
        if (list[low] > list[low+1])
        {
            std::swap(list[low],list[low+1]);
        }
    }

    if (high-low >= 2)
    {
        std::swap(list[2+low],list[high]);
        int start = low;
        int pivot = list[high];
        for (int i = low; i < high; i++)
        {
            if (list[i] < pivot)
            {
                std::swap(list[i],list[start]);
                start++;

            }

        }
        std::swap(list[start],list[high]);

        quicksorthelper(list,low,start-1);
        quicksorthelper(list,start+1,high);

    }
};