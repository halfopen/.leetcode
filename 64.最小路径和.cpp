/*
 * @lc app=leetcode.cn id=64 lang=cpp
 *
 * [64] 最小路径和
 */

// @lc code=start
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));


        for(int i=1;i<=m;i++) {
            for(int j=1;j<=n;j++) {
                int last = min(dp[i][j-1], dp[i-1][j]);
                if (i==1) {
                    last = dp[i][j-1];
                }
                if (j==1) {
                    last = dp[i-1][j];
                }
                dp[i][j] = last + grid[i-1][j-1];
            }
        }

        // for(auto i : dp) {
        //     for(auto j: i) {
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }


        return dp[m][n];
    }
};
// @lc code=end

