/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 报数
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        for(int k = 2; k <= n; k++) {
            int cnt = 1;
            int len = ans.size();
            string cur = "";
            for(int i = 1; i < len; i++) {
                if(ans[i - 1] != ans[i]) {
                    cur += cnt + '0'; // 添加个数
                    cur += ans[i - 1];  // 添加数字
                    cnt = 1;
                } else 
                    cnt++;
            }
            cur += cnt + '0';
            cur += ans[len - 1];
            ans = cur;
        }
        return ans;
    }
};
// @lc code=end

