#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int kth_largest(vector<int> values, int k)
{
    std::priority_queue<int> pq1;
    for (int i = 0; i < values.size(); i++)
    {
        pq1.push(values[i]);
    }
    while (k > 1)
    {
        pq1.pop();
        k--;
    }
    return pq1.top();
}
