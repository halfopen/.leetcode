/*
 * @lc app=leetcode.cn id=476 lang=cpp
 *
 * [476] 数字的补数
 */

// @lc code=start
class Solution {
public:
    int findComplement(int num) {
        long temp = 1;
        while (num >= temp){
            temp <<= 1;
        }
        return (temp - 1 - num);
    }
};
// @lc code=end

