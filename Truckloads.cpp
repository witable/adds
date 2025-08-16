#include <iostream>
#include <cmath>
#include "Truckloads.h"

using namespace std;


int Truckloads::numTrucks(int numCrates, int loadSize)
{
    int truckCount = 0;
        if (numCrates <= loadSize)
    {
        truckCount++;
        return truckCount;
    }
    if ((numCrates % 2) == 0)
    {
        return truckCount + 2*numTrucks(numCrates/2,loadSize);
    }
    else
    {
            int smallHalf = numCrates/2;

            int bigHalf = numCrates-smallHalf;


            return truckCount + numTrucks(smallHalf,loadSize) + numTrucks(bigHalf,loadSize);
    }
};
