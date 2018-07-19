//
// Created by 庄永新 on 2018/7/17.
//

#ifndef LEETCODE_ARRAYSOLUTION_H
#define LEETCODE_ARRAYSOLUTION_H

#include <vector>
#include <iostream>
using namespace std;

class ArraySolution
{
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2);
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);
    void _testArray();
};

#endif //LEETCODE_ARRAYSOLUTION_H
