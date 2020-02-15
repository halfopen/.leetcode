/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num <= 0) return false;
        if (1 == num) return true;

        long left = 1, right = num / 2 + 1;
        long lnum = num;

        while(left < right) {
            long mid = left + (right - left) / 2;
            if (mid * mid == lnum) return true;
            if (mid * mid > lnum) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }
};
// @lc code=end

