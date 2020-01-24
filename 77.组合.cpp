/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
class Solution {
private:
    vector<int> path;
    vector<vector<int>> ans;
    int k;
    int n;
public:
    vector<vector<int>> combine(int n, int k) {
        this->n = n;
        this->k = k;
        dfs(1);
        return ans;
    }

    void dfs(int pos) {
        if (k == path.size()) {
            ans.push_back(path);
            return;
        }

        for (int i = pos; i <= n && path.size() < k; ++i) {
            path.push_back(i);
            dfs(i+1);
            path.pop_back();
        }

    }
};
// @lc code=end

