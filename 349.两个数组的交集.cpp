/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> uset;
        unordered_set<int> ans;
        for(int i : nums1) {
            uset.insert(i);
        }

        for(int i : nums2) {
            if (uset.find(i) != uset.end()) {
                ans.insert(i);
            }
        }

        return vector<int>(ans.begin(), ans.end());
    }
};
// @lc code=end

