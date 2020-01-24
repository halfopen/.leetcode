/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (0 == prices.size()) return 0;
        int m_price = prices[0];
        int ans = 0;

        for(int i: prices) {
            m_price = min(m_price, i);
            ans = max(ans, i - m_price);
        }
        return ans;
    }
};
// @lc code=end

