/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 缺失数字
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = ( 0 + nums.size() ) * (nums.size() + 1) / 2;
        for ( auto i : nums ) sum -= i;
        return sum;
    }
};
// @lc code=end

