/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() -1;

        while(left < right) {
            char l = tolower(s[left]);
            char r = tolower(s[right]);
            if (!valid(l)) {
                left ++ ;
                continue;
            }
            if (!valid(r)) {
                right --;
                continue;
            }
            if (l != r) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    bool valid(char c) {
        return (c >= 'A' && c <='Z') || (c>='a' && c <='z') || (c>='0' && c<='9');
    }
};
// @lc code=end

