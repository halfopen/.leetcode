/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = -1;
        if (needle.size() > haystack.size()) return -1;
        if (needle.size() == 0) return 0;

        for(int i = 0; i + needle.size() <= haystack.size(); ++i) {
            
            int j = 0, k = i;
            while(j < needle.size() && haystack[k] == needle[j] ) {
                j++; k++;
                if (j == needle.size()) return i;
            }
        }
        return ans;
    }
};
// @lc code=end

