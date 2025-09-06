#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"
#include <vector>
#include <algorithm>


class QuickSort : public Sort
{
private:
    /* data */
public:
    QuickSort();
    ~QuickSort();
    std::vector<int> sort(std::vector<int> list);
    void quicksorthelper(std::vector<int>& list, int low, int high);
};


#endif