/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
#include<iostream>
#include <cstring>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string str = to_string(x);
        string rstr(str);
        reverse(str.begin(), str.end());
        return str.compare(rstr) == 0;
    }
};
// @lc code=end

