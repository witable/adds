#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "Sort.h"
#include <vector>
#include <algorithm>


class BubbleSort : public Sort
{
private:
    /* data */
public:
    BubbleSort();
    ~BubbleSort();
    std::vector<int> sort(std::vector<int> list);
    void bubblesortHelper(std::vector<int>& list);

};



#endif