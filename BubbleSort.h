#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "Sort.h"
#include <vector>
#include <algorithm>


class BubbleSort : public Sort
{
private:
    void bubblesortHelper(std::vector<int>& list);
public:
    BubbleSort();
    ~BubbleSort();
    std::vector<int> sort(std::vector<int> list);
};

#endif