#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include "BubbleSort.h"
#include <iostream>
#include <vector>
#include <sstream>
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
BubbleSort bubble;

list = quick.sort(list);


RecursiveBinarySearch recurse;
/*for (int i = 0; i < list.size(); i++)
{
    cout << list[i] << " ";
}
cout << "\n";*/
recurse.search(list, 1);
return 0;
}