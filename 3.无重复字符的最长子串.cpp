/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ret = 0, start = 0;

        unordered_map<char, int> charToIdx; // char->last index
        for (int i=0; i<s.length(); ++i) {
            if( charToIdx.find(s[i]) != charToIdx.end()) {
                start = max(start, charToIdx[s[i]]);
            }
            ret = max(ret, i-start+1);
            charToIdx[s[i]] = i+1; // last no repeat position
        }
        return ret;
    }
};
// @lc code=end

