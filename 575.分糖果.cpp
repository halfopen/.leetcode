/*
 * @lc app=leetcode.cn id=575 lang=cpp
 *
 * [575] 分糖果
 */

// @lc code=start
class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        std::unordered_set<int> setKindsOfCandies;
		for (vector<int>::size_type i = 0; i< candies.size(); ++i) {
			setKindsOfCandies.insert(candies[i]);
		}

		return std::min(candies.size() / 2, setKindsOfCandies.size());
    }
};
// @lc code=end

