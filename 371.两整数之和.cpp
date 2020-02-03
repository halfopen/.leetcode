/*
 * @lc app=leetcode.cn id=371 lang=cpp
 *
 * [371] 两整数之和
 */

// @lc code=start
class Solution {
public:
    int getSum(int a, int b) {
        
        while (b)
        {
            auto carry = ((unsigned int ) (a & b))<<1 ; // 记录a+b的进位，直到进位为0是退出
            a = a^b;   //结果相加
            b = carry;  //循环
        }
        return a;
    }
};
// @lc code=end

