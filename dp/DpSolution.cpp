//
// Created by 庄永新 on 2018/7/6.
//

#include "DpSolution.h"
#include <iostream>

/**
 * 斐波那契数列
 * @param n
 * @return
 * @link https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/23/dynamic-programming/54/
 */
int DpSolution::climbStairs(int n)
{
    // 输入不合法，0种方案
    if (n <= 0) {
        return 0;
    }

    // 初始值
    if (n >= 1 && n <= 2) {
        return n;
    }

    // 递推求第n项值
    vector<int> stairs = {0, 1, 2, 3};
    for (int i = 4; i <= n; ++i) {
        stairs[i] = stairs[i-1] + stairs[i-2];
    }
    return stairs[n];
}

/**
 * 最大盈利
 * @param prices
 * @return
 * @link https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/23/dynamic-programming/55/
 */
int DpSolution::maxProfit(vector<int>& prices)
{
    vector<int> vec = {0};
    size_t length = prices.size();
    for (int i = 0; i < length; ++i) {
        for (int j = i + 1; j < length; ++j) {
            if (prices[i] >= prices[j]) {
                continue;
            }
            vec.push_back(prices[j] - prices[i]);
        }
    }
    return *max_element(begin(vec), end(vec));
}


/**
 * 最大连续子序和
 * @param nums
 * @return
 * @link https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/23/dynamic-programming/56/
 */
int DpSolution::maxSubArray(vector<int>& nums)
{
    int _maxSum = nums[0];
    int _curSum = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        int elem = nums[i];
        if (_curSum < 0) { //当前和小于0，显然加下去不会更大，最大子序列和就是下个元素
            _curSum = elem;
        } else {
            _curSum += elem;
        }

        if (_curSum > _maxSum) {
            _maxSum = _curSum;
        }
    }
    return _maxSum;
}

/**
 * 连续平均数
 * @param nums
 * @param m 连续m个数
 * @param w 临界值
 * @return
 * @link https://mail.qq.com/cgi-bin/frame_html?sid=1bTrK8kN8k0LDF0G&r=9b250f91b835bf81474b7aa9cfd15b67
 */
int DpSolution::maxAverage(vector<int> &nums, int m, int w)
{
    size_t length = nums.size();
    if (m > length) {
        return 0;
    }

    for (int i = 0; i < length - m; ++i) {
        int _sum = 0;
        for (int j = i; j < m + i; ++j) {
            _sum += nums[j];
        }

        if (_sum / m > w) {
            return 1;
        }
    }
    return 0;
}

/**
 * 打家劫舍
 * @param nums
 * @return
 * @link https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/23/dynamic-programming/57/
 */
int DpSolution::rob(vector<int>& nums)
{
    size_t length = nums.size();
    switch (length)
    {
        case 0:
            return 0;
        case 1:
            return nums[0];
        case 2:
            return std::max(nums[0], nums[1]);
        default:
            break;
    }

    vector<int> _maxMoney(length, 0);
    _maxMoney[0] = nums[0];
    _maxMoney[1] = std::max(nums[1], nums[0]);

    for (size_t i = 2; i < length; ++i) {
        _maxMoney[i] = std::max(nums[i] + _maxMoney[i - 2], _maxMoney[i-1]);
    }

    return _maxMoney[length-1];
}