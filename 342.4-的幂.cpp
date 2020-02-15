/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int num) {
        return (num > 0) && 
            ((num & (num - 1)) == 0) && // 是2的幂（只有一个1）
            ((num & 0xaaaaaaaa) == 0);  // 而且那个1出现在 1010对应1的位置
    }
};
// @lc code=end

