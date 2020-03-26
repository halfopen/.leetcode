/*
 * @lc app=leetcode.cn id=1018 lang=cpp
 *
 * [1018] 可被 5 整除的二进制前缀
 */

// @lc code=start
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool>result(A.size());
        int pre=0;
        for(int i=0;i<A.size();++i){
            pre=pre*2+A[i];
            if(pre%5==0) result[i]=true;
            else result[i]=false;
            pre%=5;
        }
        return result;

    }
};
// @lc code=end

