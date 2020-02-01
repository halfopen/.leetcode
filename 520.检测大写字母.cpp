/*
 * @lc app=leetcode.cn id=520 lang=cpp
 *
 * [520] 检测大写字母
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag = false; // 是否首字母大写
        int count = 0;
        for(int i = 1; i < word.size(); ++i) {
            if (isLower(word[i])) count++;
        }
        if (isLower(word[0])) {
            return count == word.size() -1; // 全小写
        } else {    // 第一个大写
            return count == 0 || count == word.size() -1 ;
        }
    }

    bool isLower(char c) {
        if (c >= 'a' && c <='z') return true;
        return false;
    }
};
// @lc code=end

