/*
 * @lc app=leetcode.cn id=867 lang=cpp
 *
 * [867] 转置矩阵
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
int ro = A.size();
        int co = A[0].size();

        vector<vector<int>> res(co);
        for (int i = 0; i < co; ++i) {
            for (int j = 0; j < ro; ++j)
                res[i].emplace_back(A[j][i]);
        }
        return res;
    }
};
// @lc code=end

