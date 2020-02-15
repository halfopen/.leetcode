/*
 * @lc app=leetcode.cn id=43 lang=cpp
 *
 * [43] 字符串相乘
 */

// @lc code=start
class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> res(num1.size() + num2.size());
        
        /* res从左到右存储高位到低位两两相乘的结果 */
        for(int i=0;i<num1.size();i++)
            for(int j=0;j<num2.size();j++)
                res[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
        
        /* 左侧高位，右侧低位，因此结果由右往左进位 */       
        for(int k = res.size() - 1; k>0; k--){
            if(res[k] >= 10){
                    res[k - 1] += res[k] / 10;
                    res[k] %= 10;
            }
        }
        
        // 结果为0
        if(!res[0] && !res[1]) return "0";
        
        string res_str = "";
        for(int i=0;i<res.size();i++){
            if(!i && !res[0]) continue; //最高位未进位则不处理
            res_str += (res[i] + '0');
        }
        
        
        return res_str;
    }
};
// @lc code=end

