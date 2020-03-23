/*
 * @lc app=leetcode.cn id=796 lang=cpp
 *
 * [796] 旋转字符串
 */

// @lc code=start
class Solution {
public:
    bool rotateString(string A, string B) {
        string s = A + A;
        return A.size() == B.size() && s.find(B) !=string::npos ;
    }
};
// @lc code=end

