/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0], sum = nums[0];
        for(int i=1; i< nums.size(); i++) {
            
            if (sum + nums[i] > nums[i]) {
                sum = sum + nums[i];
            } else {
                sum = nums[i];
            }
            maxSum = max(maxSum, sum);
        }

        return maxSum;
    }
};
// @lc code=end

