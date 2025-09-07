#ifndef SORT_H
#define SORT_H
#include <vector>
class Sort
{
public:
    Sort();
    virtual ~Sort();
    virtual std::vector<int> sort(std::vector<int> list);
};


#endif