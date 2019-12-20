/*
 * @lc app=leetcode.cn id=1266 lang=cpp
 *
 * [1266] 访问所有点的最小时间
 */

// @lc code=start
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ret = 0;
        for(int i=0;i < points.size() -1; ++i) {
            auto p1 = points[i];
            auto p2 = points[i+1];

            ret += max(abs(p1[0]-p2[0]), abs(p1[1]-p2[1]));
        }
        return ret;
    }
};
// @lc code=end

