/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ret;
        bt(0, n*2, ret, 0, "");
        return ret;
    }

    /**
     * len: total length
     * count: check valid
     * temp: temp result
     **/
    void bt(int pos, int len, vector<string> & ret, int count, string temp) {
        if (pos > len || count<0) return;
        if (pos == len && count==0) {
            ret.push_back(temp);
            return;
        }
        bt(pos + 1, len, ret, count + 1, temp + "(");
        bt(pos +1, len, ret, count - 1, temp + ")");
    }
};
// @lc code=end

