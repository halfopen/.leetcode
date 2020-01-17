/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 * 
 * 1 3 3 1
 * 1 4 6 4 1
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;
        for(int i= 0;i < numRows;i++){
            vec.push_back(vector<int> (i+1,1));
            for(int j = 1; j < i; j++){
                vec[i][j] = vec[i-1][j-1] + vec[i-1][j];
            }      
        }
        return vec;
    }
};
// @lc code=end

