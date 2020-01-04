/*
 * @lc app=leetcode.cn id=64 lang=cpp
 *
 * [64] 最小路径和
 *
 * https://leetcode-cn.com/problems/minimum-path-sum/description/
 *
 * algorithms
 * Medium (63.66%)
 * Likes:    354
 * Dislikes: 0
 * Total Accepted:    49.7K
 * Total Submissions: 78K
 * Testcase Example:  '[[1,3,1],[1,5,1],[4,2,1]]'
 *
 * 给定一个包含非负整数的 m x n 网格，请找出一条从左上角到右下角的路径，使得路径上的数字总和为最小。
 * 
 * 说明：每次只能向下或者向右移动一步。
 * 
 * 示例:
 * 
 * 输入:
 * [
 * [1,3,1],
 * ⁠ [1,5,1],
 * ⁠ [4,2,1]
 * ]
 * 输出: 7
 * 解释: 因为路径 1→3→1→1→1 的总和最小。
 * 
 * 
 */

// @lc code=start
// 递推公式, dp[i][j] = min(dp[i-1][j], dp[i][j-1])
// 初始值, dp[i][0] = grid[i][0], dp[0][j] = grid[0][j]
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int minPathSum(vector<vector<int>> &grid) {
        int m = grid.size();
        if (!m) {
            return 0;
        }
        int n = grid[0].size();
        if (!n) {
            return 0;
        }

        //初始化
        vector<vector<int>> dp(m, vector<int>(n, 0));

        //递推
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                if (!row && !col) {
                    dp[0][0] = grid[0][0];
                } else if (!row) {
                    dp[row][col] = dp[row][col - 1] + grid[row][col];
                } else if (!col) {
                    dp[row][col] = dp[row - 1][col] + grid[row][col];
                } else {
                    dp[row][col] = min(dp[row - 1][col], dp[row][col - 1]) + grid[row][col];
                }
            }
        }
        return dp[m - 1][n - 1];
    }
};
// @lc code=end

