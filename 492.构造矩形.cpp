/*
 * @lc app=leetcode.cn id=492 lang=cpp
 *
 * [492] 构造矩形
 */

// @lc code=start
class Solution {
public:
    vector<int> constructRectangle(int area) {
        int L, W;
        for (W = (int)sqrt(area); W >=1; W--) {
            L = (int)(area / W);
            if (L * W == area) break;
        }
        return vector<int>{L, W};
    }
};
// @lc code=end

