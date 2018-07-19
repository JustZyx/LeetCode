//
// Created by 庄永新 on 2018/7/17.
//

#include "ArraySolution.h"
#include <map>

/**
 * @param nums1
 * @param nums2
 * @return
 * @link https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/26/
 */
vector<int> ArraySolution::intersect(vector<int>& nums1, vector<int>& nums2)
{
    map<int, int> _m;
    vector<int> _target;
    for (auto _elem1 : nums1) {
        _m[_elem1]++;
    }
    for (auto _elem2 : nums2) {
        if (_m[_elem2]) {
            _target.push_back(_elem2);
            _m[_elem2]--;
        }
    }
    return _target;
}

/**
 * 合并有序数组
 * @param nums1
 * @param m
 * @param nums2
 * @param n
 */
void ArraySolution::merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (j >= 0) {
        nums1[k--] = (i >= 0 && nums1[i] > nums2[j]) ? nums1[i--] : nums2[j--];
    }
}

/**
 * 测试
 */
void ArraySolution::_testArray()
{
    //合并有序数组
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3, n = 3;
    merge(nums1, 3, nums2, 3);
    for (auto elem : nums1) {
        std::cout << elem << " ";
    }
    std::cout << "------合并有序数组结束-------" << std::endl;

    vector<int> nums3 = {1};
    vector<int> nums4 = {1, 1};
    vector<int> vector1 = intersect(nums3, nums4);
    for (auto i : vector1) {
        std::cout << i << " ";
    }
    std::cout << "--------两个数组交集结束------" << std::endl;
}