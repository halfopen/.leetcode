/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */

// @lc code=start
class Solution {
private:
    vector<vector<char>> grid;
    int m;
    int n;
    int ans = 0;
public:
    int numIslands(vector<vector<char>>& grid) {
        if (0 == grid.size()) return ans;
        this->grid = grid;

        m = grid.size();
        n = grid[0].size();

        

        for (int i = 0; i < m; ++i) {
            for(int j = 0; j < n; ++j) {
                if ('1' == this->grid[i][j]) {
                    dfs(i, j);
                    ans++;
                }
            }
        }
        return ans;
    }

    void dfs(int x, int y) {
        if (x < 0 || y < 0 || x >= m || y >= n) return;
        if ('1' == grid[x][y]) {
            grid[x][y] = '_';
            
            dfs(x + 1, y);
            dfs(x - 1, y);
            dfs(x, y + 1);
            dfs(x, y - 1);
        }
    }
};
// @lc code=end

