/*
 * @lc app=leetcode.cn id=415 lang=cpp
 *
 * [415] 字符串相加
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        if (num1.size() > num2.size()) {
            swap(num1, num2);
        }
        string ans = "";
        int carry = 0;
        int i = 0;
        for (; i < num2.size(); i++) {
            int n1 = ( i >= num1.size()? '0': num1[num1.size() - 1 -i] ) - '0';
            int n2 = num2[num2.size() - 1 -i] - '0';
            // cout << n1 << " " << n2 << endl;
            char c = (n1 + n2 + carry) % 10 + '0';
            carry = (n1 + n2 + carry) / 10;
            ans = c + ans;
        }
        if (carry > 0) {
            ans = '1' + ans;
        }
        return ans;
    }
};
// @lc code=end

