/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        unordered_map<int, int> um;
        for (int i = 0; i < nums.size(); i++) {
            int sub = target - nums[i];
            if (um.find(sub) != um.end()) {
                ret.push_back(um[sub]);
                ret.push_back(i);
            } else {
                um[nums[i]] = i;
            }
        }
        return ret;
    }
};


int main()
{
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ret = s.twoSum(nums, target);

    // print 
    cout << "[";
    for (int i = 0; i < ret.size() - 1; i++) {
        cout << ret[i] << ", ";
    }
    cout << ret[ret.size() - 1] <<  "]";

    return 0;
}
// @lc code=end

