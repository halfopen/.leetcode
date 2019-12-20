/*
 * @lc app=leetcode.cn id=719 lang=cpp
 *
 * [719] 找出第 k 小的距离对
 */

// @lc code=start
class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int lo = 0;
        int hi = nums[nums.size() -1] - nums[0];

        while(lo < hi) {
            int mid = lo + (hi - lo) / 2; // 猜测的距离
            int count = 0, left = 0; // count是[lo, hi]之间，距离小于等于k的距离对的个数

            for(int right = 0; right< nums.size(); ++ right) {
                while(nums[right] - nums[left] > mid) left ++;
                count += right - left;
            }

            if (count >= k) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        return lo;
    }
};
// @lc code=end

