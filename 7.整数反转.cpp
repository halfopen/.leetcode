/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        
        long ret = 0;

        while(x!=0) { // 不用flag, 直接判断是否为0
            ret = ret* 10 + x%10;
            x = x / 10;
        }
        // 注意判断整数溢出
        if (ret > INT_MAX || ret < INT_MIN) return 0;

        return (int)ret;
    }
};
// @lc code=end

