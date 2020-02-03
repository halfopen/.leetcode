/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int bitmap[2][26];
        char ans;

        for (int i = 0; i< 26; i++) {
            bitmap[0][i] = 0;
            bitmap[1][i] = 0;
        }

        for(char c : s) {
            bitmap[0][c - 'a']++;
        }

        for(char c : t) {
            bitmap[1][c - 'a']++;
        }

        for(int i = 0; i < 26; i++) {
            if (bitmap[0][i] != bitmap[1][i]) {
                ans = i + 'a';
                break;
            }
        }
        return ans;
    }
};
// @lc code=end

