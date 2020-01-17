/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(matrix.empty()) return ans;
        int l = 0, r = matrix[0].size()-1, u = 0, d = matrix.size()-1;
        int i = 0, j = 0;
        
        while(l <= r && u <= d){ // l r u d 定义了一个矩形
            while(l <= r && u <= d && i == u && j < r)
                ans.push_back(matrix[i][j++]);
            u++;
            while(l <= r && u <= d && j == r && i < d)
                ans.push_back(matrix[i++][j]);
            r--;
            while(l <= r && u <= d && i == d && j > l)
                ans.push_back(matrix[i][j--]);
            d--;
            while(l <= r && u <= d && j == l && i > u)
                ans.push_back(matrix[i--][j]);
            l++;
        }
        ans.push_back(matrix[i][j]);
        return ans;
    }
};
// @lc code=end

