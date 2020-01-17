/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        dfs(nums, 0, res);
        return res;
    }
    
    void dfs(vector<int>& nums, int begin, vector<vector<int>>& res) {
        if (begin == nums.size() -1) 
            res.push_back(nums);
        for (int i = begin; i < nums.size(); i++) { // 把begin和每一个位置交换
            swap(nums[begin], nums[i]);
            dfs(nums, begin + 1, res);
            swap(nums[begin], nums[i]);
        }
        return;
    }
};
// @lc code=end

