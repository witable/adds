#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>
class RecursiveBinarySearch
{
private:

public:
    RecursiveBinarySearch();
    ~RecursiveBinarySearch();
    bool search(std::vector<int>, int);
    bool searchHelper(std::vector<int> list, int num, int low, int high);
};
#endif