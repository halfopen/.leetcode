/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> record;         // value-> index map
        vector<int> ret;
        for(int i = 0; i< nums.size(); ++i) {
            int n = target - nums[i];
            if (record.find(n) != record.end()){ // if match
                ret.push_back(i);
                ret.push_back(record[n]);
                return ret;
            }
            record[nums[i]] = i;
        }

        return ret;
    }
};
// @lc code=end

