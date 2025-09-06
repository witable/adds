#include <vector>
class RecursiveBinarySearch
{
private:

public:
    RecursiveBinarySearch();
    ~RecursiveBinarySearch();
    bool search(std::vector<int> list, int num);
    bool searchHelper(std::vector<int> list, int num, int low, int high);
};