#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include "BubbleSort.h"
#include <iostream>
#include <vector>


using namespace std;

int main()
{
vector<int> list;
int i;
while (true) {
    cin >> i;
    list.push_back(i);
    //cout << i << endl;
    if (cin.peek() == '\n') {
        break;
    } 
}

QuickSort quick;

list = quick.sort(list);


RecursiveBinarySearch recurse;
cout << std::boolalpha << recurse.search(list, 1) << " ";

for (size_t i = 0; i < list.size(); i++)
{
    cout << list[i] << " ";
}
cout << "\n";
return 0;
}