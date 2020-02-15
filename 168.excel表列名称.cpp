/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int n) {
        // n -= 1;
        string ans;

        while(n){
            int a = --n % 26;
            ans += ('A'+a);
            n /= 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;

    }
};
// @lc code=end

