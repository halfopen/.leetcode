/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ret;
        int f = 1;
        for(auto i=digits.rbegin();i!=digits.rend();++i){
            int n = (*i + f)%10;
            ret.push_back(n);
            f = (*i+f) / 10;
        }
        if (0 != f){
            ret.push_back(f);
        }
        reverse(ret.begin(), ret.end());
        return ret;
        
    }
};
// @lc code=end

