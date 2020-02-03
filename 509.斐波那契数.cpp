/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */

// @lc code=start
class Solution {
public:
    int fib(int N) {
        int pre = 0, cur = 1;
        if (1 >= N) return N;
        
        for(int i = 2; i <= N; i++) {
            auto tmp = cur;
            cur = cur + pre;
            pre = tmp;
        }
        return cur;
        
    }
};
// @lc code=end

