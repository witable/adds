#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch
{
private:
    bool searchHelper(std::vector<int> list, int num, int low, int high);
public:
    RecursiveBinarySearch();
    ~RecursiveBinarySearch();
    bool search(std::vector<int> list, int num);
};

#endif