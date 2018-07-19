
#include "./array/ArraySolution.h"
#include "./dp/DpSolution.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // array
    ArraySolution arr;
    arr._testArray();

    // dp
    DpSolution dp;

//    int n = 35;
//    cout << dp.climbStairs(n) << endl;
//
//    vector<int> vector1 = {7,1,5,3,6,4};
//    cout << dp.maxProfit(vector1) << endl;

    vector<int> vector2 = {-2,1,-3,4,-1,2,1,-5,4};
    cout << dp.maxSubArray(vector2) << endl;

    vector<int> vector3 = {1, 5, 1, 3, 2};
    cout << dp.maxAverage(vector3, 2, 2) << endl;

    vector<int> vector4 = {2,1,1,2};
    cout << dp.rob(vector4) << endl;

    return 0;
}