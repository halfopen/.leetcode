/*
 * @lc app=leetcode.cn id=441 lang=cpp
 *
 * [441] 排列硬币
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {
        return int(sqrt(double(2*(double)n + 0.25)) - 0.5);
    }
};
// @lc code=end

