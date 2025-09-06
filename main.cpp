#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include "BubbleSort.h"
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
string line;
getline(cin, line);
istringstream iss(line);
vector<int> list;
int num;
while (iss >> num) {
    list.push_back(num);
}

QuickSort quick;
BubbleSort bubble;

list = quick.sort(list);

for (int i = 0; i < list.size(); i ++)
{
    cout << list[i] << " ";
}
cout << "\n";

RecursiveBinarySearch recurse;

cout << recurse.search(list, 6) << "\n";
}