/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> times(26, 0);
    	for(size_t i=0;i<s.size();++i){
    		times[s[i]-'a']++;    	}
    	for(size_t i=0;i<s.size();++i){
    		if(times[s[i]-'a'] == 1){
    			return i;
    		}
    	}
    	return -1;
    }
};
// @lc code=end

