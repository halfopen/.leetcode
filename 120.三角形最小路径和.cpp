/*
 * @lc app=leetcode.cn id=120 lang=cpp
 *
 * [120] 三角形最小路径和
 */

// @lc code=start
class Solution {
public:
    int result = INT_MAX;
    int minimumTotal(vector<vector<int>>& triangle) {
        int M = triangle.size(); 
        int N = triangle[M-1].size();

        int dp[N];
        //cout<<M<<" "<<N<<endl;
        // init
        for (int i=0;i<N;i++) {
            dp[i] = triangle[M-1][i];
        }

        // 
        for(int i = M-2;i>=0; --i) {
            for(int j=0;j<triangle[i].size();++j) { // 
                //cout<<i<<" "<<j<<endl;
                dp[j] = triangle[i][j]+ min(dp[j], dp[j+1]);
            }
        }

        return dp[0];
    }

    void dfs(vector<vector<int>>& triangle, int level, int pos, int total) {
        
        if (level >= triangle.size()) {
            result = min(total, result);
            return;
        }
        // down
        dfs(triangle, level + 1, pos, total + triangle[level][pos]);
        // down right
        if (pos+1<triangle[level].size())
        dfs(triangle, level + 1, pos + 1, total + triangle[level][pos+1]);
    }
};
// @lc code=end

