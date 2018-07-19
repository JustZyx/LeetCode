//
// Created by 庄永新 on 2018/7/6.
//

#ifndef LEETCODE_DPSOLUTION_H
#define LEETCODE_DPSOLUTION_H

#include <vector>
using namespace std;

class DpSolution
{
public:
    int climbStairs(int n); //斐波那契数列
    int maxProfit(vector<int>& prices); //最大盈利(仅一次交易)
    int maxSubArray(vector<int>& nums); //最大子序列和
    int maxAverage(vector<int>& nums, int m, int w); //连续子序列平均数
    int rob(vector<int>& nums); //打家劫舍

};
#endif //LEETCODE_DPSOLUTION_H
