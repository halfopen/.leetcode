/*
 * @lc app=leetcode.cn id=495 lang=cpp
 *
 * [495] 提莫攻击
 */

// @lc code=start
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if(duration == 0) return 0;
        if(timeSeries.empty()) return 0;
        int res = duration;
        for(int i = 1; i < timeSeries.size(); i++){
            res += min(timeSeries[i]-timeSeries[i-1], duration);
        }
        return res;
    }
};
// @lc code=end

