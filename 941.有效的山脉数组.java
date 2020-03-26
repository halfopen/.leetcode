/*
 * @lc app=leetcode.cn id=941 lang=java
 *
 * [941] 有效的山脉数组
 */

// @lc code=start
class Solution {
    public boolean validMountainArray(int[] A) {
        if (null == A || A.length <3) return false;
        // find top
        int pos = 0;
        for (pos = 0; pos < A.length - 1; pos++) {
            if (A[pos] >= A[pos + 1]) {
                break;
            }
        }
        if (pos==0 || pos == A.length - 1) return false;
        pos++;
        for(; pos <= A.length - 1; pos++) {
            if (A[pos]>=A[pos-1]) return false;
        }
        return true;
    }
}
// @lc code=end

