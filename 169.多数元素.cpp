/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ret = 0;

        for(auto i: nums) {
            if (ret == i) {
                count ++;
            } else {
                if (count == 0) {
                    count = 1;
                    ret = i;
                } else {
                    count --;
                }
            }
        }
        return ret;
    }
};
// @lc code=end

