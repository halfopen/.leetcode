/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> set;

        while(1 != n) {
            // cout << n << endl;
            int tmp = 0;
            while(n > 0) {
                // cout << n << endl;
                int l = n % 10;
                tmp += l*l;
                n /= 10;
            }
            if (set.find(tmp) != set.end()) {
                return false;
            }
            set.insert(tmp);
            n = tmp;
            
        }
        return true;
    }
};
// @lc code=end

