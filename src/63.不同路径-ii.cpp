/*
 * @lc app=leetcode.cn id=63 lang=cpp
 *
 * [63] 不同路径 II
 *
 * https://leetcode-cn.com/problems/unique-paths-ii/description/
 *
 * algorithms
 * Medium (32.09%)
 * Likes:    202
 * Dislikes: 0
 * Total Accepted:    34.7K
 * Total Submissions: 107.9K
 * Testcase Example:  '[[0,0,0],[0,1,0],[0,0,0]]'
 *
 * 一个机器人位于一个 m x n 网格的左上角 （起始点在下图中标记为“Start” ）。
 * 
 * 机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为“Finish”）。
 * 
 * 现在考虑网格中有障碍物。那么从左上角到右下角将会有多少条不同的路径？
 * 
 * 
 * 
 * 网格中的障碍物和空位置分别用 1 和 0 来表示。
 * 
 * 说明：m 和 n 的值均不超过 100。
 * 
 * 示例 1:
 * 
 * 输入:
 * [
 * [0,0,0],
 * [0,1,0],
 * [0,0,0]
 * ]
 * 输出: 2
 * 解释:
 * 3x3 网格的正中间有一个障碍物。
 * 从左上角到右下角一共有 2 条不同的路径：
 * 1. 向右 -> 向右 -> 向下 -> 向下
 * 2. 向下 -> 向下 -> 向右 -> 向右
 * 
 * 
 */

// @lc code=start
// 这道题初始值的边界条件必须得细心
// 递推式, dp[i][j] = dp[i-1][j] + dp[i][j-1]
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(); //行数
        if (!m) {
            return 0;
        }
        int n = obstacleGrid[0].size(); //列数
        if (obstacleGrid[m - 1][n - 1]) {
            return 0;
        }

        //初始化
        vector<vector<long>> dp(m, vector<long>(n, 0)); //attention！此处得根据路径数合理的选择数据类型
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                if (obstacleGrid[row][col]) {
                    dp[row][col] = 0;
                } else {
                    if (!row && !col) {
                        dp[0][0] = 1;
                    } else if (!row) {
                        dp[row][col] = dp[row][col-1];    
                    } else if (!col) {
                        dp[row][col] = dp[row-1][col];
                    } else {
                        dp[row][col] = dp[row-1][col] + dp[row][col-1];
                    }
                }
            }
        }
        return dp[m-1][n-1];
    }
};
// @lc code=end

