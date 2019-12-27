/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
#include<string>
#include<unordered_map>
#include<iostream>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) { 
        int slow = 0;
        int maxLen = 0;

        unordered_map<char, int> um;
        for (int i = 0; i < s.size(); i++) {
            if (um.find(s[i]) != um.end()) {
                slow = max(slow, um[s[i]] + 1);
            }
            um[s[i]] = i;
            maxLen = max(maxLen, i - slow + 1);
        }
        return maxLen;
    }
};

int main()
{
    Solution s;
    string str = "abcabcbb";

    cout << s.lengthOfLongestSubstring(str) << endl;

    return 0;
}
// @lc code=end

