/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minLen = INT_MAX;
        string ans = "";

        if (0 == strs.size()) return ans;
        
        for (int i = 0; i< strs.size(); ++i) {
            minLen = min(minLen, (int)strs[i].size());
        }

        for(int i = 0; i < minLen; ++i) {
            char c = strs[0][i];
            for (int j = 1; j < strs.size(); ++j) {
                if (strs[j][i] != c) return ans;
            }
            ans += c;
        }
        return ans;
    }
};
// @lc code=end

