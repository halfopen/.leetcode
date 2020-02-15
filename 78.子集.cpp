/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tmp;
    vector<vector<int>> subsets(vector<int>& nums) {
        bt(0, nums);
        return ans;
    }

    void bt(int cur, vector<int> nums) {

        for(int i = cur; i < nums.size(); ++i) {
            tmp.push_back(nums[i]);
            bt(i+1, nums);
            tmp.pop_back();
        }
        ans.push_back(tmp);
    }

    
};
// @lc code=end

