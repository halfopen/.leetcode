/*
 * @lc app=leetcode.cn id=896 lang=java
 *
 * [896] 单调数列
 */

// @lc code=start
class Solution {
    public boolean isMonotonic(int[] A) {
        if(A.length<=1)
            return true;
        boolean flag1 = false;
        boolean flag2 = false;
        for(int i=0;i<A.length-1;i++){
            if(A[i]>A[i+1]){
                flag1=true;
            }else if(A[i]<A[i+1]){
                flag2=true;
            }

            if(flag1&&flag2)
                return false;
        }
        return true;
    }
}
// @lc code=end

