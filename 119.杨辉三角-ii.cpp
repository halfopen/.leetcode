/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1, 1);
        for(int i = 0;i <=rowIndex; ++i) {
            int last = 1;
            for (int j = 1; j < i ; ++j) {
                int t = ans[j];
                ans[j] += last;
                last = t;
                //cout << last <<endl;
            }
            //cout << "_________" <<endl;

        }
        return ans;
    }
};
// @lc code=end

