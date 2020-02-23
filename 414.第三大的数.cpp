/*
 * @lc app=leetcode.cn id=414 lang=cpp
 *
 * [414] 第三大的数
 */

// @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long big, mid, small;    //最大，第二大，第三大
        big = mid = small = 1l << 63;
        for(int i : nums){
            if(i > big){
                small = mid;
                mid = big;
                big = i;
            }
            else if(i > mid && i != big){
                small = mid;
                mid = i;
            }
            else if(i > small && i != mid && i != big){
                small = i;
            }
        }
        return (small == 1l << 63) ? (int)big : (int)small;
    }
};
// @lc code=end

