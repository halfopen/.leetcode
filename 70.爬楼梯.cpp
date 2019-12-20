/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:

    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        
        int t1 = 1, t2 = 2;

        for(int i=2;i<n;i++) {
            int temp = t2;
            t2 = t1 + t2;
            t1 = temp;
        }

        return t2;
    }
};
// @lc code=end

